// IGI native provenance: SoundSys_Definephysicsobjtype - 0x004EDCE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EDCE0-SoundSys_Definephysicsobjtype.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_Definephysicsobjtype.h"
void* SoundSys_Definephysicsobjtype()

{
    g_54dc30 = QTask_UnableToAllocateEvent(0);
    g_54dc31 = QTask_UnableToAllocateEvent(0);
    g_54dc32 = QTask_UnableToAllocateEvent(0);
    return Game_DefineOptions("DefinePhysicsObjType", DefinePhysicsObjType, 0, 0xffffffff);
}
