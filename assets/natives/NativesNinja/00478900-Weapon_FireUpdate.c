#include "00478900-Weapon_FireUpdate.h"
/* 0x00478900 Weapon_FireUpdate full linked: callers=0 callees=0 */
int32_t Weapon_FireUpdate(int32_t a1, int32_t* a2)

// Sig: void Weapon_FireUpdate(WeaponContext* weaponCtx, int* state)
// Note: Weapon FIRE update - processes firing state using config byte 0x5407B9
// and weapon-table entry ([ctx+0x14] -> +0x1C). Param state is read, passed by
// address to the selected weapon callback, and used to update weaponCtx+0xEC.
// Ghidra and r2 agree on two cdecl stack arguments; the registration site
// pushes this callback before the following registrar call.
{
    int32_t esi = a1;
    int32_t eax = 0;
    int32_t edx = 0;
    eax = g_5407b9;
    void* ecx = *(esi + 0x14);
    edx = *(ecx + 0x1c);
    int32_t result = eax * 0x180;

    if (*(((edx + result) << 2) + &g_a96ae0))
    {
        a1 = *a2;
        int32_t edx_4 = 0;
        edx_4 = *(ecx + 0x1c);
        (*(((edx_4 + result) << 2) + &g_a96ae0))(ecx, &a1);
        result = a1;

        if (result)
        {
            *(esi + 0xec) = 0;
            return result;
        }

        *(esi + 0xec) = 1;
    }

    return result;
}
