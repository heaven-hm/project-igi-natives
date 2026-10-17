// IGI native provenance: WeaponGun_Invoke5_475460 - 0x00475460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475460-WeaponGun_Invoke5_475460.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke5_475460.h"

int32_t WeaponGun_Invoke5_475460(void* arg1, int32_t arg2)

{
    (*((Weapon_ComputeAccuracy_5() << 2) + &g_a96ae0))(arg1, arg2);
    return Game_DataSymbolLoad(arg1 + 0x104, "WEAPON_ID_PROXIMITYMINE");
}
