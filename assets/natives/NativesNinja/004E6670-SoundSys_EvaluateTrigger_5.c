#include "004E6670-SoundSys_EvaluateTrigger_5.h"
/* 0x004e6670 SoundSys_EvaluateTrigger_5 full linked: callers=4 callees=1 */
int32_t sub_4e6670()

{
    char result = g_548816;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_548816 = result;
    }

    return result;
}
