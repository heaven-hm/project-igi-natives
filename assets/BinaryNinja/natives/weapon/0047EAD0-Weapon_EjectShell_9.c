// Original IGI.EXE function: Weapon_EjectShell_9 (VA 0x0047EAD0; static CFG gate PASS, CFG score 0.967).
#include "Weapon_EjectShell_9.h"
struct status_msg* Weapon_EjectShell_9(int32_t context, int32_t param_2, int32_t* param_3, int32_t param_4, int16_t param_5, int32_t param_6, int32_t param_7)

{
    uint32_t temp_2 = g_5c1160 + 0x18;
    int32_t item_10 = 0x400eb90c;
    int32_t item_24;
    strncpy(&item_24, "33KA33KA33KA", 0x14);
    void* data_1 = Level_StartMission_4();
    int32_t item_18;
    struct status_msg* result = Script_FormatString_30(Script_FormatString(), data_1, temp_2, &item_18, &item_24, param_3,
        0x49480000, param_2, 0, param_4, 0, 1, 0);
    Script_ParseEnumReal32_31(result, 1);
    int32_t item_c = 0;
    int32_t item_8 = 0;
    int32_t item_4 = 0x3f800000;
    float item_38_2 = Sys_AllocateMemory_14(Level_SetMission_5()) * 6.28318548f;
    Script_SpawnNewTask_31(result, context + 0x28, &item_c, param_7,
        (0.5f - Sys_AllocateMemory_14(Level_SetMission_5())) * 0.0188495573f, item_38_2, 0x3f800000, param_5,
        param_6);
    return result;
}
