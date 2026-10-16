#include "00419860-BackgroundFX_OnEvent.h"
/* 0x00419860 BackgroundFX_OnEvent full linked: callers=2 callees=6 */
int32_t BackgroundFX_OnEvent(float a1 @ 0x8)

{
    long double st0;
    bool c1;
    bool c2;
    st0 = __fcos(a1 * 0.00499999989f);
    int32_t ecx;
    int32_t var_28 = ecx;
    int32_t var_2c = ecx;
    float var_1c[0x7];
    Menu_PlayMusic_5(&var_1c, a1 * 0.00200000009f, st0 * 0.25f + 1.25f, 0x43480000, 0x43960000);
    int32_t ecx_1 = BackgroundFX_Process(0x539be8, &var_1c);
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fcos(a1 * 0.00249999994f);
    int32_t var_28_2 = ecx_1;
    int32_t var_2c_2 = ecx_1;
    Menu_PlayMusic_5(&var_1c, a1 * -0.00142857141f, st0_1 * 0.150000006f + 1.14999998f,
        0x43c80000, 0x437a0000);
    int32_t ecx_2 = BackgroundFX_Process(0x539bf8, &var_1c);
    long double st0_2;
    bool c1_2;
    bool c2_2;
    st0_2 = __fsin(a1 * 0.00333333341f);
    int32_t var_28_4 = ecx_2;
    int32_t var_2c_4 = ecx_2;
    Menu_PlayMusic_5(&var_1c, a1 * 0.00111111114f, st0_2 + 2f, 0x43160000, 0x437a0000);
    return BackgroundFX_Process(0x539c08, &var_1c);
}
