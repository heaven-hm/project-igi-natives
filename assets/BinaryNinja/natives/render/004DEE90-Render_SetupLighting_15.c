// Original IGI.EXE function: Render_SetupLighting_15 (VA 0x004DEE90; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_15.h"
void* Render_SetupLighting_15(void* context, char* param_2)

{
    void* result = DynObj_Missing(param_2);

    if (*(context + 0x6c) != result)
    {
        *(context + 0x6c) = result;
        *(context + 0x18c) = 0;
    }

    return result;
}
