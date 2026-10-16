#include "004B6E70-Picture_GetWidth.h"
/* 0x004b6e70 Picture_GetWidth full linked: callers=2 callees=1 */
int32_t Picture_GetWidth(int32_t* a1)

// Sig: int Picture_GetWidth(void* picture)
// Note: RETURNS the WIDTH in pixels of a loaded picture/surface. Param: picture
// = pointer from a picture-load call. Thin thunk to fcn.004B7DF0
// (byte-verified).
{
    return sub_4b7df0(a1);
}
