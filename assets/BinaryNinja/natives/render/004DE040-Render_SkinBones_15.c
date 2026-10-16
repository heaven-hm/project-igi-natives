#include "Render_SkinBones_15.h"
void* Render_SkinBones_15(void* a1)

{
    void* tmpD = a1;
    int32_t objC = g_a5e31c;
    void* i = *(tmpD + 0x138);
    int32_t dstD = g_a5e320;

    for (; i > 0; i = *(tmpD + 0x138))
    {
        int32_t srcS1 = *(tmpD + 0x130);
        int32_t flagP1 = 0;
        int32_t v_c_1 = 0;
        int32_t* ctxB2 = **(tmpD + 0x134) * *(tmpD + 0x140);
        void* valA1 = *(ctxB2 + srcS1);
        void* ctxB3 = ctxB2 + srcS1;
        int32_t j = 0;
        void* v_8_1 = ctxB3;

        if (dstD > 0)
        {
            while (!j)
            {
                int32_t* valA4 = *(objC + (flagP1 << 2)) * g_a5e328 + g_a5e318;
                int32_t tmpD2 = *valA4;

                if (tmpD2 == ctxB3)
                {
                    void* objC1 = valA4[1];
                    int32_t dstD1 = *(*(objC1 + 0x144) + tmpD2);
                    *(objC1 + 0x138) -= 1;
                    void* tmpD3 = valA4[1];
                    int32_t objC2 = *(tmpD3 + 0x138);

                    if (dstD1 != objC2)
                    {
                        int32_t srcS3 = *(tmpD3 + 0x134);
                        int32_t objC5 =
                            *(srcS3 + (objC2 << 2)) * *(tmpD3 + 0x140) + *(tmpD3 + 0x130);
                        int32_t ctxB5 = *(srcS3 + (dstD1 << 2));
                        int32_t tmpD5 = *(*(tmpD3 + 0x144) + objC5);
                        *(srcS3 + (dstD1 << 2)) = *(srcS3 + (tmpD5 << 2));
                        *(*(valA4[1] + 0x134) + (tmpD5 << 2)) = ctxB5;
                        ctxB3 = v_8_1;
                        *(*(valA4[1] + 0x144) + objC5) = dstD1;
                    }

                    int32_t* srcS6 = g_a5e32c;
                    int32_t objC7 = g_a5e320 - 1;
                    int32_t valA5 = *(srcS6 + valA4);
                    g_a5e320 = objC7;

                    if (valA5 != objC7)
                    {
                        int32_t tmpD8 = g_a5e31c;
                        int32_t objC10 = *(tmpD8 + (objC7 << 2)) * g_a5e328 + g_a5e318;
                        int32_t dstD3 = *(tmpD8 + (valA5 << 2));
                        int32_t srcS7 = *(srcS6 + objC10);
                        *(tmpD8 + (valA5 << 2)) = *(tmpD8 + (srcS7 << 2));
                        *(g_a5e31c + (srcS7 << 2)) = dstD3;
                        *(g_a5e32c + objC10) = valA5;
                    }

                    flagP1 = v_c_1;
                    j = 1;
                    *(valA1 + 0x60) = 0;
                    objC = g_a5e31c;
                    dstD = g_a5e320;
                }

                tmpD = a1;
                flagP1 += 1;
                v_c_1 = flagP1;

                if (flagP1 >= dstD)
                    break;
            }
        }
    }

    int32_t ctxB6 = dstD - 1;

    if (ctxB6 >= 0)
    {
        int32_t* srcS8 = g_a5e32c;
        int32_t f0_1;

        do
        {
            int32_t flagP6 = g_a5e318;
            i = *(objC + (ctxB6 << 2)) * g_a5e328 + flagP6;

            if (*(i + 4) == tmpD)
            {
                int32_t tmpD11 = *(srcS8 + i);
                dstD -= 1;
                g_a5e320 = dstD;

                if (tmpD11 != dstD)
                {
                    int32_t dstD4 = *(objC + (tmpD11 << 2));
                    i = *(objC + (dstD << 2)) * g_a5e328 + flagP6;
                    int32_t srcS9 = *(srcS8 + i);
                    *(objC + (tmpD11 << 2)) = *(objC + (srcS9 << 2));
                    *(g_a5e31c + (srcS9 << 2)) = dstD4;
                    *(g_a5e32c + i) = tmpD11;
                    srcS8 = g_a5e32c;
                    objC = g_a5e31c;
                    dstD = g_a5e320;
                }

                tmpD = a1;
            }

            f0_1 = ctxB6;
            ctxB6 -= 1;
        } while (f0_1 - 1 >= 0);
    }

    return i;
}
