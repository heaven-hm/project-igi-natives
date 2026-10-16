#include "gi_platform.h"
#include "00419860-BackgroundFX_OnEvent.h"
int32_t BackgroundFX_OnEvent(float a1 )

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fcos(a1 * 0.00499999989.0f);
    int32_t objC;
    int32_t v_28 = objC;
    int32_t v_2c = objC;
    float v_1c[0x7];
    Menu_PlayMusic_5(&v_1c, a1 * 0.00200000009.0f, fp0 * 0.25.0f + 1.25.0f, 0x43480000, 0x43960000);
    int32_t objC1 = BackgroundFX_Process(0x539be8, &v_1c);
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(a1 * 0.00249999994.0f);
    int32_t v_28_2 = objC1;
    int32_t v_2c_2 = objC1;
    Menu_PlayMusic_5(&v_1c, a1 * -0.00142857141.0f, fp0_1 * 0.150000006.0f + 1.14999998.0f,
        0x43c80000, 0x437a0000);
    int32_t objC2 = BackgroundFX_Process(0x539bf8, &v_1c);
    long double fp0_2;
    bool c1_2;
    bool c2_2;
    fp0_2 = __fsin(a1 * 0.00333333341.0f);
    int32_t v_28_4 = objC2;
    int32_t v_2c_4 = objC2;
    Menu_PlayMusic_5(&v_1c, a1 * 0.00111111114.0f, fp0_2 + 2.0f, 0x43160000, 0x437a0000);
    return BackgroundFX_Process(0x539c08, &v_1c);
}
