// Original IGI.EXE function: Weapon_CycleFireMode_4 (VA 0x00476D90; static CFG gate PASS, CFG score 1.000).
#include "Weapon_CycleFireMode_4.h"
float Weapon_CycleFireMode_4(float context) {
    float result = Script_ParseEnumReal32_29(context);

    if (!result)
    {
        float item_10_1 = context;
        int32_t data_val = Level_LoadObjects_4();
        void item_14;
        Script_FormatString_28(context, 44.6008873f, 1.0f, 0.920000017f, Level_StartMission_4(), data_val, &item_14);
        result = *(context + 0x1b8);

        if (!result)
        {
            float entity_2 = *(context + 0x110);
            long double fpu_val_7_4 = *(context + 0x10c) * 0.985000014f;
            *(context + 0x108) = *(context + 0x108) * 0.985000014f;
            *(context + 0x10c) = fpu_val_7_4;
            *(context + 0x110) = entity_2 * 0.985000014f;
            return SoundSys_InitSoundSys_17(context + 0xf0);
        }
    }

    return result;
}
