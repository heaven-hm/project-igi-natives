// Original IGI.EXE function: SoundSys_Update3DPosition_4 (VA 0x004E5EA0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_Update3DPosition_4.h"
uint32_t SoundSys_Update3DPosition_4()

{
    uint32_t result = QTask_InitContext(g_b015c8);
    g_b015c8 = 0xff;
    return result;
}
