// IGI native provenance: WeaponGun_Invoke8 - 0x00470C80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470C80-WeaponGun_Invoke8.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke8.h"

int32_t* WeaponGun_Invoke8(void* arg1, int32_t arg2)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0))(arg1,
        arg2);
    int32_t* result = *(arg1 + 0x1c0);

    if (!*result)
    {
        Qtask_UpdateList(result);
        result = QTask_LinkEventHandler_2(Weapon_UpdateRecoil_2(arg1));
        *(arg1 + 0x1c0) = result;
    }

    return result;
}
