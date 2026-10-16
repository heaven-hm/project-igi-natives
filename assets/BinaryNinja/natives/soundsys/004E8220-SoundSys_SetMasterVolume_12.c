#include "SoundSys_SetMasterVolume_12.h"
int32_t SoundSys_SetMasterVolume_12(int32_t a1, int32_t a2, char a3)

{
    *(a1 + a2 + 0xb1) = a3;
    return a3;
}
