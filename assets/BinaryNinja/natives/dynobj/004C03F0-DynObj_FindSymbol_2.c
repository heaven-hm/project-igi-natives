// Original IGI.EXE function: DynObj_FindSymbol_2 (VA 0x004C03F0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_2.h"
void DynObj_FindSymbol_2(int32_t* a1)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t* ctxB = nullptr;
    int32_t v_4 = 0;

    if (a1[1] <= 0)
        return;

    bool cond_0_1;

    do
    {
        int32_t* i_1 = *(ctxB + *a1);

        for (int32_t* i = *i_1; i; i = *i)
        {
            Camera_ApplyHandiCam_33(i_1);
            void* valA2 = i_1[3];

            if (valA2)
            {
                Sys_ExecuteBytecode_2(valA2);
                i_1[3] = 0;
            }

            Sys_ExecuteBytecode_2(i_1);
            i_1 = i;
        }

        ctxB = &ctxB[3];
        cond_0_1 = v_4 + 1 < a1[1];
        v_4 += 1;
    } while (cond_0_1);
}
