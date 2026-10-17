// IGI native provenance: Vehicle_1009011 - 0x0043A5F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043A5F0-Vehicle_1009011.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_1009011.h"
int32_t Vehicle_1009011(void* context)

{
    char result = *(context + 0x1a1);

    if (result)
        return result;

    FX_SmokeEmit(context + 0x20, 1, 0, 0x3d4ccccd, 0x45800000, 0, 0x45000000, 5, 2, nullptr,
        "1009_01_1", context + 0x180, 0x15, 2, 0x46a00000, 0);
    *(context + 0x1a1) = 1;
    return DynObj_CreateMagicObject_5(context, DynObj_Missing(context + 0x150));
}
