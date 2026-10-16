#include "SoundSys_Update3DPosition_6.h"
int32_t SoundSys_Update3DPosition_6()

{
    char result = g_548819;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548819 = result;
    }

    return result;
}
