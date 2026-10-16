#include "00476D90-Weapon_CycleFireMode_4.h"
/* 0x00476d90 Weapon_CycleFireMode_4 full linked: callers=1 callees=5 */
float sub_476d90(float a1) __location("eax")

{
    float result = sub_4fc7b0(a1);

    if (!result)
    {
        float var_10_1 = a1;
        int32_t eax = Level_LoadObjects_4();
        void var_14;
        sub_4fc0e0(a1, 44.6008873f, 1f, 0.920000017f, Level_StartMission_4(), eax, &var_14);
        result = *(a1 + 0x1b8);

        if (!result)
        {
            float ecx_2 = *(a1 + 0x110);
            long double x87_r7_4 = *(a1 + 0x10c) * 0.985000014f;
            *(a1 + 0x108) = *(a1 + 0x108) * 0.985000014f;
            *(a1 + 0x10c) = x87_r7_4;
            *(a1 + 0x110) = ecx_2 * 0.985000014f;
            return sub_4ecdb0(a1 + 0xf0);
        }
    }

    return result;
}
