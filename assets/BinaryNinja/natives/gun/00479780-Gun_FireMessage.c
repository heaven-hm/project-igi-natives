// Original IGI.EXE function: Gun_FireMessage (VA 0x00479780; static CFG gate PASS, CFG score 1.000).
#include "Gun_FireMessage.h"
int32_t Gun_FireMessage(float a1, void* a2)

{
    void* ctxB = *(a1 + 0x128);
    uint32_t valA1 = Script_ExecuteLevelScript_11();
    int32_t objC = 0;
    objC = *(a1 + 0x1c);
    int16_t result = (*(((valA1 * 0x180 + objC) << 2) + &g_a96ae0))(a1, a2);
    result = *(a2 + 1);

    if (result)
    {
        int32_t tmpD1 = *(ctxB + 0x6d0);
        void* v_c_1 = a1 + 0x150;
        void* valA7 = *(a2 + 0x2c);
        int32_t v_1c = 0x10;
        int32_t v_14_1 = 0x46;
        int32_t v_10_1 = tmpD1;
        float v_8_1 = a1;

        if (!valA7)
        {
            int32_t v_18_2 = 1;
            int32_t v_4_2 = 0;
        }
        else
        {
            int32_t v_18_1 = AI_CombatTarget_19(valA7);
            int32_t v_4_1 = *(a2 + 0x2c);
        }

        AI_EventBroadcast(&v_1c);
        long double x87_r7_7;

        do
        {
            long double x87_r7_3 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
            a1 = x87_r7_3 + x87_r7_3;
            long double x87_r7_6 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
            x87_r7_7 = x87_r7_6 + x87_r7_6;
            long double x87_r6_4 = sqrtl(x87_r7_7 * x87_r7_7 + a1 * a1);
            long double f0_1 = 1f;
            x87_r6_4 - f0_1;
            result = (x87_r6_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f0_1) ? 1 : 0) << 0xa
                | (x87_r6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800;
        } while (!(*(&result + 1) & 0x41));

        long double x87_r7_9 =
            x87_r7_7 * *(ctxB + 0x678) * 0.0174532924f + *(ctxB + 0x670) * 0.0174532924f;
        *(a2 + 0x20) = *(ctxB + 0x674) * 0.0174532924f * a1 + *(ctxB + 0x66c) * 0.0174532924f;
        *(a2 + 0x24) = x87_r7_9;
    }

    return result;
}
