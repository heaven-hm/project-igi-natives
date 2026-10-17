// IGI native provenance: Script_ParseEnumInt32_20 - 0x004F7960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F7960-Script_ParseEnumInt32_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_20.h"
int32_t** Script_ParseEnumInt32_20(int32_t context)

{
    int32_t* data_val = Display_CloseDevice_14(0x10);
    data_val[1] = g_a76c8c;
    data_val[3] = context;
    return Display_ClearSurfaces_14(0, data_val);
}
