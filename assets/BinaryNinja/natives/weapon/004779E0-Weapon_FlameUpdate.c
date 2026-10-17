// Original IGI.EXE function: Weapon_FlameUpdate (VA 0x004779E0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_FlameUpdate.h"
void* Weapon_FlameUpdate(void* context, int32_t* param_2)

// Sig: void Weapon_FlameUpdate(WeaponContext* weaponCtx, int* state)
// Note: FLAME-weapon effect update: resolves effect object via [ctx+0x14]+0x20
// then updates through 0x477C10. Param state is read, passed by address to the
// selected effect callback, and used to update weaponCtx+0xEC. Ghidra and r2
// agree on two cdecl stack arguments.
{
    void* dest_val = context;
    void* source_val = *(*(dest_val + 0x14) + 0x20);
    uint32_t data_2 = Weapon_FiringStateGet();
    int32_t data_3 = 0;
    data_3 = *(*(source_val + 0x14) + 0x1c);
    void* result = *(((data_2 * 0x180 + data_3) << 2) + &g_a96ae0);

    if (result)
    {
        void* source_1 = *(source_val + 0x14);
        context = *param_2;
        uint32_t data_5 = Weapon_FiringStateGet();
        int32_t entity_4 = 0;
        entity_4 = *(source_1 + 0x1c);
        (*(((data_5 * 0x180 + entity_4) << 2) + &g_a96ae0))(source_1, &context);
        result = context;

        if (result)
        {
            *(dest_val + 0xec) = 0;
            return result;
        }

        *(dest_val + 0xec) = 1;
    }

    return result;
}
