#include "KnifeStab_Open.h"

int32_t* KnifeStab_Open(void* pThis, int32_t* param)

{
    int32_t* eax_1 = DynObj_Missing(*param);

    if (!eax_1)
    {
        int32_t var_14_1 = *param;
        Warning_Show("VirModel "%s" not available");
    }

    __builtin_memcpy(pThis + 0xf0, &param[8], 0x18);
    __builtin_memcpy(pThis + 0x108, &param[0x18], 0x28);
    DynObj_LookupHashItem_6(param[1], pThis, eax_1);
    *(pThis + 0xec) = 0;
    __builtin_memcpy(pThis + 0x70, &param[0xe], 0x28);
    uint32_t ebp_1 = param[0x22];
    *(pThis + 0x130) = ebp_1;
    struct status_msg* eax_3 = CarGun_Create(nullptr, ebp_1);
    int32_t ecx_2 = *(pThis + 0x130);
    *(pThis + 0xe8) = eax_3;
    return Car_GunCreate(eax_3, pThis, ecx_2);
}
