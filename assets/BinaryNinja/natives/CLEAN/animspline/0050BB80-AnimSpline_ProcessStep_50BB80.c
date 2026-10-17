// IGI native provenance: AnimSpline_ProcessStep_50BB80 - 0x0050BB80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050BB80-AnimSpline_ProcessStep_50BB80.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_ProcessStep_50BB80.h"

uint32_t AnimSpline_ProcessStep_50BB80(uint32_t* arg1)

{
    int16_t ecx_1 = *(data_bcacb8 + 2);
    int16_t result_val = data_bcacb8;

    if (ecx_1 >= result_val)
    {
        uint32_t eax_2 = result_val;
        *arg1 = eax_2;
        return eax_2;
    }

    int32_t eax_1 = 0;
    eax_1 = ecx_1;
    *arg1 = eax_1;
    return eax_1;
}
