// Original IGI.EXE function: DynObj_LookupHashItem_8 (VA 0x004C6D20; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LookupHashItem_8.h"
void* DynObj_LookupHashItem_8(void* a1, int32_t* a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void* a7)

{
    int32_t* srcS = a2;
    int32_t objC = 0x8000;
    void* i = srcS[0xb];
    uint32_t flagP = *srcS;

    while (i)
    {
        void* tmpD;
        tmpD = *(i + 0x5c);
        i = *(i + 0x58);
        objC |= tmpD;
    }

    int32_t valA = srcS[0xd];
    srcS[0xe] = objC;
    *(a1 + (valA << 2) + 0xe8) = 0;

    while (flagP != a4)
    {
        int32_t dstD1 = 0;
        *(srcS + 0x3a) |= *(a3 + 0x5c);

        if (a5 & flagP)
            dstD1 = 1;

        if (a6 & flagP)
            dstD1 |= 2;

        if (a7 & flagP)
            dstD1 |= 4;

        flagP u>>= 1;
        srcS[0xc] |= 1 << (dstD1 & 0x1f);

        if (!srcS[dstD1 + 3])
        {
            int32_t objC5 = *(a1 + 0xd08);
            int32_t* valA7 = *(*(a1 + 0xd04) + (objC5 << 2)) * *(a1 + 0xd10) + *(a1 + 0xd00);
            *(*(a1 + 0xd14) + valA7) = objC5;
            *(a1 + 0xd08) += 1;
            srcS[dstD1 + 3] = valA7;
            void* v_24_1 = a1;
            DynObj_LookupHashItem_7(valA7, dstD1, flagP, srcS[0xd]);
            *(srcS[dstD1 + 3] + 8) = srcS;
        }

        srcS = srcS[dstD1 + 3];
    }

    srcS[0xe] |= *(a3 + 0x5c);
    return DynObj_ParseConfigFile_8(srcS, a3);
}
