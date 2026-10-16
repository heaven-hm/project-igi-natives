#include "gi_platform.h"
#include "00471400-BinocularOverlay_Cleanup.h"
int32_t* BinocularOverlay_Cleanup(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x24);
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x20));

    if (result)
    {
        result = *result;

        if (result)
        {
            QTask_FindType(result);
            result = Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x20)));
            (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0;
        }
    }

    return result;
}
