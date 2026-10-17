// IGI native provenance: Display_SetDisplayMode_16 - 0x00498380 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00498380-Display_SetDisplayMode_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_16.h"
int32_t Display_SetDisplayMode_16(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t source_2 = (param_2 * param_3) << 2;
    void* data_val = Mem_Alloc(source_2, 4);
    context[2] = data_val;
    context[1] = param_3;
    *context = param_2;
    memset(memset(data_val, 0, source_2 & 0xfffffffc), 0, source_2 & 3);
    return 0;
}
