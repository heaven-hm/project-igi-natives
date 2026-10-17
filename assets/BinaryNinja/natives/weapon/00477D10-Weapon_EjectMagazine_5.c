// IGI native provenance: Weapon_EjectMagazine_5 - 0x00477D10 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 00477D10-Weapon_EjectMagazine_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_EjectMagazine_5.h"
struct status_msg* Weapon_EjectMagazine_5(float context, float param_2, int32_t* param_3, int32_t param_4, char* param_5)

{
    int32_t kind;
    kind = g_5be3c4;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    DynObj_CreateMagicObject_5(result, DynObj_Missing(param_5));
    memcpy(&result->head[8], param_2, 0x18);
    int32_t temp_1 = *param_3;
    result->sprite[0x68] = temp_1;
    result->sprite[0x69] = *(&temp_1 + 1);
    result->sprite[0x6a] = *(&temp_1 + 2);
    result->sprite[0x6b] = *(&temp_1 + 3);
    int32_t temp_2 = param_3[1];
    result->sprite[0x6c] = temp_2;
    result->sprite[0x6d] = *(&temp_2 + 1);
    result->sprite[0x6e] = *(&temp_2 + 2);
    result->sprite[0x6f] = *(&temp_2 + 3);
    int32_t entity_2 = param_3[2];
    result->sprite[0x70] = entity_2;
    result->sprite[0x71] = *(&entity_2 + 1);
    result->sprite[0x72] = *(&entity_2 + 2);
    result->sprite[0x73] = *(&entity_2 + 3);
    memcpy(&result->head[0x1c], param_4, 0x28);
    result->sprite[0x3c] = 0x13;
    result->sprite[0x3d] = 0;
    result->sprite[0x3e] = 0;
    result->sprite[0x3f] = 0;
    int32_t item_4 = 0;
    param_2 = Sys_FreeMemory_14(Level_SetMission_5(), 2) * 0.0174532924f;
    int32_t item_4_1 = 0;
    param_5 = Sys_FreeMemory_14(Level_SetMission_5(), 5) * 0.0174532924f;
    int32_t item_4_2 = 0;
    Sys_ReadFileBlock_12(&result->sprite[0x40], param_2, param_5,
        Sys_FreeMemory_14(Level_SetMission_5(), 5) * 0.0174532924f);
    return result;
}
