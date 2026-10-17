// IGI native provenance: AlarmLight_Init_2 - 0x00439750 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00439750-AlarmLight_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmLight_Init_2.h"

void* AlarmLight_Init_2(void* pThis)

{
    if (*(pThis + 0x138))
        *(pThis + 0x1a8) = 1;

    return pThis;
}
