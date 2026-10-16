#include "gi_platform.h"
#include "00478900-Weapon_FireUpdate.h"
int32_t Weapon_FireUpdate(int32_t a1, int32_t* a2)

// Sig: void Weapon_FireUpdate(WeaponContext* weaponCtx, int* state)
// Note: Weapon FIRE update - processes firing state using config byte 0x5407B9
// and weapon-table entry ([ctx+0x14] -> +0x1C). Param state is read, passed by
// address to the selected weapon callback, and used to update weaponCtx+0xEC.
// Ghidra and r2 agree on two cdecl stack arguments; the registration site
// pushes this callback before the following registrar call.
{
    int32_t srcS = a1;
    int32_t valA = 0;
    int32_t tmpD = 0;
    valA = g_5407b9;
    void* objC = (*(int32_t*)(uintptr_t)(srcS + 0x14));
    tmpD = *(objC + 0x1c);
    int32_t result = valA * 0x180;

    if (*(((tmpD + result) << 2) + &g_a96ae0))
    {
        a1 = *a2;
        int32_t tmpD4 = 0;
        tmpD4 = *(objC + 0x1c);
        ((int(*)())(uintptr_t)(*(((tmpD4 + result) << 2) + &g_a96ae0)))(objC, &a1);
        result = a1;

        if (result)
        {
            (*(int32_t*)(uintptr_t)(srcS + 0xec)) = 0;
            return result;
        }

        (*(int32_t*)(uintptr_t)(srcS + 0xec)) = 1;
    }

    return result;
}
