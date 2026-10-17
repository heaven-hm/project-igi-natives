// IGI native provenance: WeaponGun_Invoke4 - 0x004784F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004784F0-WeaponGun_Invoke4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke4.h"

void* WeaponGun_Invoke4(void* arg1)

{
    return DynObj_RemoveSymbol_7(Level_StartMission_4(), arg1, 0);
}
