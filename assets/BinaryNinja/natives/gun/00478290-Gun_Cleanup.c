// Original IGI.EXE function: Gun_Cleanup (VA 0x00478290; static CFG gate PASS, CFG score 1.000).
#include "Gun_Cleanup.h"
void* Gun_Cleanup(void* context)

{
    DynObj_LookupHashItem_6(Level_StartMission_4(), context, 0);
    *(context + 0xec) = 0;
    return DynObj_RegisterSymbol_8(Level_StartMission_4(), context, 0);
}
