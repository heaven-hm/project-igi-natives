// IGI native provenance: WeaponGun_Invoke5_479C20 - 0x00479C20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00479C20-WeaponGun_Invoke5_479C20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke5_479C20.h"

struct status_msg** WeaponGun_Invoke5_479C20(void* arg1, struct status_msg** arg2)

{
    void* result_val = Level_LoadObjects_5();

    if (*Level_LoadObjects_5() >= *(result_val + 4))
    {
        *arg2 = nullptr;
        return arg2;
    }

    int32_t var_8 = *(arg1 + 0x144);
    struct status_msg* eax_5 =
        AI_AlertAllies_29(Script_FormatString(), arg1 + 0x20, arg1 + 0x70, *(arg1 + 0x100));
    *arg2 = eax_5;
    *(arg1 + 0xfc) = 1;
    return eax_5;
}
