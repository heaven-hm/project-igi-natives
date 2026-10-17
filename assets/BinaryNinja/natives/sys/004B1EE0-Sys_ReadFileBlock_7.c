// Original IGI.EXE function: Sys_ReadFileBlock_7 (VA 0x004B1EE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_7.h"
char* Sys_ReadFileBlock_7(char* a1, int32_t a2, char* a3)

{
    char* flagP = nullptr;
    int32_t dstD = 0;

    if (a2 > 0)
    {
        char* objC1 = a3;
        char* srcS2 = a1 - objC1;

        do
        {
            char tmpD1 = *objC1;

            if (!tmpD1)
                break;

            if (tmpD1 == 0x5c || tmpD1 == 0x2f)
                flagP = srcS2 + objC1;

            *(srcS2 + objC1) = tmpD1;
            dstD += 1;
            objC1 = &objC1[1];
        } while (dstD < a2);

        if (flagP)
        {
            *flagP = 0;
            return a1;
        }
    }

    *a1 = 0;
    return a1;
}
