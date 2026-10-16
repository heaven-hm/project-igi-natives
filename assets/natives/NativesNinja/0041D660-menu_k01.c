#include "0041D660-menu_k01.h"
/* 0x0041d660 menu_k01 full linked: callers=2 callees=1 */
int32_t menu_k01(void* a1, int32_t a2)

{
    char* eax = a1 + a2 + 0x54;

    if (*(a1 + a2 + 0x54))
    {
        char i;

        do
        {
            *eax = eax[1];
            i = eax[1];
            eax = &eax[1];
        } while (i);
    }

    *(a1 + 0x1a0) = a2;
    return sub_4e7180("menu_k01", 0, 0);
}
