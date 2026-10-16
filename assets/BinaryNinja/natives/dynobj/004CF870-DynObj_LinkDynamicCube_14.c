#include "DynObj_LinkDynamicCube_14.h"
int32_t* DynObj_LinkDynamicCube_14(void* a1)

{
    void* flagP = a1;
    int32_t ctxB = 0;
    int32_t* valA1 = DynObj_CreateMagicObject_13(*(flagP + 8), 0x50414c46, nullptr);
    int32_t* srcS = valA1;
    void* dstD = *srcS;
    *(flagP + 0x44) = dstD;

    if (dstD <= 0)
        *(flagP + 0x3c) = 0;
    else
    {
        valA1 = Mem_Alloc(dstD * 0xc, 4);
        void* srcS1 = &srcS[1];
        *(flagP + 0x3c) = valA1;

        if (dstD > 0)
        {
            a1 = dstD;
            void* valA3;
            bool cond_3_1;

            do
            {
                void* v_14_1 = srcS1;
                char* v_18_2 = &g_a4ed6c;
                Game_DataSymbolLoad(0xa4ec6c, "%spalettes/%s.pal");
                Sys_SIsNotAValidPaletteF(*(flagP + 0x3c) + ctxB, 0xa4ec6c);
                void* dstD1 = srcS1;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond_2_1 = 0 != *dstD1;
                    dstD1 += 1;
                    i -= 1;

                    if (!cond_2_1)
                        break;
                }

                ctxB += 0xc;
                valA3 = a1 - 1;
                cond_3_1 = a1 != 1;
                a1 = valA3;
                srcS1 = srcS1 + ~i - 1 + 1;
            } while (cond_3_1);
            return valA3;
        }
    }

    return valA1;
}
