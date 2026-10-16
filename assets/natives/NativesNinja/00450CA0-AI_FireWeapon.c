#include "00450CA0-AI_FireWeapon.h"
/* 0x00450ca0 AI_FireWeapon full linked: callers=2 callees=1 */
int32_t sub_450ca0()

{
    char result = g_53c923;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_53c923 = result;
    }

    return result;
}
