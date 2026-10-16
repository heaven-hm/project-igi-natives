#include "gi_platform.h"
#include "004D6130-Render_BindTexture_9.h"
int32_t Render_BindTexture_9(float a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, float a7)

{
    int32_t* valA = a1;
    int32_t* srcS = valA[2] + a2 * 0x84;
    a1 = a7 * 4800.0f / g_a54658;
    int32_t* valA3;

    if (a5 >= 0)
        valA3 = Render_DrawSplineMesh_8(*valA, a2, a5, a6);
    else
        valA3 = Render_BindTexture_7(srcS);

    Render_ComputeNormals_9(srcS, Render_DrawSplineMesh_6(1, Render_DrawRigidMesh_9(a2, a3, a4), 1, valA3, 0, 0, 0, 0, 0, 0), a1,
        0);
    int32_t result = srcS[1] | 0x20000;
    srcS[1] = result;
    return result;
}
