#include "SoundSys_LoadSoundDef_2.h"
int32_t SoundSys_LoadSoundDef_2()

{
    int32_t result = g_a5e400;
    void* ctxB = (&g_a5e374)[result];
    void* v_10 = ctxB;
    *(ctxB + 0xc) = 0;
    int32_t srcS1 = g_a5e400 + 1;
    g_a5e400 = srcS1;
    result = *(ctxB + 0x14);

    if (result)
    {
        void* dstD1 = **&g_a5e3f0 + (result & 0xffff) * 0x18;
        (&g_a5e374)[srcS1] = dstD1;
        result = SoundSys_LoadSoundDef_2();
        result = *(dstD1 + 0x16);

        while (result)
        {
            void* srcS2 = **&g_a5e3f0 + (result & 0xffff) * 0x18;
            (&g_a5e374)[g_a5e400] = srcS2;
            result = SoundSys_LoadSoundDef_2();
            result = *(srcS2 + 0x16);
        }

        srcS1 = g_a5e400;
    }

    result = *(ctxB + 0x12);

    if (result)
    {
        int32_t i = 0;
        i = *(ctxB + 0x10);
        result = (result & 0xffff) + i;

        if (i < result)
        {
            int32_t tmpD3 = g_a5e3ec;
            int32_t objC8;

            do
            {
                int32_t dstD2 = 0;
                int32_t objC4 = *(g_a5e3f8 + 0x10);
                int32_t valA6 = 0;
                valA6 = *(objC4 + (i << 3));
                void* objC5 = objC4 + (i << 3);
                int32_t v_c = tmpD3 + valA6 * 0xc;
                int32_t valA9 = 0;
                valA9 = *(objC5 + 2);
                int32_t v_8_1 = tmpD3 + valA9 * 0xc;
                int32_t valA12 = 0;
                valA12 = *(objC5 + 4);
                int32_t v_4_1 = tmpD3 + valA12 * 0xc;

                if (srcS1 > 0)
                {
                    int32_t* ctxB1 = &g_a5e374;

                    do
                    {
                        float* objC7 = *ctxB1;
                        int32_t* tmpD4 = &v_c;
                        int32_t j_1 = 3;
                        int32_t j;

                        do
                        {
                            float* valA14 = *tmpD4;
                            long double x87_r7_2 = valA14[2] - objC7[2];
                            long double x87_r6_2 = valA14[1] - objC7[1];
                            long double x87_r5_2 = *valA14 - *objC7;
                            long double x87_r7_3 = sqrtl(x87_r5_2 * x87_r5_2 + x87_r6_2 * x87_r6_2
                                + x87_r7_2 * x87_r7_2);
                            long double x87_r6_4 = objC7[3];
                            x87_r6_4 - x87_r7_3;

                            if (!(*(&((x87_r6_4 < x87_r7_3 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_4, x87_r7_3) ? 1 : 0) << 0xa
                                    | (x87_r6_4 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                x87_r7_3 = objC7[3];

                            objC7[3] = x87_r7_3;
                            tmpD4 = &tmpD4[1];
                            j = j_1;
                            j_1 -= 1;
                        } while (j != 1);
                        srcS1 = g_a5e400;
                        dstD2 += 1;
                        ctxB1 = &ctxB1[1];
                    } while (dstD2 < srcS1);

                    tmpD3 = g_a5e3ec;
                    ctxB = v_10;
                }

                objC8 = 0;
                result = 0;
                objC8 = *(ctxB + 0x12);
                result = *(ctxB + 0x10);
                i += 1;
            } while (i < objC8 + result);
        }
    }

    g_a5e400 = srcS1 - 1;
    return result;
}
