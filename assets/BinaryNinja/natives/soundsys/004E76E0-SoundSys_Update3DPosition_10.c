// Original IGI.EXE function: SoundSys_Update3DPosition_10 (VA 0x004E76E0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_Update3DPosition_10.h"
int32_t SoundSys_Update3DPosition_10(int32_t* context, char* param_2, int32_t param_3)

{
    String_VFormat(0xa5ea78, param_2, param_3);
    return SoundSys_SetMasterVolume_10(context, 0xa5ea78);
}
