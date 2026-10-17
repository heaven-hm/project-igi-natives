// Original IGI.EXE function: Render_DrawBoneMesh_8 (VA 0x004D47B0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawBoneMesh_8.h"
void* Render_DrawBoneMesh_8(void* context)

{
    void* result = *(context + 0x74);

    if (result)
    {
        while (!(*(result + 4) & 0x20000))
        {
            result = *(result + 0x74);

            if (!result)
                break;
        }
    }

    return result;
}
