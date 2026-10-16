#include "Render_DrawBoneMesh_15.h"
int32_t Render_DrawBoneMesh_15(void* a1, float* a2, float* a3, int32_t a4)

{
    void* ctxB = a1;
    void* flagP = *(*(*(*(ctxB + 0x6c) + (a4 << 2)) + 0xc) + 0xc);
    int32_t i = 0;
    void* v_14 = flagP;
    int32_t i_1 = 0;

    if (*(flagP + 0x84) > 0)
    {
        int32_t v_20_1 = 0;

        do
        {
            int32_t valA2 = *(*(flagP + 0x98) + v_20_1 + 0x10);
            float v_10;
            float v_8;

            if (Render_DrawSplineMesh_15(ctxB, a4, i_1, a2, a3, &v_8, &v_10))
            {
                long double x87_r7_1 = v_8;
                long double f0_1 = *a2;
                x87_r7_1 - f0_1;

                if (*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    v_8 = *a2;

                long double x87_r7_2 = a2[1];
                float v_4;
                long double f1_1 = v_4;
                x87_r7_2 - f1_1;

                if (!(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                    v_4 = a2[1];

                long double x87_r7_4 = v_10;
                long double f2_1 = *a3;
                x87_r7_4 - f2_1;

                if (!(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    v_10 = *a3;

                long double x87_r7_5 = a3[1];
                float v_c;
                long double f3_1 = v_c;
                x87_r7_5 - f3_1;

                if (*(&((x87_r7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    v_c = a3[1];

                int32_t* j_1 = g_a5e354;
                int32_t* j = j_1;

                if (j_1)
                {
                    do
                    {
                        if (j != ctxB)
                        {
                            int32_t valA7 = DynObj_CreateMagicObject_16(j);
                            int32_t v_18_1 = valA7;

                            if (valA7 != 0xffffffff)
                            {
                                int32_t k = 0;
                                void* dstD2 = *(*(*(j[0x1b] + (valA7 << 2)) + 0xc) + 0xc);

                                if (*(dstD2 + 0x84) > 0)
                                {
                                    int32_t flagP1 = 0;

                                    do
                                    {
                                        if (*(*(dstD2 + 0x98) + flagP1 + 0x10) == valA2)
                                        {
                                            Render_ClipMesh_14(j, &v_8, &v_10, valA7);
                                            valA7 = v_18_1;
                                        }

                                        k += 1;
                                        flagP1 += 0x14;
                                    } while (k < *(dstD2 + 0x84));

                                    flagP = v_14;
                                }
                            }

                            j_1 = g_a5e354;
                            ctxB = a1;
                        }

                        if (j != j_1)
                        {
                            j = *j;

                            if (!j)
                                break;

                            if (!*j)
                                break;
                        }
                        else
                        {
                            void* srcS2 = j[0x52];

                            if (!srcS2)
                                break;

                            j = *(srcS2 + 8);

                            if (!*j)
                                break;
                        }
                    } while (j);
                }
            }

            i = i_1 + 1;
            v_20_1 += 0x14;
            i_1 = i;
        } while (i < *(flagP + 0x84));
    }

    return i;
}
