// Original IGI.EXE function: FX_CouldNotGetMouseCaps (VA 0x0048FD90; static CFG gate PASS, CFG score 1.000).
#include "FX_CouldNotGetMouseCaps.h"
int32_t FX_CouldNotGetMouseCaps()

{
    int32_t* valA = g_5c8e1c;
    int32_t v_2c = 0x2c;
    int32_t result = (*(*valA + 0xc))(valA, &v_2c);

    if (!result)
    {
        char v_1c;
        result = v_1c;
        g_c28f80 = 1;
        g_c28f81 = result;
        return result;
    }

    Error_Show("Could not get mouse caps!");

    while (true)
        /* nop */
}
