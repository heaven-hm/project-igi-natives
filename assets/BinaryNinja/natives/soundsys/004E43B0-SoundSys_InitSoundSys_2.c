// IGI native provenance: SoundSys_InitSoundSys_2 - 0x004E43B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E43B0-SoundSys_InitSoundSys_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_InitSoundSys_2.h"
uint32_t SoundSys_InitSoundSys_2()

{
    QTask_LinkEventHandler_3(0x10000000);
    return QTask_CloseEvent_2(g_a5e3f4);
}
