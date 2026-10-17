// Original IGI.EXE function: Menu_HandleInput_3 (VA 0x00418E40; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_3.h"
void* Menu_HandleInput_3(void* a1, char* a2)

{
    int32_t srcS = 0;

    if (*(a1 + 0x2666) > 0)
    {
        char* dstD1 = a1 + 0x264;
        int32_t valA;

        do
        {
            int32_t valA1;
            int32_t objC;
            int32_t tmpD;
            valA1 = Camera_UpdateTransform_6(valA, tmpD, objC, a2, dstD1);

            if (!valA1)
                return a1 + srcS * 0x58 + 0x2a4;

            valA = *(a1 + 0x2666);
            srcS += 1;
            dstD1 = &dstD1[0x58];
        } while (srcS < valA);
    }

    return 0;
}
