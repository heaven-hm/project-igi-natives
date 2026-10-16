#include "004B6E80-Picture_GetHeight.h"
/* 0x004b6e80 Picture_GetHeight full linked: callers=1 callees=1 */
int32_t Picture_GetHeight(int32_t* a1)

// Sig: int Picture_GetHeight(void* picture)
// Note: RETURNS the HEIGHT in pixels of a loaded picture/surface. Param:
// picture = picture pointer. Thin thunk to fcn.004B7E00.
{
    return sub_4b7e00(a1);
}
