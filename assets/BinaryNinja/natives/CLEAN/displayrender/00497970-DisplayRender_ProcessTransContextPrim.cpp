// IGI native provenance: DisplayRender_ProcessTransContextPrim - 0x00497970 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497970-DisplayRender_ProcessTransContextPrim.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessTransContextPrim.h"

int32_t DisplayRender_ProcessTransContextPrim(void* arg1)

{
    return Transcontext_SetActiveTransContext(arg1 + 0x10);
}
