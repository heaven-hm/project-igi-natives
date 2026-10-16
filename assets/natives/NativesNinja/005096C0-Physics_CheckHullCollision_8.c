#include "005096C0-Physics_CheckHullCollision_8.h"
/* 0x005096c0 Physics_CheckHullCollision_8 full linked: callers=8 callees=1 */
void* sub_5096c0(void* a1, int32_t a2, int32_t a3)

{
    if (!*(a1 + 0xb8))
        return 0;

    int32_t* eax_1 = sub_509390(a1, a2, a3);
    int32_t eax_3 = *eax_1 + 1;
    int32_t eax_4 = -(eax_3);
    return (eax_4 - eax_4) & eax_1;
}
