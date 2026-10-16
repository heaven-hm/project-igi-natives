#include "gi_platform.h"
#include "004E6650-SoundSys_LoadSoundDef_5.h"
int32_t SoundSys_LoadSoundDef_5()

{
    char result = g_548815;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548815 = result;
    }

    return result;
}
