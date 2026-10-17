// Original IGI.EXE function: HumanView_Process (VA 0x00464580; static CFG gate PASS, CFG score 1.000).
#include "HumanView_Process.h"
int32_t HumanView_Process(void* context, int32_t* param_2)

{
    char result = *(context + 0xd9);

    if (result)
    {
        Render_DrawSplineMesh_12(context);
        result = DynObj_RegisterSymbol_9(*param_2, context);
        *(context + 0xd9) = 0;
    }

    return result;
}
