#include "004F1C20-Script_TooFewParametersInLi.h"
/* 0x004f1c20 Script_TooFewParametersInLi full linked: callers=15 callees=2 */
void sub_4f1c20(int32_t* a1, int32_t a2)

{
    int32_t esi = 0;
    int32_t ebx = *a1;

    if (a2 <= 0)
        return;

    while (true)
    {
        if (!sub_4b8b00(a1[1], esi + ebx))
        {
            int32_t var_14_2 = a1[2];
            int32_t var_18_2 = a1[3];
            Error_Show("Too few parameters in line %d of file '%s'");

            while (true)
                /* nop */
        }
        else
        {
            esi += 1;

            if (esi >= a2)
                break;
        }
    }
}
