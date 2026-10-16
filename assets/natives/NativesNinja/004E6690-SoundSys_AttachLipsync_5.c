#include "004E6690-SoundSys_AttachLipsync_5.h"
/* 0x004e6690 SoundSys_AttachLipsync_5 full linked: callers=5 callees=1 */
int32_t sub_4e6690()

{
    char result = g_548817;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_548817 = result;
    }

    return result;
}
