// IGI native provenance: RainEffect_Setup - 0x00436990 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00436990-RainEffect_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RainEffect_Setup.h"
int32_t RainEffect_Setup(long double context , void* param_2)

{
    int32_t result = *(param_2 + 0x20);

    if (!result)
        return result;

    if (Script_FormatString_6(param_2 + 0x38))
    {
        Script_SpawnNewTask_7(param_2 + 0x38, param_2);
        Display_RestoreDevice_17(*(param_2 + 0x20), context);
    }

    return Display_ClearSurfaces_17(*(param_2 + 0x20));
}
