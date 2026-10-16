/* LOGIC NOTE (TaskType_IsDerivedFrom @ 0x00401CF0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : AIFunction_GetAlarmTriggerDistance, GunShotEffect_LoadParameters, HumanPlayer_Cleanup_2, HumanPlayer_UpdateAnimation_5, Human_DamageApply
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "TaskType_IsDerivedFrom.h"

int32_t TaskType_IsDerivedFrom(int32_t arg1, int16_t arg2)

// Sig: bool TaskType_IsDerivedFrom(uint16_t typeId, uint16_t baseTypeId)
// Note: Checks equality and walks the task-type parent chain until the sentinel
// type. Ghidra/r2 CFG agreement: 5 basic blocks and 6 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    int32_t result = arg1;

    while (result != arg2)
    {
        result = (result & 0xffff) * 0x30;
        result = *(result + &data_af5ee8);

        if (result == 0x181)
        {
            result = 0;
            return result;
        }
    }

    result = 1;
    return result;
}
