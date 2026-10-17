// IGI native provenance: MathSys_Invoke16 - 0x004A56D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A56D0-MathSys_Invoke16.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16.h"

int32_t MathSys_Invoke16()

{
    int16_t x87control;
    /* tailcall */
    return Camera_ApplyHandiCam_14(x87control);
}
