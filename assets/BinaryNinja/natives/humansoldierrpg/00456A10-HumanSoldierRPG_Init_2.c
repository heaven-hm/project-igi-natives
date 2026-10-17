// IGI native provenance: HumanSoldierRPG_Init_2 - 0x00456A10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00456A10-HumanSoldierRPG_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanSoldierRPG_Init_2.h"

void* HumanSoldierRPG_Init_2(void* pThis, void* param)

{
    int32_t counter_val = *(pThis + 8);

    if (!(counter_val & 4))
    {
        void* scratch_val = *(pThis + 4);
        *(pThis + 0xc) = *(pThis + 0x10);
        *(pThis + 0x10) = 0xb;
        int32_t counter_val_2 = *(scratch_val + 0x2c);
        *(pThis + 0x14) = counter_val_2;
        return counter_val_2(pThis, param);
    }

    if (counter_val & 0x10000)
    {
        void* scratch_val_2 = *(pThis + 4);
        *(pThis + 0xc) = *(pThis + 0x10);
        *(pThis + 0x10) = 0xc;
        int32_t counter_val_4 = *(scratch_val_2 + 0x30);
        *(pThis + 0x14) = counter_val_4;
        return counter_val_4(pThis, param);
    }

    if (counter_val & 0x20000)
    {
        void* scratch_val_4 = *(pThis + 4);
        *(pThis + 0xc) = *(pThis + 0x10);
        *(pThis + 0x10) = 0xd;
        int32_t counter_val_6 = *(scratch_val_4 + 0x34);
        *(pThis + 0x14) = counter_val_6;
        return counter_val_6(pThis, param);
    }

    if (!(counter_val & 0x81fe1) && *(param + 0xd04) != 0xffffffff)
        return pThis;

    int32_t counter_val_7 = *(pThis + 0x10);
    *(pThis + 0x10) = 0;
    *(pThis + 0xc) = counter_val_7;
    int32_t counter_val_9 = **(pThis + 4);
    *(pThis + 0x14) = counter_val_9;
    return counter_val_9(pThis, param);
}
