// Original IGI.EXE function: Display_SwapBuffers_6 (VA 0x004922B0; static CFG gate FAIL, CFG score 0.733).
#include "Display_SwapBuffers_6.h"
int32_t __stdcall Display_SwapBuffers_6(char* a1, int32_t* a2 @ 0xc, int32_t* a3)

{
    if (*a3 == 1)
    {
        char* valA1 = a3[2];
        char* dstD1 = a1;
        char* valA2;
        int32_t valA3;

        if (valA1)
        {
            valA2 = Camera_UpdateViewCone_6(dstD1, valA1);
            valA3 = -(valA2);
        }

        if (!valA1 || -((valA3 - valA3)))
        {
            int32_t i = 0xffffffff;
            void* tmpD2 = a3[5] + *a3[6] * 0x668;

            while (i)
            {
                bool cond_0_1 = 0 != *dstD1;
                dstD1 = &dstD1[1];
                i -= 1;

                if (!cond_0_1)
                    break;
            }

            int32_t objC2 = ~i;
            int32_t srcS2;
            int32_t dstD4;
            dstD4 = memcpy(tmpD2 + 0x4f8, dstD1 - objC2, objC2 & 0xfffffffc);
            memcpy(dstD4, srcS2, objC2 & 3);
            memcpy(tmpD2 + 0x578, a2, 0xec);
            memcpy(tmpD2, &a3[9], 0x4f8);
            *(tmpD2 + 0x664) = *a2 >> 0x13 & 1;
            int32_t* valA12 = a3[6];
            *valA12 += 1;

            if (a3[2])
                return 0;
        }
    }

    return 1;
}
