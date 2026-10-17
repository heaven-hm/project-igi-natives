// Original IGI.EXE function: Light_SetLightColor_2 (VA 0x00523670; static CFG gate PASS, CFG score 1.000).
#include "Light_SetLightColor_2.h"
int32_t Light_SetLightColor_2(int32_t* a1)

{
    int32_t i = 0;

    if (*a1 > 0)
    {
        int32_t* srcS1 = &a1[1];

        do
        {
            void* valA1 = *srcS1;

            if (valA1)
            {
                Sys_ExecuteBytecode_2(valA1);
                *srcS1 = 0;
                Sys_ExecuteBytecode_2(srcS1[1]);
                srcS1[1] = 0;
            }

            i += 1;
            srcS1 = &srcS1[3];
        } while (i < *a1);
    }

    return Sys_ExecuteBytecode_2(a1);
}
