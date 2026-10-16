#include "ConditionalSound_Action.h"
int32_t* ConditionalSound_Action(void* a1)

{
    int32_t* result = ConditionalSound_Stop(a1);
    result = 0;
    *(a1 + 0xb0) = 0;
    *(a1 + 0xb1) = 0;
    return result;
}
