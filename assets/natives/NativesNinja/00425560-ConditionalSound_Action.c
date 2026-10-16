#include "00425560-ConditionalSound_Action.h"
/* 0x00425560 ConditionalSound_Action full linked: callers=0 callees=1 */
int32_t* ConditionalSound_Action(void* a1)

{
    int32_t* result = ConditionalSound_Stop(a1);
    result = 0;
    *(a1 + 0xb0) = 0;
    *(a1 + 0xb1) = 0;
    return result;
}
