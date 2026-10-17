// IGI native provenance: WeaponGun_Invoke8_479AA0 - 0x00479AA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00479AA0-WeaponGun_Invoke8_479AA0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke8_479AA0.h"

int32_t* WeaponGun_Invoke8_479AA0(int32_t* arg1, int32_t* arg2)

{
    int32_t* result = arg1;
    int32_t* dest_ptr = result[0x4b];
    *arg2 = result[0x51];
    arg2[1] = 0;

    if (dest_ptr)
    {
        void* esi_1 = result[5];
        arg1 = nullptr;
        uint32_t eax_1 = Weapon_ReloadClip_8();
        int32_t eax_2 = 0;
        eax_2 = *(esi_1 + 0x1c);
        int32_t eax_3 = *(((eax_1 * 0x180 + eax_2) << 2) + &g_a96ae0);

        if (eax_3)
            eax_3(esi_1, &arg1);

        result = arg1;

        if (result)
        {
            result = Weapon_UpdateMuzzleFlash_8(result, *dest_ptr);

            if (result)
            {
                result = result[1];
                arg2[1] = result;
            }
        }
    }

    return result;
}
