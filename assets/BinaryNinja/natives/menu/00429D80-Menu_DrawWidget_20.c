#include "Menu_DrawWidget_20.h"
struct status_msg* Menu_DrawWidget_20(void* a1)

{
    struct status_msg* result = SoundSys_SetMasterVolume_7(a1, *(*(a1 + 0x1b4) + 0x2d4) + 0x23c);
    *(a1 + 0x890) = result;

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, a1 + 0x20);
}
