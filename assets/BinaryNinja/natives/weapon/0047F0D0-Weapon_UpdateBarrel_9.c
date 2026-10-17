// Original IGI.EXE function: Weapon_UpdateBarrel_9 (VA 0x0047F0D0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateBarrel_9.h"
struct status_msg* Weapon_UpdateBarrel_9(void* context, int32_t param_2, int32_t param_3, int32_t param_4, float param_5)

{
    float item_34_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0314159282f;
    float item_38_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0314159282f;
    float item_28[0xa];
    Sys_ReadFileBlock_12(&item_28, Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0314159282f, item_38_1, item_34_1);
    int32_t entity_val = param_3;
    int32_t* item_44 = entity_val;
    entity_val = g_5c1156;
    struct status_msg* result = Physics_VirmodelIsNull(*(context + 0x80), entity_val, param_2, &item_28, item_44);
    long double fpu_val_7_7 = param_5 * 0.00048828125f;
    int32_t entity_1 = *(*(context + 0x80) + 0x20);
    result->sprite[0x5c] = fpu_val_7_7;
    result->head[0x26] = fpu_val_7_7;
    result->head[0x27] = fpu_val_7_7;
    result->head[0x28] = fpu_val_7_7;
    result->sprite[0x4c] = entity_1;
    result->sprite[0x4d] = *(&entity_1 + 1);
    result->sprite[0x4e] = *(&entity_1 + 2);
    result->sprite[0x4f] = *(&entity_1 + 3);
    result->sprite[0x54] = 0;
    result->sprite[0x55] = 0;
    result->sprite[0x56] = 0;
    result->sprite[0x57] = 0;
    result->sprite[0x58] = 0;
    result->sprite[0x59] = 0;
    result->sprite[0x5a] = 0;
    result->sprite[0x5b] = 0;
    result->sprite[0x50] = param_4;
    result->sprite[0x51] = *(&param_4 + 1);
    result->sprite[0x52] = *(&param_4 + 2);
    result->sprite[0x53] = *(&param_4 + 3);

    if (param_4)
    {
        long double fpu_val_7_8 = param_5;
        int32_t item_34_2 = 0;
        Weapon_UpdateRecoil_9(result, fpu_val_7_8 + fpu_val_7_8);
    }

    return result;
}
