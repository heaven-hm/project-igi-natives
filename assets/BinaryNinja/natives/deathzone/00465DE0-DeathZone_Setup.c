// Original IGI.EXE function: DeathZone_Setup (VA 0x00465DE0; static CFG gate PASS, CFG score 1.000).
#include "DeathZone_Setup.h"
int32_t DeathZone_Setup(void* a1)

{
    int32_t valA = *(a1 + 0x130);

    if (valA)
    {
        int16_t valA1 = Script_ExecuteLevelScript_16();
        int32_t objC;
        objC = *(*(a1 + 0x130) + 0x1c);
        valA = TaskType_IsDerivedFrom(objC, valA1);

        if (valA)
        {
            void* srcS1 = *(a1 + 0x130);
            int16_t valA3 = Menu_PlayMusic_21();
            void* v_8;

            if (*(srcS1 + 0x1c) != valA3)
            {
                valA = Script_ParseEnumReal32_29(srcS1);

                if (!valA)
                {
                    v_8 = a1;
                    void* v_4_2 = srcS1 + 0x108;
                    int32_t i = 0;
                    valA = AI_CombatTarget_18();

                    if (*valA > 0)
                    {
                        int32_t srcS4 = 8;

                        do
                        {
                            int32_t tmpD2 = 0;
                            tmpD2 = *(*(AI_CombatTarget_18() + srcS4) + 0x1c);
                            uint32_t valA13 = AI_CheckHearing_24();
                            (*(((tmpD2 + valA13 * 0x180) << 2) + &g_a96ae0))(
                                *(AI_CombatTarget_18() + srcS4), &v_8);
                            i += 1;
                            srcS4 += 4;
                            valA = AI_CombatTarget_18();
                        } while (i < *valA);
                    }
                }
            }
            else
            {
                void* ctxB1 = *(srcS1 + 0x14);
                valA = Menu_PlayMusic_21();

                if (*(ctxB1 + 0x1c) == valA)
                    srcS1 = ctxB1;

                long double x87_r7_1 = *(srcS1 + 0x108);
                long double f0_1 = 0f;
                x87_r7_1 - f0_1;
                valA = (x87_r7_1 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe;

                if (!(*(&valA + 1) & 0x40))
                {
                    v_8 = a1;
                    void* v_4_1 = srcS1 + 0x108;
                    int32_t i_1 = 0;
                    valA = AI_CombatTarget_18();

                    if (*valA > 0)
                    {
                        int32_t srcS2 = 8;
                        int32_t* valA10;

                        do
                        {
                            int32_t valA5 = 0;
                            valA5 = *(*(AI_CombatTarget_18() + srcS2) + 0x1c);
                            uint32_t valA7 = AI_CheckHearing_24();
                            (*(((valA5 + valA7 * 0x180) << 2) + &g_a96ae0))(
                                *(AI_CombatTarget_18() + srcS2), &v_8);
                            i_1 += 1;
                            srcS2 += 4;
                            valA10 = AI_CombatTarget_18();
                        } while (i_1 < *valA10);

                        return valA10;
                    }
                }
            }
        }
    }

    return valA;
}
