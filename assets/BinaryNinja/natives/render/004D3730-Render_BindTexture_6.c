// Original IGI.EXE function: Render_BindTexture_6 (VA 0x004D3730; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_6.h"
int32_t* Render_BindTexture_6(void* context)

{
    int32_t* result = *(context + 0x80);

    if (result)
    {
        result = Render_ClipMesh_6(result);
        *(context + 0x80) = result;
    }

    return result;
}
