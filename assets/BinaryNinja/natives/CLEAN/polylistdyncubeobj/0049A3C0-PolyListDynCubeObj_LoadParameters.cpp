// IGI native provenance: PolyListDynCubeObj_LoadParameters - 0x0049A3C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049A3C0-PolyListDynCubeObj_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
