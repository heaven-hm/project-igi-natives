#include "gi_platform.h"
#include "004251C0-ConditionalSound_Stop.h"
int32_t* ConditionalSound_Stop(void* a1)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x120));

    if (result)
    {
        int32_t* valA = *result;

        if (valA)
            QTask_FindType(valA);

        result = Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x120)));
        (*(int32_t*)(uintptr_t)(a1 + 0x120)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0xb2)) = 0;
    }

    return result;
}
