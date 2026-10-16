#include "gi_platform.h"
#include "004E76E0-SoundSys_Update3DPosition_10.h"
int32_t SoundSys_Update3DPosition_10(int32_t* a1, char* a2, int32_t a3)

{
    String_VFormat(0xa5ea78, a2, a3);
    return (SoundSys_SetMasterVolume_10(a1, 0xa5ea78), 0);
}
