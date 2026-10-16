#include "0048E870-FX_TrailUpdate_20.h"
/* 0x0048e870 FX_TrailUpdate_20 full linked: callers=0 callees=2 */
int32_t* sub_48e870(void* a1)

{
    void* eax = *(a1 + 0x3ab0);

    if (eax)
    {
        sub_453390(eax);
        *(a1 + 0x3ab0) = 0;
    }

    int32_t* result = *(a1 + 0x3ab4);

    if (result)
    {
        result = sub_453390(result);
        *(a1 + 0x3ab4) = 0;
    }

    return result;
}
