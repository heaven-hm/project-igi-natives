// IGI native provenance: WeaponGun_Invoke9_474F10 - 0x00474F10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00474F10-WeaponGun_Invoke9_474F10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke9_474F10.h"

int32_t WeaponGun_Invoke9_474F10(int32_t* arg1)

{
    void* result_val = *arg1;
    return FX_FireBallUpdate_9(result_val, result_val + 0x434);
}
