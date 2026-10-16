#include "004D5700-Render_DrawRigidMesh_9.h"
/* 0x004d5700 Render_DrawRigidMesh_9 full linked: callers=1 callees=4 */
int32_t* sub_4d5700(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* result = sub_4d4710();
    int32_t* eax = sub_4d5750();
    sub_4d5790(eax, a1, a2, a3);
    sub_4d4750(result, 0, sub_4d5820, 0, sub_4d57c0, eax);
    return result;
}
