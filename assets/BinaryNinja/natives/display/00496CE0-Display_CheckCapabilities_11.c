// IGI native provenance: Display_CheckCapabilities_11 - 0x00496CE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00496CE0-Display_CheckCapabilities_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CheckCapabilities_11.h"
int32_t Display_CheckCapabilities_11(char* context, void* param_2, int32_t param_3)

{
    int32_t dest_val = 0;
    int16_t context_val = *(*(param_2 + 0xc) + 0x18);
    int32_t entity_val = context_val;
    int32_t data_3;
    int32_t temp_val;
    temp_val = HIGHD(entity_val * param_3);
    data_3 = LOWD(entity_val * param_3);
    int32_t result = (data_3 - temp_val) >> 1;

    if ((*(param_2 + 0x24) * entity_val) & 1)
        result += 1;
    else if (param_3 & 1 && context_val & 1)
    {
        dest_val = 1;
        result += 1;
    }

    if (result <= 0)
        return result;

    Resource_Unpack(*(param_2 + 0x18), 0x5ca674, result);
    Sys_ResolveSymbol_4(*(param_2 + 0x18));

    if (dest_val)
    {
        Sys_ExecuteBytecode_4(*(param_2 + 0x18), 0xffffffff, 1);
        Sys_ResolveSymbol_4(*(param_2 + 0x18));
    }

    return Display_SwapBuffers_10(0x5ca674, context, param_3, param_2 + 0x40);
}
