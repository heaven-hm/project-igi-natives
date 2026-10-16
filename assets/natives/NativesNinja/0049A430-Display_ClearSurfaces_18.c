#include "0049A430-Display_ClearSurfaces_18.h"
/* 0x0049a430 Display_ClearSurfaces_18 full linked: callers=2 callees=1 */
int32_t sub_49a430(int32_t a1, int32_t a2)

{
    memcpy(a1 + 0x20, a2, 0x18);
    return a1;
}
