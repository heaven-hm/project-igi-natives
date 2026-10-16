#include "HumanSoldier_Init_2.h"

void* HumanSoldier_Init_2(void* pThis, void* param)

{
    void* result = AI_CombatTarget_21(param);
    long double x87_r7 = *(param + 0x210);
    long double temp0 = 0f;
    x87_r7 - temp0;
    void* result_1 = result;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
    label_45c9ec:

        if (!(*(pThis + 8) & 0x20000))
            return result;
    }
    else
    {
        long double x87_r7_1 = *(param + 0x170);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_45c9ec;
    }

    AI_TakeCover_22(*(param + 0x4ec));
    AI_UpdateOrders_20(param);
    Weapon_ReloadClip_4(result_1);
    AI_SelectTarget_20(param);
    AI_UpdatePatrol_21(param, nullptr);
    AI_CheckSector_19(param);
    int32_t* edx_1 = *(pThis + 4);
    *(pThis + 0xc) = *(pThis + 0x10);
    *(pThis + 0x10) = 0;
    int32_t eax_1 = *edx_1;
    *(pThis + 0x14) = eax_1;
    return eax_1(pThis, param);
}
