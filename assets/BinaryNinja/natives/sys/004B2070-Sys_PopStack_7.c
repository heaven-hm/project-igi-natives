// Original IGI.EXE function: Sys_PopStack_7 (VA 0x004B2070; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_7.h"
int32_t Sys_PopStack_7(void* a1, int32_t* a2, int32_t a3, int32_t a4)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t result = 0;
    int32_t result_2 = 0;
    int32_t* dstD = Sys_ResolveSymbol_19(a1);

    if (dstD)
    {
        int32_t* flagP1 = a2;

        while (result < a3)
        {
            if (Sys_OpenFileStream_20(dstD) == 0x48584554)
            {
                int32_t* valA2 = Sys_CheckHeap_19(dstD, a1);
                dstD = Sys_PopStack_19(dstD);

                if (!valA2 || !dstD)
                    return 0;

                if (Sys_OpenFileStream_20(dstD) != 0x59444f42)
                    return 0;

                if (!Sys_CheckHeap_19(dstD, a1))
                    return 0;

                void* valA6 = Sys_CheckHeap_19(dstD, a1);
                int32_t objC1 = 0;
                objC1 = valA2[3];
                int32_t valA8 = 0;
                valA8 = valA2[4];
                int32_t valA9 = 0;
                valA9 = *(valA2 + 0x16);
                int32_t tmpD2 = 0;
                tmpD2 = *(valA2 + 0x12);
                int32_t objC2 = 0;
                objC2 = *(valA2 + 0xe);
                int32_t valA11;
                int32_t tmpD3;
                tmpD3 = HIGHD(valA9 * tmpD2);
                valA11 = LOWD(valA9 * tmpD2);
                Sys_FreeMemory_8(flagP1, a4, (valA11 + (tmpD3 & 7)) >> 3, objC2, valA8, *valA2, objC1,
                    valA2[1], valA6);
                int32_t result_1 = result_2 + 1;
                flagP1 = &flagP1[9];
                result_2 = result_1;
                result = result_1;
            }

            dstD = Sys_PopStack_19(dstD);

            if (!dstD)
                break;
        }
    }

    return result;
}
