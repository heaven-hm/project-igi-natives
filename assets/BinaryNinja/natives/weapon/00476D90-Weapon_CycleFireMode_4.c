#include "Weapon_CycleFireMode_4.h"
float Weapon_CycleFireMode_4(float a1) __location("valA")

{
    float result = Script_ParseEnumReal32_29(a1);

    if (!result)
    {
        float v_10_1 = a1;
        int32_t valA = Level_LoadObjects_4();
        void v_14;
        Script_FormatString_28(a1, 44.6008873f, 1f, 0.920000017f, Level_StartMission_4(), valA, &v_14);
        result = *(a1 + 0x1b8);

        if (!result)
        {
            float objC2 = *(a1 + 0x110);
            long double x87_r7_4 = *(a1 + 0x10c) * 0.985000014f;
            *(a1 + 0x108) = *(a1 + 0x108) * 0.985000014f;
            *(a1 + 0x10c) = x87_r7_4;
            *(a1 + 0x110) = objC2 * 0.985000014f;
            return SoundSys_InitSoundSys_17(a1 + 0xf0);
        }
    }

    return result;
}
