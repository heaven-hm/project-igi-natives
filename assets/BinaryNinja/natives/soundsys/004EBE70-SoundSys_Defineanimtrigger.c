#include "SoundSys_Defineanimtrigger.h"
void* SoundSys_Defineanimtrigger()

{
    g_54db80 = QTask_UnableToAllocateEvent(0);
    g_54db81 = QTask_UnableToAllocateEvent(0);
    g_54db82 = QTask_UnableToAllocateEvent(0);
    return Game_DefineOptions("DefineAnimTrigger", DefineAnimTrigger, 0, 0xffffffff);
}
