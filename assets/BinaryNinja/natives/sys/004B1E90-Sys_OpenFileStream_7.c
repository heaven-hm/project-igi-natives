// Original IGI.EXE function: Sys_OpenFileStream_7 (VA 0x004B1E90; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_7.h"
char* Sys_OpenFileStream_7(char* a1, int32_t a2, int32_t a3)

{
    int32_t dstD = a3;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    char* objC1 = objC - 1;

    if (objC != 1)
    {
        while (objC1[a3] != 0x2e)
        {
            char* f1_1 = objC1;
            objC1 -= 1;

            if (f1_1 == 1)
                break;
        }
    }

    char* result = &objC1[a3];

    if (!a1)
        return result;

    Camera_ApplyLineFilter_5(a1, result, a2 - 1);
    a1[a2 - 1] = 0;
    return result;
}
