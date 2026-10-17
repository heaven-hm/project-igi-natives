// IGI native provenance: KnifeStab_Open - 0x0046DDC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046DDC0-KnifeStab_Open.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "KnifeStab_Open.h"

int32_t* KnifeStab_Open(void* pThis, int32_t* param)

{
    int32_t* result_val_1 = DynObj_Missing(*param);

    if (!result_val_1)
    {
        int32_t local_14_1 = *param;
        Warning_Show("VirModel "%s" not available");
    }

    memcpy(pThis + 0xf0, &param[8], 0x18);
    memcpy(pThis + 0x108, &param[0x18], 0x28);
    DynObj_LookupHashItem_6(param[1], pThis, result_val_1);
    *(pThis + 0xec) = 0;
    memcpy(pThis + 0x70, &param[0xe], 0x28);
    uint32_t frame_ptr_1 = param[0x22];
    *(pThis + 0x130) = frame_ptr_1;
    struct status_msg* result_val_3 = CarGun_Create(nullptr, frame_ptr_1);
    int32_t counter_val_2 = *(pThis + 0x130);
    *(pThis + 0xe8) = result_val_3;
    return Car_GunCreate(result_val_3, pThis, counter_val_2);
}
