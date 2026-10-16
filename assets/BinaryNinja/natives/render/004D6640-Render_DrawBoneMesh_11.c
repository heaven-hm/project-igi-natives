#include "Render_DrawBoneMesh_11.h"
void Render_DrawBoneMesh_11(int32_t a1)

{
    int32_t dstD1 = a1 * 0x28;
    int32_t v_4 = dstD1;

    if (*(dstD1 + 0xa53910))
    {
        Sys_OpenFileStream_2(dstD1 + 0xa538f8);
        *(dstD1 + 0xa53910) = 0;
    }

    int32_t tmpD = *(dstD1 + 0xa53914);
    int32_t v_8 = tmpD;

    if (tmpD <= 0)
        return;

    int32_t i_2 = *(a1 * 0xc + &g_a542f0);

    if (i_2)
    {
        int32_t objC2 = 0;
        a1 = 0;

        if (tmpD > 0)
        {
            do
            {
                int32_t valA2 = *(dstD1 + &g_a538f4);
                void* srcS1 = *(valA2 + (objC2 << 2));

                if (srcS1)
                {
                    *(valA2 + (objC2 << 2)) = 0;
                    void* dstD2 = *(srcS1 + 0x10);

                    if (dstD2)
                    {
                        Sys_ExecuteBytecode_2(*(dstD2 + 4));
                        *(dstD2 + 4) = 0;
                        Sys_ExecuteBytecode_2(dstD2);
                    }

                    void* dstD3 = *(srcS1 + 8);
                    Sys_ExecuteBytecode_2(*(dstD3 + 4));
                    *(dstD3 + 4) = 0;
                    Sys_ExecuteBytecode_2(dstD3);
                    int32_t i_1 = i_2;
                    void* flagP1 = *(srcS1 + 0xc);

                    if (i_1 > 0)
                    {
                        int32_t* srcS2 = flagP1 + 8;
                        int32_t i;

                        do
                        {
                            Sys_ExecuteBytecode_2(srcS2[-1]);
                            srcS2[-1] = 0;
                            void* valA5 = *srcS2;

                            if (valA5)
                            {
                                Sys_ExecuteBytecode_2(valA5);
                                *srcS2 = 0;
                            }

                            void* valA6 = srcS2[1];

                            if (valA6)
                            {
                                Sys_ExecuteBytecode_2(valA6);
                                srcS2[1] = 0;
                            }

                            srcS2 = &srcS2[4];
                            i = i_1;
                            i_1 -= 1;
                        } while (i != 1);
                    }

                    Sys_ExecuteBytecode_2(flagP1);
                    tmpD = v_8;
                    dstD1 = v_4;
                    objC2 = a1;
                }

                objC2 += 1;
                a1 = objC2;
            } while (objC2 < tmpD);
        }
    }

    Sys_ExecuteBytecode_2(*(dstD1 + &g_a538f0));
    *(dstD1 + &g_a538f0) = 0;
    Sys_ExecuteBytecode_2(*(dstD1 + &g_a538f4));
    *(dstD1 + &g_a538f0) = 0;
    *(dstD1 + 0xa53914) = 0;
    *(dstD1 + &g_a538f4) = 0;
}
