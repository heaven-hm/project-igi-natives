// IGI native provenance: WeaponGun_Invoke5_472E10 - 0x00472E10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472E10-WeaponGun_Invoke5_472E10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke5_472E10.h"

int32_t WeaponGun_Invoke5_472E10(void* arg1, int32_t arg2)

{
    (*((Weapon_ComputeAccuracy_5() << 2) + &g_a96ae0))(arg1, arg2);
    int32_t result = Game_DataSymbolLoad(arg1 + 0x104, "WEAPON_ID_DRAGUNOV");
    *(arg1 + 0x1b0) = 0;
    return result;
}
