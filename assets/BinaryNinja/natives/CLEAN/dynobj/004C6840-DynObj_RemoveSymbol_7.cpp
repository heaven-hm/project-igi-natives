// IGI native provenance: DynObj_RemoveSymbol_7 - 0x004C6840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C6840-DynObj_RemoveSymbol_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RemoveSymbol_7.h"
void* DynObj_RemoveSymbol_7(void* context, void* param_2, int32_t param_3)

{
    void* result = param_2;
    void* entity_val = *(result + 0x54);

    if (entity_val)
        *(entity_val + 0x58) = *(result + 0x58);
    else if (param_3 != 0xffffffff)
        *(context + (param_3 << 2) + 0xd1c) = *(result + 0x58);
    else
        *(context + 0xd18) = *(result + 0x58);

    void* entity_3 = *(result + 0x58);

    if (entity_3)
    {
        result = *(result + 0x54);
        *(entity_3 + 0x54) = result;
    }

    return result;
}
