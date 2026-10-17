// Original IGI.EXE function: AI_CheckHearing_17 (VA 0x0045F140; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_17.h"
int32_t AI_CheckHearing_17(float context)

{
    float source_val = context;
    int32_t result;
    result = *(source_val + 0xd8);

    if (result)
    {
        SoundSys_InitSoundSys_12();
        long double fpu_val_7_2 = *(source_val + 0x20) - g_bcab08;
        long double fpu_val_6_2 = *(source_val + 0x28) - g_bcab10;
        long double fpu_val_5_2 = *(source_val + 0x30) - g_bcab18;
        long double fpu_val_4_6 = g_bcaaf4 * fpu_val_5_2;
        long double fpu_val_3_6 = g_bcaaf0 * fpu_val_6_2;
        float item_c = g_bcaae8 * fpu_val_5_2 + g_bcaae4 * fpu_val_6_2 + g_bcaae0 * fpu_val_7_2;
        float data_1 = *(source_val + 0xa0);
        context = data_1;
        float item_8_1 = fpu_val_4_6 + fpu_val_3_6 + g_bcaaec * fpu_val_7_2;
        float item_4_1 = g_bcab00 * fpu_val_5_2 + g_bcaafc * fpu_val_6_2 + g_bcaaf8 * fpu_val_7_2;
        void item_1c;
        result = Render_DrawBoneMesh(&item_c, data_1, &item_1c);

        if (!result)
        {
            result = DynObj_ParseConfigFile_16(source_val);

            if (result != 0xffffffff && result < 4)
                return AI_FireWeapon_17(source_val);
        }
    }

    return result;
}
