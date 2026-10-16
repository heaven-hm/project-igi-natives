#include "AI_CheckHearing_17.h"
int32_t AI_CheckHearing_17(float a1)

{
    float srcS = a1;
    int32_t result;
    result = *(srcS + 0xd8);

    if (result)
    {
        SoundSys_InitSoundSys_12();
        long double x87_r7_2 = *(srcS + 0x20) - g_bcab08;
        long double x87_r6_2 = *(srcS + 0x28) - g_bcab10;
        long double x87_r5_2 = *(srcS + 0x30) - g_bcab18;
        long double x87_r4_6 = g_bcaaf4 * x87_r5_2;
        long double x87_r3_6 = g_bcaaf0 * x87_r6_2;
        float v_c = g_bcaae8 * x87_r5_2 + g_bcaae4 * x87_r6_2 + g_bcaae0 * x87_r7_2;
        float valA1 = *(srcS + 0xa0);
        a1 = valA1;
        float v_8_1 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_2;
        float v_4_1 = g_bcab00 * x87_r5_2 + g_bcaafc * x87_r6_2 + g_bcaaf8 * x87_r7_2;
        void v_1c;
        result = Render_DrawBoneMesh(&v_c, valA1, &v_1c);

        if (!result)
        {
            result = DynObj_ParseConfigFile_16(srcS);

            if (result != 0xffffffff && result < 4)
                return AI_FireWeapon_17(srcS);
        }
    }

    return result;
}
