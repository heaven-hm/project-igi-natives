#include "004707D0-Binocular_Setup.h"
/* 0x004707d0 Binocular_Setup full linked: callers=0 callees=3 */
int32_t sub_4707d0(void* a1)

{
    sub_470800(a1);
    Qtask_UpdateList(*(a1 + 0x1c0));
    return (*((sub_477bf0() << 2) + &g_a976e0))(a1);
}
