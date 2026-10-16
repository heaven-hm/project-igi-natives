/* LOGIC NOTE (QTask_RemoveEventCallback @ 0x00401400)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : AIStationaryGun, AIStationaryGunHolder, AddAmmo, Afterburner_Init, AlarmControl
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_RemoveEventCallback.h"

int32_t QTask_RemoveEventCallback(int16_t arg1, int32_t arg2, int32_t arg3)

{
    int32_t ctx = data_567c6c + 1;
    data_536148 += 1;
    uint32_t src_3 = arg2 * 0x180;
    data_567c6c = ctx;
    uint32_t result_4 = arg1 + src_3;
    *((result_4 << 2) + &data_a96ae0) = arg3;
    *(result_4 + 0x54ff34) = ctx == 1;
    int32_t obj = 0;

    for (int16_t* i = &data_af5ee8; i < 0xafa6e8; )
    {
        if (*(i + 0x1d) && *i == arg1 && !*(src_3 + obj + 0x54ff34))
            QTask_RemoveEventCallback(obj, arg2, arg3);

        i = &i[0x18];
        obj += 1;
    }

    QTask_DeleteTask();
    int32_t result = data_567c6c - 1;
    data_567c6c = result;
    return result;
}
