#include "00494690-Display_CreateSurface_6.h"
/* 0x00494690 Display_CreateSurface_6 full linked: callers=0 callees=1 */
int32_t __stdcall sub_494690(void* a1, void* a2)

{
    int32_t eax = *(a1 + 0xc);

    if (*(a2 + 0xc) < eax && *(a1 + 4) == 0x400 && eax <= *(a2 + 0x20))
        memcpy(a2, a1, 0x20);

    return 1;
}
