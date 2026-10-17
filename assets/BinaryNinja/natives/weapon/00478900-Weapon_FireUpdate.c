// IGI native provenance: Weapon_FireUpdate - 0x00478900 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00478900-Weapon_FireUpdate.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_FireUpdate.h"
int32_t Weapon_FireUpdate(int32_t context, int32_t* param_2)

// Sig: void Weapon_FireUpdate(WeaponContext* weaponCtx, int* state)
// Note: Weapon FIRE update - processes firing state using config byte 0x5407B9
// and weapon-table entry ([ctx+0x14] -> +0x1C). Param state is read, passed by
// address to the selected weapon callback, and used to update weaponCtx+0xEC.
// Ghidra and r2 agree on two cdecl stack arguments; the registration site
// pushes this callback before the following registrar call.
{
    int32_t source_val = context;
    int32_t data_val = 0;
    int32_t temp_val = 0;
    data_val = g_5407b9;
    void* entity_val = *(source_val + 0x14);
    temp_val = *(entity_val + 0x1c);
    int32_t result = data_val * 0x180;

    if (*(((temp_val + result) << 2) + &g_a96ae0))
    {
        context = *param_2;
        int32_t temp_4 = 0;
        temp_4 = *(entity_val + 0x1c);
        (*(((temp_4 + result) << 2) + &g_a96ae0))(entity_val, &context);
        result = context;

        if (result)
        {
            *(source_val + 0xec) = 0;
            return result;
        }

        *(source_val + 0xec) = 1;
    }

    return result;
}
