// Original IGI.EXE function: Picture_GetWidth (VA 0x004B6E70; static CFG gate PASS, CFG score 1.000).
#include "Picture_GetWidth.h"
int32_t Picture_GetWidth(int32_t* a1)

// Sig: int Picture_GetWidth(void* picture)
// Note: RETURNS the WIDTH in pixels of a loaded picture/surface. Param: picture
// = pointer from a picture-load call. Thin thunk to fcn.004B7DF0
// (byte-verified).
{
    return Sys_CheckHeap_21(a1);
}
