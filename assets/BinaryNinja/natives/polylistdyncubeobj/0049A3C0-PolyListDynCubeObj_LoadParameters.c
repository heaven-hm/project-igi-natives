// Original IGI.EXE function: PolyListDynCubeObj_LoadParameters (VA 0x0049A3C0; static CFG gate PASS, CFG score 1.000).
#include "PolyListDynCubeObj_LoadParameters.h"
void** PolyListDynCubeObj_LoadParameters(void* context)

{
    void** result = *(context + 0x9c);

    if (result)
    {
        long double fpu_val_4_4 = g_bcab00 * (*(context + 0x30) - g_bcab18)
            + g_bcaafc * (*(context + 0x28) - g_bcab10)
            + g_bcaaf8 * (*(context + 0x20) - g_bcab08);
        result = Sys_AllocateMemory_19(Display_SwapBuffers_18, 4, fpu_val_4_4);
        *result = context;
    }

    return result;
}
