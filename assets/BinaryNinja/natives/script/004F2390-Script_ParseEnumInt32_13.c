// IGI native provenance: Script_ParseEnumInt32_13 - 0x004F2390 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F2390-Script_ParseEnumInt32_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_13.h"
void* Script_ParseEnumInt32_13(void* context)

{
    int32_t temp_val = 0;
    void* data_1 = context;
    temp_val = *(data_1 + 0x1c);
    (*(((*g_a76c08 * 0x180 + temp_val) << 2) + &g_a96ae0))(data_1, &context);
    return context;
}
