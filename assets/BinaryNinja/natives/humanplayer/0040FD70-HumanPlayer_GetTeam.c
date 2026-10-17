// IGI native provenance: HumanPlayer_GetTeam - 0x0040FD70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040FD70-HumanPlayer_GetTeam.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_GetTeam.h"

void* HumanPlayer_GetTeam(void* pThis, int32_t param)

{
    if (!(*(pThis + 8) & 1))
        return pThis;

    int32_t scratch_val_1 = *(pThis + 0x10);
    *(pThis + 0x10) = 1;
    void* counter_val_1 = *(pThis + 4);
    *(pThis + 0xc) = scratch_val_1;
    int32_t counter_val_2 = *(counter_val_1 + 4);
    *(pThis + 0x14) = counter_val_2;
    return counter_val_2(pThis, param);
}
