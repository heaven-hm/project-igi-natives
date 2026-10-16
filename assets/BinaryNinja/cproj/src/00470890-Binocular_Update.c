#include "gi_platform.h"
#include "00470890-Binocular_Update.h"
int32_t* Binocular_Update(void* a1, int32_t* a2)

{
    void* tmpD = a2[0xb];
    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));
    void* valA = *(tmpD + 0x4ec);
    int32_t* valA1 = (*(int32_t*)(uintptr_t)(*(a1 + 0x128) + 0x6e4));
    void* v_4 = tmpD;

    if (*i && i)
    {
        int32_t valA2 = g_afa7e0;

        do
        {
            int32_t* dstD1 = *i;
            void* objC4;

            if (!dstD1)
                objC4 = nullptr;
            else
            {
                int32_t objC1 = *dstD1;
                int32_t objC2 = -(objC1);
                objC4 = (objC2 - objC2) & dstD1;
            }

            *((valA2 << 2) + &g_afa6e0) = objC4;
            g_afa7e0 = valA2 + 1;
            uint32_t valA5 = AI_AlertAllies_17();
            int32_t tmpD1 = 0;
            tmpD1 = i[7];
            ((int(*)())(uintptr_t)(*(((valA5 * 0x180 + tmpD1) << 2) + &g_a96ae0)))(i, a2);
            valA2 = g_afa7e0 - 1;
            g_afa7e0 = valA2;
            i = *((valA2 << 2) + &g_afa6e0);
        } while (i);

        tmpD = v_4;
    }

    if (*(tmpD + 0xcf5))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x1b0)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) = 0;
        return 0;
    }

    if (a2[5] && !(*(int32_t*)(uintptr_t)(a1 + 0x1b8)))
    {
        int32_t srcS = a2[1];

        if (srcS)
            memcpy(a1 + 0x150, srcS, 0x18);

        void* valA9 = a2[2];

        if (!valA9)
        {
            int32_t valA13 = (*(int32_t*)(uintptr_t)(a1 + 0x80));
            (*(int32_t*)(uintptr_t)(a1 + 0x168)) = (*(int32_t*)(uintptr_t)(a1 + 0x74));
            int32_t objC12 = (*(int32_t*)(uintptr_t)(a1 + 0x8c));
            (*(int32_t*)(uintptr_t)(a1 + 0x16c)) = valA13;
            (*(int32_t*)(uintptr_t)(a1 + 0x170)) = objC12;
        }
        else
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x168)) = *(valA9 + 4);
            (*(int32_t*)(uintptr_t)(a1 + 0x16c)) = (*(int32_t*)(uintptr_t)(a2[2] + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x170)) = (*(int32_t*)(uintptr_t)(a2[2] + 0x1c));
        }

        if ((*(int32_t*)(uintptr_t)(a1 + 0x1b0)))
        {
            long double fpu7 = *(tmpD + 0x1cc);
            long double f1 = 0.0f;
            fpu7 - f1;

            if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
                | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                long double x87_r7_1 = *(tmpD + 0x12c);
                long double f3_1 = 0.0f;
                x87_r7_1 - f3_1;

                if (!(*(&((x87_r7_1 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    int32_t valA16 = 0;
                    valA16 = !(*(int32_t*)(uintptr_t)(a1 + 0x1bc));
                    (*(int32_t*)(uintptr_t)(a1 + 0x1bc)) = valA16;
                }
            }

            long double x87_r7_2 = *(tmpD + 0x1cc);
            long double f2 = 0.0f;
            x87_r7_2 - f2;
            long double x87_r7_3;
            long double f5_1;

            if (!(*(&((x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                x87_r7_3 = *(tmpD + 0x12c);
                f5_1 = 0.0f;
                x87_r7_3 - f5_1;
            }

            int32_t* valA19;

            if (*(&((x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&(
                (x87_r7_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(int32_t*)(uintptr_t)(a1 + 0x1bc)))
            {
                long double x87_r7_4 = *(tmpD + 0x1e8);
                long double f4_1 = 0.0f;
                x87_r7_4 - f4_1;
                long double x87_r7_5;
                long double f7_1;

                if (*(&((x87_r7_4 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    x87_r7_5 = *(tmpD + 0x1cc);
                    f7_1 = 0.0f;
                    x87_r7_5 - f7_1;
                }

                void* objC15;
                long double x87_r7_9;

                if (*(&((x87_r7_4 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40 && (*(&(
                    (x87_r7_5 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40 || (*(int32_t*)(uintptr_t)(a1 + 0x1bc))))
                {
                    long double x87_r7_6 = *(tmpD + 0x1ec);
                    long double f8_1 = 0.0f;
                    x87_r7_6 - f8_1;

                    if (*(&((x87_r7_6 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_6, f8_1) ? 1 : 0) << 0xa
                            | (x87_r7_6 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        valA19 = Binocular_Process(a1);
                    else
                    {
                        objC15 = valA;
                        long double x87_r7_7 = *(objC15 + 0x1e4);
                        long double f9_1 = valA1[2];
                        x87_r7_7 - f9_1;

                        if (*(&((x87_r7_7 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_7, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_7 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            x87_r7_9 = *(objC15 + 0x1e4) * 1.03999996.0f;
                            goto label_470ae3;
                        }

                        valA19 = Binocular_Process(a1);
                    }
                }
                else
                {
                    objC15 = valA;
                    long double x87_r7_10 = *(objC15 + 0x1e4);
                    long double f6_1 = valA1[1];
                    x87_r7_10 - f6_1;

                    if (*(&((x87_r7_10 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_10, f6_1) ? 1 : 0) << 0xa
                            | (x87_r7_10 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        valA19 = Binocular_Process(a1);
                    else
                    {
                        x87_r7_9 = *(objC15 + 0x1e4) * 0.959999979.0f;
    label_470ae3: ;
                        *(objC15 + 0x1e4) = x87_r7_9;
                        valA19 = (*(int32_t*)(uintptr_t)(a1 + 0x1c4));

                        if (!valA19 || !*valA19)
                        {
                            Binocular_Process(a1);
                            struct status_msg* valA21 = SoundSys_SetMasterVolume_7(v_4, "bin_zoom_1");

                            if (!valA21)
                            {
                                (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) = 0;
                                return valA21;
                            }

                            int32_t* valA22 = QTask_LinkEventHandler_2(valA21);
                            (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) = 0;
                            (*(int32_t*)(uintptr_t)(a1 + 0x1c4)) = valA22;
                            return valA22;
                        }
                    }
                }
            }
            else
            {
                (*(int32_t*)(uintptr_t)(valA + 0x1e4)) = *valA1;
                Binocular_Process(a1);
                valA19 = Binocular_Process(a1);
            }

            (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) = 0;
            return valA19;
        }

        AI_CombatTarget_24(*(tmpD + 0x4ec));
        (*(int32_t*)(uintptr_t)(valA + 0x1e4)) = *valA1;
        (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x1b0)) = 1;
        (*(int32_t*)(uintptr_t)(a1 + 0x1bc)) = 0;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) = 0;
    return 0;
}
