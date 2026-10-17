// Original IGI.EXE function: GenericPhysicsMagicObj_Setup (VA 0x0043E650; static CFG gate PASS, CFG score 1.000).
#include "GenericPhysicsMagicObj_Setup.h"
void* GenericPhysicsMagicObj_Setup(void* context)

{
    Script_ParseEnumString_28(context);
    return DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
}
