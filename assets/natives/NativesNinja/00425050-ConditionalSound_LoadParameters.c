#include "00425050-ConditionalSound_LoadParameters.h"
/* 0x00425050 ConditionalSound_LoadParameters full linked: callers=0 callees=2 */
int32_t ConditionalSound_LoadParameters(void* a1)

{
    sub_4f1320(a1 + 0x20);
    __builtin_memset(a1 + 0x90, 0, 0x1a);
    *(a1 + 0x70) = 0;
    *(a1 + 0xb0) = 0;
    *(a1 + 0xb1) = 0;
    *(a1 + 0xb2) = 0;
    *(a1 + 0xb4) = 0;
    *(a1 + 0xb3) = 0;
    *(a1 + 0xac) = 0xffffffff;
    *(a1 + 0x120) = 0;
    *(a1 + 0x124) = 0;
    return 0;
}
