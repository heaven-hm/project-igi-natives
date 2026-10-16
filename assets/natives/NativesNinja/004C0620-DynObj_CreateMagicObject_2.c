#include "004C0620-DynObj_CreateMagicObject_2.h"
/* 0x004c0620 DynObj_CreateMagicObject_2 full linked: callers=3 callees=1 */
int32_t sub_4c0620(int32_t* a1, int32_t* a2, char* a3)

{
    if (!sub_4c04b0(a1, &a3, a3))
    {
        if (a2)
            *a2 = 0;

        return 0;
    }

    char* ecx = a3;

    if (a2)
        *a2 = *(ecx + 0xc);

    return *(ecx + 8);
}
