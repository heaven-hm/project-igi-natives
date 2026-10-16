#include "00467DB0-AI_FireWeapon_25.h"
/* 0x00467db0 AI_FireWeapon_25 full linked: callers=3 callees=1 */
int32_t sub_467db0()

{
    char result = g_53f583;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0x181);
        g_53f583 = result;
    }

    return result;
}
