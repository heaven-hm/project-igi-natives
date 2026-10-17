// IGI native provenance: Display_RestoreDevice_9 - 0x00495C80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495C80-Display_RestoreDevice_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_RestoreDevice_9.h"
int32_t* Display_RestoreDevice_9()

{
    int32_t* result = g_5ca194;

    if (!result)
        return result;

    Sys_ReadFileBlock_4(result);
    int32_t* data_val = g_5ca190;
    (*(*data_val + 0x48))(data_val);
    int32_t* data_1 = g_5ca190;
    return (*(*data_1 + 8))(data_1);
}
