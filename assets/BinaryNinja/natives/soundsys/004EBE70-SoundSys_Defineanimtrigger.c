// Original IGI.EXE function: SoundSys_Defineanimtrigger (VA 0x004EBE70; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_Defineanimtrigger.h"
void* SoundSys_Defineanimtrigger()

{
    g_54db80 = QTask_UnableToAllocateEvent(0);
    g_54db81 = QTask_UnableToAllocateEvent(0);
    g_54db82 = QTask_UnableToAllocateEvent(0);
    return Game_DefineOptions("DefineAnimTrigger", DefineAnimTrigger, 0, 0xffffffff);
}
