#include "Render_DrawRigidMesh_8.h"
int32_t* Render_DrawRigidMesh_8(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    *a1 = a2;
    a1[1] = a3;
    a1[2] = a4;
    a1[3] = a5;
    a1[4] = a6;
    return a1;
}
