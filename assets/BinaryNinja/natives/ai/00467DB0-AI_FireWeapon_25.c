#include "AI_FireWeapon_25.h"
int32_t AI_FireWeapon_25()

{
    char result = g_53f583;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0x181);
        g_53f583 = result;
    }

    return result;
}
