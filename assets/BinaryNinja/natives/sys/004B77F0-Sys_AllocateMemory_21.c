// Original IGI.EXE function: Sys_AllocateMemory_21 (VA 0x004B77F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_21.h"
void* Sys_AllocateMemory_21(int32_t* a1, char* a2, int32_t a3, void* a4)

{
    char* srcS = a2;
    char i = *srcS;
    int32_t tmpD2 = *(a1[2] + 0xc) + 0x10;

    if (i)
    {
        void* valA3 = a1 + a1[1] * a4 + a3 + 0x10;

        do
        {
            valA3 += 1;
            srcS = &srcS[1];
            *(valA3 - 1) = *(i + tmpD2);
            i = *srcS;
        } while (i);
    }

    return Sys_CheckHeap_20(a1, a4);
}
