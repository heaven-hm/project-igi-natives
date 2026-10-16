#include "gi_platform.h"
#include "0043E600-GenericPhysicsMagicObj_OnEvent.h"
float* GenericPhysicsMagicObj_OnEvent(float a1)

{
    float* result = Script_ParseEnumReal32_29(a1);

    if (result)
        return result;

    float v_4_1 = a1;
    char v_8;
    return Script_FormatString_28(a1, 44.6008873.0f, 0.959999979.0f, 0.920000017.0f, Level_StartMission_4(), 0xc,
        &v_8);
}
