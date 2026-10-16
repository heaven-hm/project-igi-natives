/* LOGIC NOTE (QTask_TriggerEvent_2 @ 0x00401C40)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : Car_Run, Menu_LeaveMenus_21, Menu_UpdateLanguage_21, Vehicle_CheckFlightDynamics_3, Vehicle_InitHeli_6
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_TriggerEvent_2.h"

int32_t* QTask_TriggerEvent_2(int32_t* arg1, int16_t arg2)

{
    int32_t* result = *arg1;

    if (result && *result)
    {
        if (!result)
            return result;

        while (true)
        {
            if (result[7] == arg2)
                return result;

            result = *result;

            if (!result)
                return nullptr;

            if (!*result)
                return nullptr;

            if (!result)
                return result;
        }
    }

    return nullptr;
}
