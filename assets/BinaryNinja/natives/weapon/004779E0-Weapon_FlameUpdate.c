// Original IGI.EXE function: Weapon_FlameUpdate (VA 0x004779E0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_FlameUpdate.h"
void* Weapon_FlameUpdate(void* a1, int32_t* a2)

// Sig: void Weapon_FlameUpdate(WeaponContext* weaponCtx, int* state)
// Note: FLAME-weapon effect update: resolves effect object via [ctx+0x14]+0x20
// then updates through 0x477C10. Param state is read, passed by address to the
// selected effect callback, and used to update weaponCtx+0xEC. Ghidra and r2
// agree on two cdecl stack arguments.
{
    void* dstD = a1;
    void* srcS = *(*(dstD + 0x14) + 0x20);
    uint32_t valA2 = Weapon_FiringStateGet();
    int32_t valA3 = 0;
    valA3 = *(*(srcS + 0x14) + 0x1c);
    void* result = *(((valA2 * 0x180 + valA3) << 2) + &g_a96ae0);

    if (result)
    {
        void* srcS1 = *(srcS + 0x14);
        a1 = *a2;
        uint32_t valA5 = Weapon_FiringStateGet();
        int32_t objC4 = 0;
        objC4 = *(srcS1 + 0x1c);
        (*(((valA5 * 0x180 + objC4) << 2) + &g_a96ae0))(srcS1, &a1);
        result = a1;

        if (result)
        {
            *(dstD + 0xec) = 0;
            return result;
        }

        *(dstD + 0xec) = 1;
    }

    return result;
}
