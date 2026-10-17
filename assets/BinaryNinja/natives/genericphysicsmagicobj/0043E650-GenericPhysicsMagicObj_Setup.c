// IGI native provenance: GenericPhysicsMagicObj_Setup - 0x0043E650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043E650-GenericPhysicsMagicObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericPhysicsMagicObj_Setup.h"
void* GenericPhysicsMagicObj_Setup(void* context)

{
    Script_ParseEnumString_28(context);
    return DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
}
