// IGI native provenance: SoundSys_Defineanimtrigger - 0x004EBE70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EBE70-SoundSys_Defineanimtrigger.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_Defineanimtrigger.h"
void* SoundSys_Defineanimtrigger()

{
    g_54db80 = QTask_UnableToAllocateEvent(0);
    g_54db81 = QTask_UnableToAllocateEvent(0);
    g_54db82 = QTask_UnableToAllocateEvent(0);
    return Game_DefineOptions("DefineAnimTrigger", DefineAnimTrigger, 0, 0xffffffff);
}
