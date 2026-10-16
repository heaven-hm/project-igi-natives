/* LOGIC NOTE (QTask_LinkEventHandler_2 @ 0x00401AE0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : AIAction_KickGrenade, AIAction_SetCombat, ConditionalSound_Start, Heli_Setup, Human_DamageApply
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_LinkEventHandler_2.h"

int32_t* QTask_LinkEventHandler_2(void* arg1)

{
    int32_t ctx_3 = data_567c40;
    int32_t* result = *(data_567c3c + (ctx_3 << 2)) * data_567c48 + data_567c38;
    *(data_567c4c + result) = ctx_3;
    data_567c40 += 1;
    *result = arg1;
    *(arg1 + 0x18) += 1;
    return result;
}
