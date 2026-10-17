// IGI native provenance: PolyListDynCubeObj_Setup - 0x0049A350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049A350-PolyListDynCubeObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PolyListDynCubeObj_Setup.h"
void* PolyListDynCubeObj_Setup(void* context)

{
    void* result = *(context + 0xa8);

    if (result)
        result = DynObj_RemoveSymbol_7(*(context + 0x68), context, 0);

    int32_t* source_1 = *(context + 0xb4);

    if (!source_1)
        return result;

    return Qtask_UpdateList(source_1);
}
