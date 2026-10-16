#include "Render_DrawRigidMesh_4.h"
void Render_DrawRigidMesh_4(int32_t* a1, int32_t a2)

{
    for (int32_t* i = a1; i; i = *i)
        i[1](a2);
}
