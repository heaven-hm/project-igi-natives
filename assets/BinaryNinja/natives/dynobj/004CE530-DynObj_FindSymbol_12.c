// Original IGI.EXE function: DynObj_FindSymbol_12 (VA 0x004CE530; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_12.h"
int16_t* DynObj_FindSymbol_12(int32_t a1, void* a2)

{
    int32_t* srcS = a2 + 0xc;
    int32_t i_2 = 8;
    int16_t* result;
    int32_t i;

    do
    {
        result = *srcS;

        if (result)
            result = DynObj_FindSymbol_12(a1, result);

        srcS = &srcS[1];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);

    for (void* i_1 = *(a2 + 0x2c); i_1; i_1 = *(i_1 + 0x58))
    {
        int32_t objC1 = 0;
        int32_t srcS1 = 0;
        int32_t j_1 = 0xfe;
        int32_t j;

        do
        {
            int16_t ctxB1 = 0;
            result = a1 + ((objC1 + *(a2 + 0x34) * 0xfe) << 1) + 0x118;
            int32_t tmpD5 = 0;
            tmpD5 = *(i_1 + 0x1c);
            ctxB1 = *(((tmpD5 + srcS1) << 2) + &g_a96ae0);
            *result += ctxB1;
            objC1 += 1;
            srcS1 += 0x180;
            j = j_1;
            j_1 -= 1;
        } while (j != 1);
    }

    return result;
}
