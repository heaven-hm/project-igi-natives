#include "Render_DrawRigidMesh_9.h"
int32_t* Render_DrawRigidMesh_9(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* result = Render_ClipMesh_7();
    int32_t* valA = Render_DrawBoneMesh_9();
    Render_DrawSplineMesh_9(valA, a1, a2, a3);
    Render_DrawRigidMesh_8(result, 0, sub_4d5820, 0, sub_4d57c0, valA);
    return result;
}
