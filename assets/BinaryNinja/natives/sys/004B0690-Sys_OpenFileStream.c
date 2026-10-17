// Original IGI.EXE function: Sys_OpenFileStream (VA 0x004B0690; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream.h"
int32_t Sys_OpenFileStream(int32_t a1, int32_t* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    int32_t valA = *a2;

    if (valA)
    {
        int32_t objC1 = valA * 5;
        void* objC2 = a1 + (objC1 << 2);

        if (*(a1 + (objC1 << 2) - 8) == a3 && *(objC2 - 0xc) == a4 - 1
            && *(objC2 - 0x14) == a6)
        {
            *(objC2 - 4) += 1;
            int32_t result = *(objC2 - 0xc) + 1;
            *(objC2 - 0xc) = result;
            return result;
        }
    }

    int32_t* objC4 = a1 + valA * 0x14;
    objC4[4] = 0;
    objC4[3] = a3;
    objC4[2] = a4;
    objC4[1] = a5;
    *objC4 = a6;

    if (g_93aad8 <= valA + 1)
        g_93aad8 = valA + 1;

    *a2 = valA + 1;
    return valA + 1;
}
