// Original IGI.EXE function: Ladder_GetOnTop (VA 0x0040D920; static CFG gate PASS, CFG score 1.000).
#include "Ladder_GetOnTop.h"
int32_t* Ladder_GetOnTop(void* a1, void* a2)

{
    int32_t* result = *(a2 + 0x538);
    int32_t ctxB = *(a1 + 8);

    if (result == 8)
    {
        long double x87_r7_1 = *(a2 + 0x540);
        long double f3_1 = *(a2 + 0xd88);
        x87_r7_1 - f3_1;
        result = (x87_r7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            *(a2 + 0xd88) = *(a2 + 0x540);
            int32_t v_50_1 = *((*(a2 + 0xd8c) << 2) + &g_538c18) + 1;
            int32_t valA1;
            *(a2 + 0xd8c) = COMBINE(0, valA1 + 1) % 0xc;
            char v_20[0x20];
            Game_DataSymbolLoad(&v_20, "walk_ladder_%d");
            struct status_msg* valA5 = SoundSys_SetMasterVolume_7(Script_FormatString(), &v_20);

            if (valA5)
                SoundSys_StopSoundSample_7(valA5, a2 + 0x20);

            int32_t tmpD3 = *(a2 + 0xfc);
            int32_t v_3c = 0xe;
            int32_t v_38_1 = tmpD3;
            int32_t v_34_1 = 0x46;
            int32_t v_30_1 = 0x46a00000;
            int32_t v_2c_1 = DynObj_UpdateDynTree_4(a2);
            void* v_28_1 = a2;
            void* v_24_1 = a2;
            result = AI_EventBroadcast(&v_3c);
        }
    }

    if (!(ctxB & 1))
    {
        if (ctxB & 0x20000)
            *(a2 + 0xd7a) = 1;

        return result;
    }

    void* tmpD4 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0x25;
    int32_t valA7 = *(tmpD4 + 0x94);
    *(a1 + 0x14) = valA7;
    return valA7(a1, a2);
}
