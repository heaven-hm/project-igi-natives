/* LOGIC NOTE (QTask_TriggerEvent @ 0x00401530)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : AIGraph, AIStationaryGun, AIStationaryGunHolder, AddAmmo, Afterburner_Init
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_TriggerEvent.h"

int32_t QTask_TriggerEvent(int16_t arg1, int32_t arg2, int32_t arg3)

{
    int32_t ctx = data_567c70 + 1;
    data_536148 += 1;
    data_567c70 = ctx;
    int32_t src_1 = arg2 * 0x180;
    int32_t result_2 = arg1 + src_1;
    *((result_2 << 2) + &data_a96ae0) = arg3;
    *(result_2 + 0x54ff34) = ctx == 1;
    int32_t obj = 0;

    for (int16_t* i = &data_af5ee8; i < 0xafa6e8; )
    {
        if (*(i + 0x1d) && *i == arg1 && !*(src_1 + obj + 0x54ff34))
            QTask_TriggerEvent(obj, arg2, arg3);

        i = &i[0x18];
        obj += 1;
    }

    QTask_DeleteTask();
    int32_t result = data_567c70 - 1;
    data_567c70 = result;
    return result;
}
