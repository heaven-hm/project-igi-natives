#include "gi_platform.h"
#include "00476D90-Weapon_CycleFireMode_4.h"
float Weapon_CycleFireMode_4(float a1) __location("valA")

{
    float result = Script_ParseEnumReal32_29(a1);

    if (!result)
    {
        float v_10_1 = a1;
        int32_t valA = Level_LoadObjects_4();
        char v_14;
        Script_FormatString_28(a1, 44.6008873.0f, 1.0f, 0.920000017.0f, Level_StartMission_4(), valA, &v_14);
        result = (*(int32_t*)(uintptr_t)(a1 + 0x1b8));

        if (!result)
        {
            float objC2 = (*(int32_t*)(uintptr_t)(a1 + 0x110));
            long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x10c)) * 0.985000014.0f;
            (*(int32_t*)(uintptr_t)(a1 + 0x108)) = (*(int32_t*)(uintptr_t)(a1 + 0x108)) * 0.985000014.0f;
            (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = x87_r7_4;
            (*(int32_t*)(uintptr_t)(a1 + 0x110)) = objC2 * 0.985000014.0f;
            return SoundSys_InitSoundSys_17(a1 + 0xf0);
        }
    }

    return result;
}
