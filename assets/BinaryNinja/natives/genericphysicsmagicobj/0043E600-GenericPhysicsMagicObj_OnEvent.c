// IGI native provenance: GenericPhysicsMagicObj_OnEvent - 0x0043E600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043E600-GenericPhysicsMagicObj_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericPhysicsMagicObj_OnEvent.h"
float* GenericPhysicsMagicObj_OnEvent(float context)

{
    float* result = Script_ParseEnumReal32_29(context);

    if (result)
        return result;

    float item_4_1 = context;
    void item_8;
    return Script_FormatString_28(context, 44.6008873f, 0.959999979f, 0.920000017f, Level_StartMission_4(), 0xc,
        &item_8);
}
