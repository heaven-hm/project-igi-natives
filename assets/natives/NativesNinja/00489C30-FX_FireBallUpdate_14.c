#include "00489C30-FX_FireBallUpdate_14.h"
/* 0x00489c30 FX_FireBallUpdate_14 full linked: callers=5 callees=1 */
int32_t* sub_489c30(void* a1, int32_t a2)

{
    *(a1 + 0x258) = 0x3f800000;
    *(a1 + 0x25c) = a2;
    int32_t* result = sub_489e30(a1);
    *(a1 + 0x2e8) = 0xffffffff;
    return result;
}
