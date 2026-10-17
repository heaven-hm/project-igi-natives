// IGI native provenance: DynObj_ParseConfigFile_8 - 0x004C6E30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C6E30-DynObj_ParseConfigFile_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_ParseConfigFile_8.h"
void* DynObj_ParseConfigFile_8(void* context, void* param_2)

{
    void* entity_val = *(context + 0x2c);

    if (!entity_val)
    {
        *(param_2 + 0x58) = 0;
        *(param_2 + 0x54) = 0;
        *(param_2 + 0x50) = context;
        *(context + 0x2c) = param_2;
        return param_2;
    }

    *(entity_val + 0x54) = param_2;
    *(param_2 + 0x58) = entity_val;
    *(param_2 + 0x54) = 0;
    *(param_2 + 0x50) = context;
    *(context + 0x2c) = param_2;
    return param_2;
}
