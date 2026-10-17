// Original IGI.EXE function: SoundSys_Definephysicsobjtype (VA 0x004EDCE0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_Definephysicsobjtype.h"
void* SoundSys_Definephysicsobjtype()

{
    g_54dc30 = QTask_UnableToAllocateEvent(0);
    g_54dc31 = QTask_UnableToAllocateEvent(0);
    g_54dc32 = QTask_UnableToAllocateEvent(0);
    return Game_DefineOptions("DefinePhysicsObjType", DefinePhysicsObjType, 0, 0xffffffff);
}
