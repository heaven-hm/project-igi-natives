// IGI native provenance: HumanPlayer_SetTeam - 0x0040FDF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040FDF0-HumanPlayer_SetTeam.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_SetTeam.h"

void HumanPlayer_SetTeam(void* pThis, void* param)

{
    if (*(param + 0x2fc) == 0x2d)
        return;

    *(param + 0x4d0) = 1;
    int32_t source_ptr_1 = *(pThis + 0x10);
    *(pThis + 0x10) = 1;
    void* counter_val_1 = *(pThis + 4);
    *(pThis + 0xc) = source_ptr_1;
    int32_t counter_val_2 = *(counter_val_1 + 4);
    *(pThis + 0x14) = counter_val_2;
    counter_val_2(pThis, param);
}
