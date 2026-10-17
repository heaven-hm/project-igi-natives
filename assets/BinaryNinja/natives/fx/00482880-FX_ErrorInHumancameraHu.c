// Original IGI.EXE function: FX_ErrorInHumancameraHu (VA 0x00482880; static CFG gate PASS, CFG score 1.000).
#include "FX_ErrorInHumancameraHu.h"
int32_t* FX_ErrorInHumancameraHu(void* a1)

{
    int32_t objC = 0;
    char* valA = &g_5c118d;

    while (!*valA)
    {
        valA = &valA[8];
        objC += 1;

        if (valA >= 0x5c158d)
            return valA;
    }

    int32_t* valA1 = *((objC << 3) + &g_5c1188);

    if (*valA1)
    {
        *(a1 + 0x68) = valA1;
        *(a1 + 0x118) = objC;
        return valA1;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
