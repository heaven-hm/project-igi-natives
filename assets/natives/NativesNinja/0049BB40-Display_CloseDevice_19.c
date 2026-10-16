#include "0049BB40-Display_CloseDevice_19.h"
/* 0x0049bb40 Display_CloseDevice_19 full linked: callers=1 callees=40 */
int32_t sub_49bb40()

{
    int32_t eax = sub_4cfc30();
    sub_4b0ec0(sub_4950e0(), eax, sub_49df60);
    int32_t eax_2 = sub_4cfc40();
    sub_4b0ec0(sub_4950e0(), eax_2, sub_49f700);
    int32_t eax_4 = sub_4cfc50();
    sub_4b0ec0(sub_4950e0(), eax_4, sub_49c850);
    sub_4b0ec0(sub_4950e0(), g_b817a0, sub_49faf0);
    sub_4b0ec0(sub_4950e0(), g_b8170c, sub_49faf0);
    int32_t eax_9 = sub_4cfc60();
    sub_4b0ec0(sub_4950e0(), eax_9, sub_49feb0);
    int32_t eax_11 = sub_4cea80();
    sub_4b0ec0(sub_4950e0(), eax_11, sub_49fb10);
    int32_t eax_13 = sub_4cea90();
    sub_4b0ec0(sub_4950e0(), eax_13, sub_49fe60);
    int32_t eax_15 = sub_4cea60();
    sub_4b0ec0(sub_4950e0(), eax_15, sub_49c7d0);
    int32_t eax_17 = sub_4cea70();
    sub_4b0ec0(sub_4950e0(), eax_17, sub_49c800);

    for (int32_t* i = &g_721560; i < 0x724458; i = &i[0x3ea])
    {
        i[1] = 0;
        *i = 0;
    }

    void* edx = g_bcade8;
    g_72350c = 0;
    g_7205b0 = sub_4b7430(edx, sub_49d730);
    int32_t eax_21 = sub_4b7430(g_bcad7c, sub_49db10);
    void* ecx_1 = g_bcadac;
    g_7ac09c = eax_21;
    int32_t eax_22 = sub_4b7430(ecx_1, sub_49d480);
    void* edx_1 = g_bcade8;
    g_7234b8 = eax_22;
    g_723504 = sub_4b7430(edx_1, sub_49d960);
    int32_t eax_25 = sub_4b7430(g_bcadac, sub_49d810);
    void* ecx_2 = g_bcad7c;
    g_7addd4 = eax_25;
    int32_t eax_26 = sub_4b7430(ecx_2, sub_49db10);
    void* edx_2 = g_bcadac;
    g_7205b8 = eax_26;
    g_7205bc = sub_4b7430(edx_2, sub_49db20);
    g_723508 = sub_4b7430(g_bcadac, sub_49ddf0);
    sub_495200(sub_49bd30);
    int32_t eax_30 = sub_4d14d0();
    return QTask_RemoveEventCallback(sub_4e5350(), eax_30, sub_49be10);
}
