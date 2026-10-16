#include "BinocularOverlay_Cleanup.h"
int32_t* BinocularOverlay_Cleanup(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x24);
    int32_t* result = *(a1 + 0x20);

    if (result)
    {
        result = *result;

        if (result)
        {
            QTask_FindType(result);
            result = Qtask_UpdateList(*(a1 + 0x20));
            *(a1 + 0x20) = 0;
        }
    }

    return result;
}
