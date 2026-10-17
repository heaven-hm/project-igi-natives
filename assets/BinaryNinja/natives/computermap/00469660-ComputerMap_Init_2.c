// Original IGI.EXE function: ComputerMap_Init_2 (VA 0x00469660; static CFG gate PASS, CFG score 1.000).
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
