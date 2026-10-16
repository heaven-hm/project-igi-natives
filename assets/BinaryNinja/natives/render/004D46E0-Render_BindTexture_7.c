#include "Render_BindTexture_7.h"
int32_t* Render_BindTexture_7(int32_t a1)

{
    int32_t* result = Render_ClipMesh_7();
    Render_DrawRigidMesh_8(result, 0, sub_4d4780, 0, 0, a1);
    return result;
}
