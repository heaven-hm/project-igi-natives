// IGI native provenance: Picture_GetWidth - 0x004B6E70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6E70-Picture_GetWidth.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Picture_GetWidth.h"
int32_t Picture_GetWidth(int32_t* context)

// Sig: int Picture_GetWidth(void* picture)
// Note: RETURNS the WIDTH in pixels of a loaded picture/surface. Param: picture
// = pointer from a picture-load call. Thin thunk to fcn.004B7DF0
// (byte-verified).
{
    return Sys_CheckHeap_21(context);
}
