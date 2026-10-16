#include "gi_platform.h"
#include "004E6690-SoundSys_AttachLipsync_5.h"
int32_t SoundSys_AttachLipsync_5()

{
    char result = g_548817;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548817 = result;
    }

    return result;
}
