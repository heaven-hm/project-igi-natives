// Original IGI.EXE function: Ladder_ClimbTick (VA 0x0040D6B0; static CFG gate PASS, CFG score 1.000).
#include "Ladder_ClimbTick.h"
int32_t Ladder_ClimbTick(void* a1, void* a2)

{
    void* ctxB = *(a1 + 8);

    if (*(a2 + 0x538) == 8)
    {
        long double x87_r7_1 = *(a2 + 0x540);
        long double f3_1 = *(a2 + 0xd88);
        x87_r7_1 - f3_1;

        if (!(*(&((x87_r7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            Render_SetupLighting_10(a2 + 0x68, 0, 0f);
            int32_t tmpD1 = *(a2 + 0xd84);
            int32_t valA3 = *(a2 + 0xd8c);
            *(a2 + 0xd88) = *(a2 + 0x540);
            int32_t objC2 = *(a2 + 0xd80);
            *(a2 + 0xd84) = 0;
            *(a2 + 0xd80) = objC2 + tmpD1;
            int32_t v_58_1 = *(((valA3 + 1) << 2) + &g_538c14) + 1;
            *(a2 + 0xd8c) = COMBINE(0, valA3 + 1) % 0xc;
            char v_20[0x20];
            Game_DataSymbolLoad(&v_20, "walk_ladder_%d");
            struct status_msg* valA6 = SoundSys_SetMasterVolume_7(Script_FormatString(), &v_20);

            if (valA6)
                SoundSys_StopSoundSample_7(valA6, a2 + 0x20);

            int32_t valA7 = *(a2 + 0xfc);
            int32_t v_3c = 0xe;
            int32_t v_38_1 = valA7;
            int32_t v_34_1 = 0x46;
            int32_t v_30_1 = 0x46a00000;
            int32_t v_2c_1 = DynObj_UpdateDynTree_4(a2);
            void* v_28_1 = a2;
            void* v_24_1 = a2;
            AI_EventBroadcast(&v_3c);
        }
    }

    int32_t result = *(a2 + 0xd84);

    if (!result)
    {
        if (ctxB & 0x80)
        {
            if (*(a2 + 0xd80) == *(a2 + 0xd7c) - 6)
            {
                void* objC6 = *(a1 + 4);
                *(a1 + 0xc) = *(a1 + 0x10);
                *(a1 + 0x10) = 0x27;
                int32_t valA11 = *(objC6 + 0x9c);
                *(a1 + 0x14) = valA11;
                return valA11(a1, a2);
            }

            *(a2 + 0xd84) = 1;
            result = Render_SetupLighting_10(a2 + 0x68, 0, 1f);
        }

        if (*(&ctxB + 1) & 1)
        {
            if (!*(a2 + 0xd80))
            {
                *(a2 + 0xd7a) = 1;
                int32_t* objC7 = *(a1 + 4);
                *(a1 + 0xc) = *(a1 + 0x10);
                *(a1 + 0x10) = 0;
                int32_t valA15 = *objC7;
                *(a1 + 0x14) = valA15;
                return valA15(a1, a2);
            }

            *(a2 + 0xd84) = 0xffffffff;
            result = Render_SetupLighting_10(a2 + 0x68, 0, -1f);
        }
    }

    long double x87_r7_2 = *(a2 + 0x1d4);
    long double f4 = 0f;
    x87_r7_2 - f4;
    result = (x87_r7_2 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f4) ? 1 : 0) << 0xa
        | (x87_r7_2 == f4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_3 = *(a2 + 0x134);
        long double f5_1 = 0f;
        x87_r7_3 - f5_1;
        result = (x87_r7_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f5_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            void* objC8 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0x28;
            int32_t valA18 = *(objC8 + 0xa0);
            *(a1 + 0x14) = valA18;
            return valA18(a1, a2);
        }
    }

    if (ctxB & 0x20000)
        *(a2 + 0xd7a) = 1;

    return result;
}
