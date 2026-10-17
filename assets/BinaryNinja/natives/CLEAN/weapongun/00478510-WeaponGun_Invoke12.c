// IGI native provenance: WeaponGun_Invoke12 - 0x00478510 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00478510-WeaponGun_Invoke12.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke12.h"

void* WeaponGun_Invoke12(int32_t arg1)

{
    void* result = SoundSys_InitSoundSys_12();

    if (!*(result + 0x5c))
        return result;

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(arg1, 0);
}
