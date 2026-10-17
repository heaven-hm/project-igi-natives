// Original IGI.EXE function: AI_CheckVisibility_23 (VA 0x00465700; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_23.h"
int32_t AI_CheckVisibility_23(void* context)

{
    char result = *(context + 0xda);

    if (result)
    {
        result = Render_DrawBoneMesh_7(context + 0x78, context + 0x68);
        *(context + 0xda) = 0;
    }

    return result;
}
