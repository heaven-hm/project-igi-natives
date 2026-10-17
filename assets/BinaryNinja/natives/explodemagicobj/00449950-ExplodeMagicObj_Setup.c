// Original IGI.EXE function: ExplodeMagicObj_Setup (VA 0x00449950; static CFG gate PASS, CFG score 1.000).
#include "ExplodeMagicObj_Setup.h"
void* ExplodeMagicObj_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
