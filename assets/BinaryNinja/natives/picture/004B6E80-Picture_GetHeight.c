// Original IGI.EXE function: Picture_GetHeight (VA 0x004B6E80; static CFG gate PASS, CFG score 1.000).
#include "Picture_GetHeight.h"
int32_t Picture_GetHeight(int32_t* context)

// Sig: int Picture_GetHeight(void* picture)
// Note: RETURNS the HEIGHT in pixels of a loaded picture/surface. Param:
// picture = picture pointer. Thin thunk to fcn.004B7E00.
{
    return Sys_AllocateMemory_22(context);
}
