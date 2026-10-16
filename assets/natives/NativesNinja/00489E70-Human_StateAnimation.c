#include "00489E70-Human_StateAnimation.h"
/* 0x00489e70 Human_StateAnimation full linked: callers=141 callees=1 */
int32_t sub_489e70(void* a1, int32_t a2, float a3)

{
    int32_t* eax_1 = *(a1 + 0x338) + (a2 << 3);
    return sub_489ea0(a1, *eax_1, eax_1[1], a3);
}
