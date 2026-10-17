// IGI native provenance: HumanPlayer_LoadParameters_14 - 0x00413730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00413730-HumanPlayer_LoadParameters_14.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_LoadParameters_14.h"

int32_t HumanPlayer_LoadParameters_14(void* pThis, float param)

{
    *(param + 0xc) = pThis + 0x20;
    *(param + 0x10) = pThis + 0x78;
    *(param + 0x14) = *(pThis + 0xa0);
    *(param + 0x1c) = 2;
    *(param + 0x20) = 3;
    return AI_UpdateOrders_25(param);
}
