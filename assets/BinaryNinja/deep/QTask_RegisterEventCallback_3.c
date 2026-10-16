/* LOGIC NOTE (QTask_RegisterEventCallback_3 @ 0x00401FA0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : Human, HumanPlayer_Init, HumanSoldier, HumanSoldierFemale, HumanSoldierPistol
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_RegisterEventCallback_3.h"

uint32_t QTask_RegisterEventCallback_3(int16_t arg1, int32_t arg2)

{
    uint32_t result = arg1;
    *(result * 0x30 + 0xaf5f0c) = arg2 | 0x20000000;
    return result;
}
