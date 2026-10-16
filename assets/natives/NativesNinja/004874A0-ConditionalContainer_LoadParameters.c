#include "004874A0-ConditionalContainer_LoadParameters.h"
/* 0x004874a0 ConditionalContainer_LoadParameters full linked: callers=0 callees=3 */
int32_t* sub_4874a0(void* a1)

{
    sub_4f1320(a1 + 0x20);
    sub_4f1320(a1 + 0x70);
    int32_t* result = sub_4f1320(a1 + 0xc0);
    result = 0;
    *(a1 + 0x110) = 0;
    *(a1 + 0x112) = 1;
    *(a1 + 0x111) = 0;
    return result;
}
