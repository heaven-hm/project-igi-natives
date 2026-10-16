/* LOGIC NOTE (QTask_InitContext @ 0x004018C0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : AIConfig_InitItem_2, HumanPlayer_LoadParameters_2, LINEUPMODE_NONE, Level_StartMission, MagicObj_Shutdown
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_InitContext.h"

uint32_t QTask_InitContext(char arg1)

{
    uint32_t result = arg1 * 3;
    *((result << 1) + &data_54f932) = 0;
    return result;
}
