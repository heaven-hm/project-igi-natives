// IGI native provenance: Display_OpenDevice_10 - 0x00495DA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495DA0-Display_OpenDevice_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_10.h"
int32_t* Display_OpenDevice_10()

{
    int32_t* result;
    result = g_5ca1b4;

    if (result)
    {
        result = g_5ca194;

        if (result)
        {
            Sys_ReadFileBlock_4(result);
            int32_t* data_val = g_5ca190;
            g_5ca194 = 0;
            (*(*data_val + 0x48))(data_val);
            int32_t* data_1 = g_5ca190;
            result = (*(*data_1 + 8))(data_1);
            g_5ca190 = 0;
        }
    }

    return result;
}
