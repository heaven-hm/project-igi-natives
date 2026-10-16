#include "00516C67-Terrain_RenderWaterSurface_4.h"
/* 0x00516c67 Terrain_RenderWaterSurface_4 full linked: callers=1 callees=3 */
int32_t sub_516c67(PSTR a1)

{
    enum WIN32_ERROR eax_1;

    if (DeleteFileA(a1))
        eax_1 = NO_ERROR;
    else
        eax_1 = GetLastError();

    if (!eax_1)
        return 0;

    sub_4abc46(eax_1);
    return 0xffffffff;
}
