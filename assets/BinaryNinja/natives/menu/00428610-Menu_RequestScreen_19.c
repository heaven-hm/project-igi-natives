#include "Menu_RequestScreen_19.h"
void* Menu_RequestScreen_19(void* a1)

{
    void* result = *(a1 + 0x890);

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, a1 + 0x20);
}
