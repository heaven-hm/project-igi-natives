#define _POSIX_C_SOURCE 200809L
#define _XOPEN_SOURCE 700
#define _DARWIN_C_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <signal.h>
#include <setjmp.h>
#include <ucontext.h>
#include <dlfcn.h>
#include <unistd.h>
#include "gi_platform.h"

/* Declarations for smoke-testing natives */
extern int32_t Particle_ResetEmitters_6(void);
extern int32_t QTask_CreateTask(void);
extern int32_t QTask_CloseEvent(void);
extern int32_t QTask_DispatchEvent(void);
extern void QTask_Init(void);
extern int* QTask_Update(void);
extern void QTask_OnEvent(void);

static sigjmp_buf g_test_jmp;
static volatile sig_atomic_t g_in_test = 0;
static volatile sig_atomic_t g_faults = 0;
static volatile sig_atomic_t g_last_signal = 0;
static volatile uintptr_t g_last_pc = 0;
static volatile uintptr_t g_last_lr = 0;
static volatile uintptr_t g_last_fault_address = 0;

static uintptr_t context_pc(void* uctx) {
    ucontext_t* context = (ucontext_t*)uctx;
#if defined(__arm64__) || defined(__aarch64__)
    g_last_lr = (uintptr_t)context->uc_mcontext->__ss.__lr;
    return (uintptr_t)context->uc_mcontext->__ss.__pc;
#elif defined(__x86_64__)
    g_last_lr = (uintptr_t)context->uc_mcontext->__ss.__rip;
    return (uintptr_t)context->uc_mcontext->__ss.__rip;
#else
    (void)context;
    return 0;
#endif
}

static void print_fault_details(void) {
    Dl_info pc_info = {0};
    Dl_info lr_info = {0};
    dladdr((void*)g_last_pc, &pc_info);
    dladdr((void*)g_last_lr, &lr_info);
    printf("FAULT (pc=%p address=%p", (void*)g_last_pc,
           (void*)g_last_fault_address);
    if (pc_info.dli_fname)
        printf(" in %s+0x%lx", pc_info.dli_fname,
               (unsigned long)(g_last_pc - (uintptr_t)pc_info.dli_fbase));
    if (lr_info.dli_fname)
        printf(" caller=%s+0x%lx", lr_info.dli_fname,
               (unsigned long)(g_last_lr - (uintptr_t)lr_info.dli_fbase));
    puts("); engine state is unavailable)");
}

static void test_segv_handler(int sig, siginfo_t* info, void* uctx) {
    if (g_in_test) {
        g_in_test = 0;
        g_faults++;
        g_last_signal = sig;
        g_last_pc = context_pc(uctx);
        g_last_fault_address = (uintptr_t)info->si_addr;
        siglongjmp(g_test_jmp, sig);
    }
    _exit(128 + sig);
}

static void setup_signals(void) {
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = test_segv_handler;
    sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGSEGV, &sa, NULL);
    sigaction(SIGBUS, &sa, NULL);
}

int main(int argc, char** argv) {
    setup_signals();

    printf("====================================================\n");
    printf("  Project I.G.I - Native C Library Diagnostic (macOS)\n");
    printf("====================================================\n");

    uint32_t tick = GetTickCount();
    printf("[+] Platform: macOS Darwin (mach_absolute_time tick: %u ms)\n", tick);
    printf("[+] Calling representative native functions with stubbed engine state...\n\n");

    // Test 1: QTask_CreateTask (0x401000)
    printf("  [TEST 1] QTask_CreateTask() [0x401000]: ");
    fflush(stdout);
    g_in_test = 1;
    if (sigsetjmp(g_test_jmp, 1) == 0) {
        int32_t res = QTask_CreateTask();
        g_in_test = 0;
        printf("RETURNED (value: %d)\n", res);
    } else {
        printf("signal %d; ", (int)g_last_signal);
        print_fault_details();
    }

    // Test 2: QTask_CloseEvent (0x4010A0)
    printf("  [TEST 2] QTask_CloseEvent() [0x4010A0]: ");
    fflush(stdout);
    g_in_test = 1;
    if (sigsetjmp(g_test_jmp, 1) == 0) {
        int32_t res = QTask_CloseEvent();
        g_in_test = 0;
        printf("RETURNED (value: %d)\n", res);
    } else {
        print_fault_details();
    }

    // Test 3: QTask_DispatchEvent (0x4010B0)
    printf("  [TEST 3] QTask_DispatchEvent() [0x4010B0]: ");
    fflush(stdout);
    g_in_test = 1;
    if (sigsetjmp(g_test_jmp, 1) == 0) {
        int32_t res = QTask_DispatchEvent();
        g_in_test = 0;
        printf("RETURNED (value: %d)\n", res);
    } else {
        print_fault_details();
    }

    // Test 4: Particle_ResetEmitters_6 (0x532490) - user target
    printf("  [TEST 4] Particle_ResetEmitters_6() [0x532490]: ");
    fflush(stdout);
    g_in_test = 1;
    if (sigsetjmp(g_test_jmp, 1) == 0) {
        int32_t res = Particle_ResetEmitters_6();
        g_in_test = 0;
        printf("RETURNED (value: %d)\n", res);
    } else {
        print_fault_details();
    }

    // Test 5: QTask_Init (0x4010D0)
    printf("  [TEST 5] QTask_Init() [0x4010D0]: ");
    fflush(stdout);
    g_in_test = 1;
    if (sigsetjmp(g_test_jmp, 1) == 0) {
        QTask_Init();
        g_in_test = 0;
        printf("RETURNED (void)\n");
    } else {
        print_fault_details();
    }

    printf("\n[HARNESS] %d of 5 calls faulted. This checks only the native library in an\n", (int)g_faults);
    printf("          isolated process with stubbed engine state; it does not run IGI.\n");
    printf("====================================================\n");
    return g_faults == 0 ? 0 : 1;
}
