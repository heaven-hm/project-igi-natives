// IGI native provenance: AnimCam_Update_2 - 0x00528400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00528400-AnimCam_Update_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimCam_Update_2.h"

void* AnimCam_Update_2(void* pThis)

{
    *(*(pThis + 0x14) + 0x194) = 0xff7fffff;
    return pThis;
}
