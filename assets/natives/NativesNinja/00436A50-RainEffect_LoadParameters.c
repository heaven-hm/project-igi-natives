#include "00436A50-RainEffect_LoadParameters.h"
/* 0x00436a50 RainEffect_LoadParameters full linked: callers=0 callees=6 */
int32_t RainEffect_LoadParameters(void* a1)

{
    long double x87_r7 = *(a1 + 0x30);
    long double temp0 = *(a1 + 0x34);
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
        goto label_436a85;

    int32_t ecx;

    if (!*(a1 + 0x20))
    {
    label_436a92:
        int32_t var_8_2 = ecx;
        int32_t var_c_2 = ecx;
        *(a1 + 0x20) = sub_498960(Level_StartMission_4(), g_57bd80 + 0x18, *(a1 + 0x24),
            *(a1 + 0x28) * 4096f, *(a1 + 0x2c) * 4096f);
    }
    else
    {
        void* eax_2 = Level_StartMission_4();
        ecx = sub_498a70(*(a1 + 0x20), eax_2);
        *(a1 + 0x20) = 0;
    label_436a85:

        if (!*(a1 + 0x20))
            goto label_436a92;
    }
    sub_499fa0(*(a1 + 0x20), *(a1 + 0x30));
    *(a1 + 0x34) = *(a1 + 0x30);
    sub_4f1400(a1 + 0x38, a1);
    return 0;
}
