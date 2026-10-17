// IGI native provenance: RadarDish_Setup - 0x00448CF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00448CF0-RadarDish_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RadarDish_Setup.h"
int32_t* RadarDish_Setup(void* context)

{
    DynObj_RegisterSymbol_9(*(context + 0x68), context);
    int32_t* result = *(context + 0x174);

    if (result)
        result = Qtask_UpdateList(result);

    void* source_1 = *(context + 0x178);

    if (!source_1)
        return result;

    return DynObj_CreateMagicObject_4(source_1);
}
