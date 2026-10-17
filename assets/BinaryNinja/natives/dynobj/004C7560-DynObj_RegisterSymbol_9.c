// Original IGI.EXE function: DynObj_RegisterSymbol_9 (VA 0x004C7560; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RegisterSymbol_9.h"
void* DynObj_RegisterSymbol_9(int32_t a1, void* a2)

{
    int32_t ctxB = a1;
    void* flagP = a2;
    void* srcS = *(flagP + 0x50);
    int32_t dstD = 0;
    *(ctxB + (*(srcS + 0x34) << 2) + 0xe8) = 0;
    DynObj_InsertHashItem_8(srcS, flagP);
    DynObj_FindSymbol_9(ctxB, srcS);
    int32_t objC = 0;
    a2 = 0xfe;
    void* result;

    while (true)
    {
        int32_t valA1 = *(srcS + 0x34);
        int32_t tmpD4 = 0;
        tmpD4 = *(flagP + 0x1c);
        int16_t ctxB1 = 0;
        ctxB1 = *(((tmpD4 + dstD) << 2) + &g_a96ae0);
        *(ctxB + ((objC + valA1 * 0xfe) << 1) + 0x118) -= ctxB1;
        objC += 1;
        dstD += 0x180;
        result = a2 - 1;
        bool cond_0_1 = a2 != 1;
        a2 = result;

        if (!cond_0_1)
            break;

        ctxB = a1;
    }

    *(flagP + 0x50) = 0;
    return result;
}
