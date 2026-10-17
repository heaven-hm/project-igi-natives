// Original IGI.EXE function: Weapon_EntityCreate (VA 0x00477C50; static CFG gate PASS, CFG score 1.000).
#include "Weapon_EntityCreate.h"
struct status_msg* Weapon_EntityCreate(void* a1, int16_t a2, int32_t* a3, int32_t a4, char a5)

// Sig: WeaponEntityView* Weapon_EntityCreate(uint32_t p1, uint16_t objectType,
// uint32_t weaponType, uint32_t p4, uint8_t p5)
// Note: Validates the weapon type, allocates/configures the weapon entity,
// initializes object fields, and dispatches the type handler. Ghidra/r2 CFG
// agreement: 6 basic blocks and 7 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    Qhash_Init(1);
    int32_t* dstD = a3;
    int32_t* kind = HumanPlayer_CheckCollision_10(dstD);

    if (!kind)
    {
        int32_t* v_c_1 = dstD;
        Warning_Show("Unknown weapon type: %d");
        a3 = g_5be3c6;
        kind = a3;
    }
    else
        kind = kind[0x1b6];

    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    int32_t* v_18 = dstD;
    result->sprite[0x3d] = a5;
    result->sprite[0x70] = a2;
    result->sprite[0x71] = *(&a2 + 1);
    Game_DataSymbolLoad(&result->sprite[0x50], "%d");
    uint32_t valA4 = Script_ParseEnumReal32_8();
    int32_t valA5 = 0;
    valA5 = result->head[7];
    int32_t valA6 = *(((valA4 * 0x180 + valA5) << 2) + &g_a96ae0);

    if (valA6)
        valA6(result, 0);

    result->sprite[0x90] = a4;
    result->sprite[0x91] = *(&a4 + 1);
    result->sprite[0x92] = *(&a4 + 2);
    result->sprite[0x93] = *(&a4 + 3);
    Qhash_Reset();
    return result;
}
