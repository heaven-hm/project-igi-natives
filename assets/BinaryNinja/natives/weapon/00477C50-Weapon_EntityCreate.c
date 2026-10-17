// Original IGI.EXE function: Weapon_EntityCreate (VA 0x00477C50; static CFG gate PASS, CFG score 1.000).
#include "Weapon_EntityCreate.h"
struct status_msg* Weapon_EntityCreate(void* context, int16_t param_2, int32_t* param_3, int32_t param_4, char param_5)

// Sig: WeaponEntityView* Weapon_EntityCreate(uint32_t p1, uint16_t objectType,
// uint32_t weaponType, uint32_t p4, uint8_t p5)
// Note: Validates the weapon type, allocates/configures the weapon entity,
// initializes object fields, and dispatches the type handler. Ghidra/r2 CFG
// agreement: 6 basic blocks and 7 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    Qhash_Init(1);
    int32_t* dest_val = param_3;
    int32_t* kind = HumanPlayer_CheckCollision_10(dest_val);

    if (!kind)
    {
        int32_t* item_c_1 = dest_val;
        Warning_Show("Unknown weapon type: %d");
        param_3 = g_5be3c6;
        kind = param_3;
    }
    else
        kind = kind[0x1b6];

    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    int32_t* item_18 = dest_val;
    result->sprite[0x3d] = param_5;
    result->sprite[0x70] = param_2;
    result->sprite[0x71] = *(&param_2 + 1);
    Game_DataSymbolLoad(&result->sprite[0x50], "%d");
    uint32_t data_4 = Script_ParseEnumReal32_8();
    int32_t data_5 = 0;
    data_5 = result->head[7];
    int32_t data_6 = *(((data_4 * 0x180 + data_5) << 2) + &g_a96ae0);

    if (data_6)
        data_6(result, 0);

    result->sprite[0x90] = param_4;
    result->sprite[0x91] = *(&param_4 + 1);
    result->sprite[0x92] = *(&param_4 + 2);
    result->sprite[0x93] = *(&param_4 + 3);
    Qhash_Reset();
    return result;
}
