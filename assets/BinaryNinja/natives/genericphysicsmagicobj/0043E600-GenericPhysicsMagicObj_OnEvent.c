// Original IGI.EXE function: GenericPhysicsMagicObj_OnEvent (VA 0x0043E600; static CFG gate PASS, CFG score 1.000).
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
