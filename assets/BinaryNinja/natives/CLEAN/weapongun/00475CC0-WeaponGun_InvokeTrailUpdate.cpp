// IGI native provenance: WeaponGun_InvokeTrailUpdate - 0x00475CC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475CC0-WeaponGun_InvokeTrailUpdate.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_InvokeTrailUpdate.h"

int32_t WeaponGun_InvokeTrailUpdate(int32_t* arg1)

{
    (*((FX_TrailUpdate() << 2) + &g_a970e0))(arg1);
    int32_t result = arg1[0x8e];

    if (result)
    {
        result -= 1;
        arg1[0x8e] = result;
    }

    result = arg1[0x92];

    if (result)
    {
        result = arg1[0x8f];

        if (!result)
            arg1[0x79] = 1;
        else
        {
            result -= 1;
            arg1[0x8f] = result;
        }
    }

    result = arg1[0x64];

    if (!result)
        return result;

    return QTask_FindType(arg1);
}
