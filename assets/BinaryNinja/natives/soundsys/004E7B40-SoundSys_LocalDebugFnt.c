// IGI native provenance: SoundSys_LocalDebugFnt - 0x004E7B40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7B40-SoundSys_LocalDebugFnt.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LocalDebugFnt.h"
int32_t SoundSys_LocalDebugFnt()

{
    int16_t data_val = g_a5ea76;
    g_a5ebcc = 0;
    QTask_CloseEvent_2(data_val);
    Sys_ResolveSymbol_16("LOCAL:debug.fnt");
    Display_SyncVSync_3(sub_4e7900);
    return SoundSys_InitSoundSys_10(g_a5ebd0);
}
