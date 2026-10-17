// Original IGI.EXE function: AI_FireWeapon_25 (VA 0x00467DB0; static CFG gate PASS, CFG score 1.000).
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
