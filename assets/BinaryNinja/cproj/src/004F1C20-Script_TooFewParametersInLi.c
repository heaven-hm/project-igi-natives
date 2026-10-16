#include "gi_platform.h"
#include "004F1C20-Script_TooFewParametersInLi.h"
void Script_TooFewParametersInLi(int32_t* a1, int32_t a2)

{
    int32_t srcS = 0;
    int32_t ctxB = *a1;

    if (a2 <= 0)
        return;

    while (true)
    {
        if (!Sys_AllocateMemory_24(a1[1], srcS + ctxB))
        {
            int32_t v_14_2 = a1[2];
            int32_t v_18_2 = a1[3];
            Error_Show("Too few parameters in line %d of file '%s'");

            while (true)
                /* nop */
        }
        else
        {
            srcS += 1;

            if (srcS >= a2)
                break;
        }
    }
}
