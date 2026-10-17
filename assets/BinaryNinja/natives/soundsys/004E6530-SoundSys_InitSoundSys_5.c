// Original IGI.EXE function: SoundSys_InitSoundSys_5 (VA 0x004E6530; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_InitSoundSys_5.h"
struct status_msg* SoundSys_InitSoundSys_5(void* context)

{
    int32_t kind;
    kind = g_548808;
    return QTask_HandleInput(context, kind, 0);
}
