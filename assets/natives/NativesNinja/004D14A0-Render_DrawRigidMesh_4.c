#include "004D14A0-Render_DrawRigidMesh_4.h"
/* 0x004d14a0 Render_DrawRigidMesh_4 full linked: callers=1 callees=0 */
void sub_4d14a0(int32_t* a1, int32_t a2)

{
    for (int32_t* i = a1; i; i = *i)
        i[1](a2);
}
