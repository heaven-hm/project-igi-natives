// IGI native provenance: ComputerMap_Init_2 - 0x00469660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469660-ComputerMap_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerMap_Init_2.h"

int32_t ComputerMap_Init_2(void* pThis, int32_t param)

{
    if (!param)
        AI_AlertAllies_25(*(pThis + 0xa0), 4);
    else if (param != 1)
    {
        if (param != 2)
            return param - 2;

        return AI_AlertAllies_25(*(pThis + 0xa0), 0x1f);
    }

    return AI_AlertAllies_25(*(pThis + 0xa0), 0x15);
}
