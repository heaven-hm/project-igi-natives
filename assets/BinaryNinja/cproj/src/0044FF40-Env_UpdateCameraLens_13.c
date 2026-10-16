#include "gi_platform.h"
#include "0044FF40-Env_UpdateCameraLens_13.h"
int32_t* Env_UpdateCameraLens_13(void* a1)

{
    int32_t* result = Env_CheckAmbientArea_13(a1);
    result = (*(int32_t*)(uintptr_t)(a1 + 0x3e4a));

    if (result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0x3e4c));

        if (result)
        {
            result = Qtask_UpdateList(result);
            (*(int32_t*)(uintptr_t)(a1 + 0x3e4c)) = 0;
        }

        (*(int32_t*)(uintptr_t)(a1 + 0x3e4a)) = 0;
    }

    return result;
}
