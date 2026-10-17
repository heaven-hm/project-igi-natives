// Original IGI.EXE function: HumanSoldier_Update (VA 0x0045CA80; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldier_Update.h"

void* HumanSoldier_Update(void* pThis, int32_t param)

{
    if (!(*(pThis + 8) & 1))
        return pThis;

    int32_t* scratch_val_1 = *(pThis + 4);
    *(pThis + 0xc) = *(pThis + 0x10);
    *(pThis + 0x10) = 0;
    int32_t counter_val_2 = *scratch_val_1;
    *(pThis + 0x14) = counter_val_2;
    return counter_val_2(pThis, param);
}
