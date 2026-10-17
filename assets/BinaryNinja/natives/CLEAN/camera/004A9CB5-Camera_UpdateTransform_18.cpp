// IGI native provenance: Camera_UpdateTransform_18 - 0x004A9CB5 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9CB5-Camera_UpdateTransform_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_18.h"
int32_t __load_CW(int32_t context)

{
    *(&context + 2) = (context & 0x300) | 0x7f;
    int16_t fpu_control;
    int16_t x87status;
    fpu_control = __fldcw_memmem16(*(&context + 2));
}
