// IGI native provenance: SplineObjSegment_LoadParameters - 0x004E3F80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E3F80-SplineObjSegment_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplineObjSegment_LoadParameters.h"
void* SplineObjSegment_LoadParameters(void* context)

{
    DynObj_RegisterSymbol_9(*(context + 0xf0), context);
    int32_t* source_1 = context + 0x5a0;
    int32_t i_1 = 2;
    void* result;
    int32_t i;

    do
    {
        result = *source_1;

        if (result)
        {
            result = Sys_ExecuteBytecode_2(result);
            *source_1 = 0;
        }

        source_1 = &source_1[2];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
