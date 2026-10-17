// IGI native provenance: SoundSysMicrophone_OnEvent - 0x004EBDB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EBDB0-SoundSysMicrophone_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSysMicrophone_OnEvent.h"
uint32_t SoundSysMicrophone_OnEvent()

{
    QTask_InitContext(g_54db6a);
    return QTask_CloseEvent_2(g_54db68);
}
