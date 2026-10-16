#include "gi_platform.h"
#include "004E6670-SoundSys_EvaluateTrigger_5.h"
int32_t SoundSys_EvaluateTrigger_5()

{
    char result = g_548816;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548816 = result;
    }

    return result;
}
