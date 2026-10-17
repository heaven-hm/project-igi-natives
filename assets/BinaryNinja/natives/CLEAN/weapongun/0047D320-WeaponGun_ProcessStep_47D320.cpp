// IGI native provenance: WeaponGun_ProcessStep_47D320 - 0x0047D320 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047D320-WeaponGun_ProcessStep_47D320.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_ProcessStep_47D320.h"

int32_t WeaponGun_ProcessStep_47D320(void* arg1)

{
    int32_t* 5c111c_1 = g_5c111c;
    int32_t result = g_5c1110 - 1;
    int32_t data_val = *(*(arg1 + 0xe134) + 5c111c_1);
    g_5c1110 = result;

    if (data_val != result)
    {
        int32_t 5c110c_1 = g_5c110c;
        result = *(5c110c_1 + (result << 2)) * g_5c1118 + g_5c1108;
        int32_t edi_2 = *(5c110c_1 + (data_val << 2));
        int32_t source_ptr = *(5c111c_1 + result);
        *(5c110c_1 + (data_val << 2)) = *(5c110c_1 + (source_ptr << 2));
        *(g_5c110c + (source_ptr << 2)) = edi_2;
        *(g_5c111c + result) = data_val;
    }

    return result;
}
