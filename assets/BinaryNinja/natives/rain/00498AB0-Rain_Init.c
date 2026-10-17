// IGI native provenance: Rain_Init - 0x00498AB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498AB0-Rain_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Rain_Init.h"
int32_t* Rain_Init()

{
    Sys_ResolveSymbol_13(0xc311d0);
    int32_t item_8 = 0;
    int16_t data_1 = TaskType_Register("Rain", 0x56d0, g_54875c, 0);
    g_c311c0 = data_1;
    QTask_RemoveEventCallback(data_1, 4, sub_498b80);
    return Display_CloseDevice_8(sub_498b00);
}
