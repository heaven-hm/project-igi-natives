#include "gi_platform.h"
#include "0049A3C0-PolyListDynCubeObj_LoadParameters.h"
void** PolyListDynCubeObj_LoadParameters(void* a1)

{
    void** result = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    if (result)
    {
        long double x87_r4_4 = g_bcab00 * ((*(int32_t*)(uintptr_t)(a1 + 0x30)) - g_bcab18)
            + g_bcaafc * ((*(int32_t*)(uintptr_t)(a1 + 0x28)) - g_bcab10)
            + g_bcaaf8 * ((*(int32_t*)(uintptr_t)(a1 + 0x20)) - g_bcab08);
        result = Sys_AllocateMemory_19(Display_SwapBuffers_18, 4, x87_r4_4);
        *result = a1;
    }

    return result;
}
