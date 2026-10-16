#include "gi_platform.h"
#include "0043E650-GenericPhysicsMagicObj_Setup.h"
void* GenericPhysicsMagicObj_Setup(void* a1)

{
    Script_ParseEnumString_28(a1);
    return DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
}
