#include "004EDCE0-SoundSys_Definephysicsobjtype.h"
/* 0x004edce0 SoundSys_Definephysicsobjtype full linked: callers=1 callees=4 */
void* sub_4edce0()

{
    g_54dc30 = QTask_UnableToAllocateEven(0);
    g_54dc31 = QTask_UnableToAllocateEven(0);
    g_54dc32 = QTask_UnableToAllocateEven(0);
    return Game_DefineOptions("DefinePhysicsObjType", DefinePhysicsObjType, 0, 0xffffffff);
}
