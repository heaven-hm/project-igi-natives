#include "0048AE70-FX_FireBallUpdate_18.h"
/* 0x0048ae70 FX_FireBallUpdate_18 full linked: callers=45 callees=0 */
void* sub_48ae70(int32_t a1, void* a2, int32_t a3, int32_t a4)

{
    *(a2 + 0x24) = a4;

    if (!a3)
        return a2;

    return a3(a1, a2);
}
