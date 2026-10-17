// Original IGI.EXE function: BinocularOverlay_Cleanup (VA 0x00471400; static CFG gate PASS, CFG score 1.000).
#include "BinocularOverlay_Cleanup.h"
int32_t* BinocularOverlay_Cleanup(void* context)

{
    Script_CallNativeHandler_6(context + 0x24);
    int32_t* result = *(context + 0x20);

    if (result)
    {
        result = *result;

        if (result)
        {
            QTask_FindType(result);
            result = Qtask_UpdateList(*(context + 0x20));
            *(context + 0x20) = 0;
        }
    }

    return result;
}
