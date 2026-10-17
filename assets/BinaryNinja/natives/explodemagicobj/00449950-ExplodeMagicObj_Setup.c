// Original IGI.EXE function: ExplodeMagicObj_Setup (VA 0x00449950; static CFG gate PASS, CFG score 1.000).
#include "ExplodeMagicObj_Setup.h"
void* ExplodeMagicObj_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), a1);
    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
