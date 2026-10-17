// Original IGI.EXE function: Sys_ReadFileBlock_31 (VA 0x004BFBE0; static CFG gate FAIL, CFG score 0.833).
#include "Sys_ReadFileBlock_31.h"
void* Sys_ReadFileBlock_31(void* a1, void* a2)

{
    int32_t i = 0xffffffff;
    int32_t dstD = *(a2 + 0x14);

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t* valA = Mem_Alloc(~i + 0x28, 4);
    valA[1] = 0;
    *valA = 0;
    valA[4] = &valA[0xa];
    valA[2] = *(a2 + 0xc);
    valA[3] = *(a2 + 0x10);
    valA[8] = *(a2 + 0x20);
    valA[6] = *(a2 + 0x18);
    valA[7] = *(a2 + 0x1c);
    int32_t dstD1 = *(a2 + 0x14);
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD1;
        dstD1 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC4 = ~i_1;
    int32_t srcS2;
    int32_t dstD4;
    dstD4 = memcpy(&valA[0xa], dstD1 - objC4, objC4 & 0xfffffffc);
    memcpy(dstD4, srcS2, objC4 & 3);
    return Camera_SetFieldOfView_33(a1, valA);
}
