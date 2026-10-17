// Original IGI.EXE function: Display_ClearSurfaces_19 (VA 0x0049C7D0; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_19.h"
void Display_ClearSurfaces_19()

{
    void* dstD = nullptr;

    for (int32_t* i = &g_721564; i < 0x72445c; )
    {
        if (*i)
            Display_MeshFormatNotSupport(dstD);

        i = &i[0x3ea];
        dstD += 1;
    }
}
