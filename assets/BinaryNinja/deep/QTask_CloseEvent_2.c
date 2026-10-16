/* LOGIC NOTE (QTask_CloseEvent_2 @ 0x00401A20)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : sub_4b
   called by : AIConfig_InitItem, AIConfig_InitItem_2, ControlsMenu_ConvertFloatFromOffset_2, Flow_InitEvents, HumanPlayer_UpdateAnimation_9
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CloseEvent_2.h"

uint32_t QTask_CloseEvent_2(int16_t arg1)

{
    uint32_t result = arg1;
    uint32_t src_1 = result * 0x30;
    result = *(src_1 + 0xaf5f04);

    if (result)
        result = Sys_OpenFileStream_2(src_1 + 0xaf5eec);

    *(src_1 + &data_af5f05) = 0;
    return result;
}
