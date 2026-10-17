// IGI native provenance: HumanAI_Invoke33 - 0x00453650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453650-HumanAI_Invoke33.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke33.h"

int32_t* HumanAI_Invoke33(int32_t* arg1)

{
    int32_t* result = arg1;

    if (result[0xc])
        result = Camera_ApplyHandiCam_33(&result[8]);

    return result;
}
