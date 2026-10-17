// IGI native provenance: AnimScaleTask_Init_2 - 0x0052ABD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052ABD0-AnimScaleTask_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimScaleTask_Init_2.h"

int32_t AnimScaleTask_Init_2(int32_t* pThis )

{
    int32_t result = *pThis;

    if (result >= 0 && result < 0x16)
    {
        pThis[1] = (result << 4) + 0x54f4a0;
        return (result << 4) + 0x54f4a0;
    }

    pThis[1] = 0;
    return result;
}
