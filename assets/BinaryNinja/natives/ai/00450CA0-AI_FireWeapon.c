#include "AI_FireWeapon.h"
int32_t AI_FireWeapon()

{
    char result = g_53c923;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53c923 = result;
    }

    return result;
}
