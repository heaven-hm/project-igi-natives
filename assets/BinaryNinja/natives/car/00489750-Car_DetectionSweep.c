// Original IGI.EXE function: Car_DetectionSweep (VA 0x00489750; static CFG gate PASS, CFG score 1.000).
#include "Car_DetectionSweep.h"
void* Car_DetectionSweep(void* a1, double* a2, float a3, int32_t a4)

{
    int32_t dstD = **&g_5c8ac0;
    int32_t v_2c = dstD;
    void* result = Frames_GetUpdateCounter() & 0x80000003;

    if (result < 0)
        result = ((result - 1) | 0xfffffffc) + 1;

    void* ctxB = a1;

    if (*(ctxB + 0xc) == result)
    {
        a1 = nullptr;

        if (dstD > 0)
        {
            int32_t* v_30_1 = 8;
            int32_t* flagP1 = ctxB + 0x30;

            do
            {
                void* srcS1 = *(v_30_1 + g_5c8ac0);

                if (srcS1 != a3)
                {
                    uint32_t valA6 = FX_ExplosionSpawn_13();
                    int32_t objC2 = 0;
                    objC2 = *(srcS1 + 0x1c);
                    int32_t v_28;
                    (*(((valA6 * 0x180 + objC2) << 2) + &g_a96ae0))(srcS1, &v_28);
                    int16_t v_4;

                    if (!*(&v_4 + 1) || !(v_28 & *(ctxB + 0x14)))
                    {
                    label_489893:

                        if (*(flagP1 + 0x2a))
                            FX_FireBallUpdate_12(flagP1);
                    }
                    else
                    {
                        int32_t valA11 = *(ctxB + 0x10);
                        int32_t v_8;
                        void* dstD1;

                        if (v_8 != a4)
                        {
                            if (!(valA11 & 0xc))
                                goto label_489893;

                            if (v_4)
                            {
                                if (!(valA11 & 4))
                                    goto label_489893;

                                goto label_489838;
                            }

                            if (!(valA11 & 8))
                                goto label_489893;

                        label_489838:
                            dstD1 = ctxB + 0x18;
                            goto label_489840;
                        }

                        if (!(valA11 & 3))
                            goto label_489893;

                        if (v_4)
                        {
                            if (!(valA11 & 1))
                                goto label_489893;

                            dstD1 = ctxB + 0x24;
                            goto label_489840;
                        }

                        if (!(valA11 & 2))
                            goto label_489893;

                        dstD1 = ctxB + 0x24;
                    label_489840:

                        if (!*(flagP1 + 0x2a))
                            FX_FragmentSimulate_12(ctxB, dstD1, srcS1, a1);
                        else if (*flagP1[2] != srcS1)
                        {
                            FX_FireBallUpdate_12(flagP1);
                            FX_FragmentSimulate_12(ctxB, dstD1, srcS1, a1);
                        }

                        double v_20[0x3];
                        AI_TestCandidate(ctxB, flagP1, &v_20, a2, a3);
                        dstD = v_2c;
                    }
                }
                else if (*(flagP1 + 0x2a))
                    FX_FireBallUpdate_12(flagP1);

                result = a1 + 1;
                flagP1 = &flagP1[0xc];
                a1 = result;
                v_30_1 = &v_30_1[1];
            } while (result < dstD);
        }
    }

    return result;
}
