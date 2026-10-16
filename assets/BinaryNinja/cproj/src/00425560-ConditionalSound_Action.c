#include "gi_platform.h"
#include "00425560-ConditionalSound_Action.h"
int32_t* ConditionalSound_Action(void* a1)

{
    int32_t* result = ConditionalSound_Stop(a1);
    result = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb1)) = 0;
    return result;
}
