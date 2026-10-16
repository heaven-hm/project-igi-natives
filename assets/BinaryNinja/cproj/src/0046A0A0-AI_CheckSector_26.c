#include "gi_platform.h"
#include "0046A0A0-AI_CheckSector_26.h"
int32_t* AI_CheckSector_26(void* a1)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x90));

    if (result)
    {
        result = Qtask_UpdateList(result);
        (*(int32_t*)(uintptr_t)(a1 + 0x90)) = 0;
    }

    return result;
}
