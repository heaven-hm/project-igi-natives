// Original IGI.EXE function: HumanPlayer_UpdateMotion_11 (VA 0x00413CC0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateMotion_11.h"
int32_t* HumanPlayer_UpdateMotion_11(int32_t* a1, int32_t a2)

{
    int32_t* valA = a1;
    int32_t* i = valA[2];

    if (*i && i)
    {
        do
        {
            int32_t objC;
            int32_t tmpD;
            valA = HumanPlayer_LoadParameters_13(valA, tmpD, objC, i);

            if (valA && *valA == a2)
                return i;

            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return 0;
}
