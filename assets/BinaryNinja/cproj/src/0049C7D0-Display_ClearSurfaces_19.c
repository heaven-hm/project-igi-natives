#include "gi_platform.h"
#include "0049C7D0-Display_ClearSurfaces_19.h"
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
