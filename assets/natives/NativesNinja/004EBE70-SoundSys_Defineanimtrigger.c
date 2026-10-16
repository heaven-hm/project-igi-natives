#include "004EBE70-SoundSys_Defineanimtrigger.h"
/* 0x004ebe70 SoundSys_Defineanimtrigger full linked: callers=1 callees=4 */
void* sub_4ebe70()

{
    g_54db80 = QTask_UnableToAllocateEven(0);
    g_54db81 = QTask_UnableToAllocateEven(0);
    g_54db82 = QTask_UnableToAllocateEven(0);
    return Game_DefineOptions("DefineAnimTrigger", DefineAnimTrigger, 0, 0xffffffff);
}
