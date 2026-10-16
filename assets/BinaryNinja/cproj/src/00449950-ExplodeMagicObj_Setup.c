#include "gi_platform.h"
#include "00449950-ExplodeMagicObj_Setup.h"
void* ExplodeMagicObj_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), a1);
    return DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
}
