// IGI native provenance: Picture_GetHeight - 0x004B6E80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6E80-Picture_GetHeight.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Picture_GetHeight.h"
int32_t Picture_GetHeight(int32_t* context)

// Sig: int Picture_GetHeight(void* picture)
// Note: RETURNS the HEIGHT in pixels of a loaded picture/surface. Param:
// picture = picture pointer. Thin thunk to fcn.004B7E00.
{
    return Sys_AllocateMemory_22(context);
}
