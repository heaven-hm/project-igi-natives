#include "004779E0-Weapon_FlameUpdate.h"
/* 0x004779e0 Weapon_FlameUpdate full linked: callers=0 callees=2 */
void* Weapon_FlameUpdate(void* a1, int32_t* a2)

// Sig: void Weapon_FlameUpdate(WeaponContext* weaponCtx, int* state)
// Note: FLAME-weapon effect update: resolves effect object via [ctx+0x14]+0x20
// then updates through 0x477C10. Param state is read, passed by address to the
// selected effect callback, and used to update weaponCtx+0xEC. Ghidra and r2
// agree on two cdecl stack arguments.
{
    void* edi = a1;
    void* esi = *(*(edi + 0x14) + 0x20);
    uint32_t eax_2 = Weapon_FiringStateGet();
    int32_t eax_3 = 0;
    eax_3 = *(*(esi + 0x14) + 0x1c);
    void* result = *(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0);

    if (result)
    {
        void* esi_1 = *(esi + 0x14);
        a1 = *a2;
        uint32_t eax_5 = Weapon_FiringStateGet();
        int32_t ecx_4 = 0;
        ecx_4 = *(esi_1 + 0x1c);
        (*(((eax_5 * 0x180 + ecx_4) << 2) + &g_a96ae0))(esi_1, &a1);
        result = a1;

        if (result)
        {
            *(edi + 0xec) = 0;
            return result;
        }

        *(edi + 0xec) = 1;
    }

    return result;
}
