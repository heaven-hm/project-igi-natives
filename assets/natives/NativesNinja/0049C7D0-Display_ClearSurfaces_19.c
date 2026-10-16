#include "0049C7D0-Display_ClearSurfaces_19.h"
/* 0x0049c7d0 Display_ClearSurfaces_19 full linked: callers=0 callees=1 */
void sub_49c7d0()

{
    void* edi = nullptr;

    for (int32_t* i = &g_721564; i < 0x72445c; )
    {
        if (*i)
            sub_49b4b0(edi);

        i = &i[0x3ea];
        edi += 1;
    }
}
