#include "004A50F5-Camera_ApplyHandiCam_3.h"
/* 0x004a50f5 Camera_ApplyHandiCam_3 full linked: callers=0 callees=15 */
int32_t _start()

{
    int32_t ebp;
    int32_t var_4 = ebp;
    int32_t var_8 = 0xffffffff;
    int32_t var_c = 0x534308;
    int32_t var_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t ebx;
    int32_t var_70 = ebx;
    int32_t esi;
    int32_t var_74 = esi;
    int32_t edi;
    int32_t var_78 = edi;
    int32_t* var_1c = &var_78;
    uint32_t eax_1 = GetVersion();
    int32_t edx = 0;
    edx = *(&eax_1 + 1);
    g_93607c = edx;
    uint32_t ecx_1 = eax_1;
    g_936078 = ecx_1;
    g_936074 = (ecx_1 << 8) + edx;
    g_936070 = eax_1 >> 0x10;

    if (!sub_4a6787(0))
    {
        sub_4a5210(0x1c);
        /* no return */
    }

    int32_t var_8_1 = 0;
    sub_4a6467();
    g_c32554 = GetCommandLineA();
    PSTR eax_5;
    int32_t ecx_5;
    eax_5 = sub_4a6335();
    g_93604c = eax_5;
    sub_4a60e8(ecx_5);
    sub_4a602f();
    sub_4a5aa8();
    STARTUPINFOA startupInfo;
    startupInfo.dwFlags = 0;
    GetStartupInfoA(&startupInfo);
    char* eax_6 = sub_4a5fd7();
    uint32_t wShowWindow;

    wShowWindow = !(startupInfo.dwFlags & 1) ? 0xa : startupInfo.wShowWindow;

    uint32_t wShowWindow_1 = wShowWindow;
    int32_t var_84 = 0;
    WPARAM eax_8 = sub_48f530(GetModuleHandleA(nullptr), eax_6);
    WPARAM var_64 = eax_8;
    sub_4a5ad5(eax_8);
    int32_t* var_18;
    int32_t ecx_7 = **var_18;
    int32_t var_6c = ecx_7;
    return sub_4a5e53(ecx_7, var_18);
}
