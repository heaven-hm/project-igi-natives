#include "00477C50-Weapon_EntityCreate.h"
/* 0x00477c50 Weapon_EntityCreate full linked: callers=3 callees=7 */
struct status_msg* Weapon_EntityCreate(void* a1, int16_t a2, int32_t* a3, int32_t a4, char a5)

// Sig: WeaponEntityView* Weapon_EntityCreate(uint32_t p1, uint16_t objectType,
// uint32_t weaponType, uint32_t p4, uint8_t p5)
// Note: Validates the weapon type, allocates/configures the weapon entity,
// initializes object fields, and dispatches the type handler. Ghidra/r2 CFG
// agreement: 6 basic blocks and 7 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    Qhash_Init(1);
    int32_t* edi = a3;
    int32_t* kind = HumanPlayer_CheckCollision_10(edi);

    if (!kind)
    {
        int32_t* var_c_1 = edi;
        Warning_Show("Unknown weapon type: %d");
        a3 = g_5be3c6;
        kind = a3;
    }
    else
        kind = kind[0x1b6];

    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    int32_t* var_18 = edi;
    result->sprite[0x3d] = a5;
    result->sprite[0x70] = a2;
    result->sprite[0x71] = *(&a2 + 1);
    Game_DataSymbolLoad(&result->sprite[0x50], "%d");
    uint32_t eax_4 = sub_4f1a70();
    int32_t eax_5 = 0;
    eax_5 = result->head[7];
    int32_t eax_6 = *(((eax_4 * 0x180 + eax_5) << 2) + &g_a96ae0);

    if (eax_6)
        eax_6(result, 0);

    result->sprite[0x90] = a4;
    result->sprite[0x91] = *(&a4 + 1);
    result->sprite[0x92] = *(&a4 + 2);
    result->sprite[0x93] = *(&a4 + 3);
    Qhash_Reset();
    return result;
}
