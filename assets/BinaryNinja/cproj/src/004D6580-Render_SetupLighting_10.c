#include "gi_platform.h"
#include "004D6580-Render_SetupLighting_10.h"
int32_t Render_SetupLighting_10(void* a1, int32_t a2, float a3)

{
    void* valA = Render_DrawBoneMesh_10(a1, a2);
    (*(int32_t*)(uintptr_t)(valA + 0x28)) = g_a54658 * a3;
    return Render_ComputeNormals_10(valA);
}
