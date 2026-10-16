#include "gi_platform.h"
#include "004D65B0-Render_BindTexture_10.h"
void* Render_BindTexture_10(void* a1, int32_t a2, int32_t a3)

{
    void* result = Render_DrawBoneMesh_10(a1, a2);
    *(result + 0x2c) = a3;
    return result;
}
