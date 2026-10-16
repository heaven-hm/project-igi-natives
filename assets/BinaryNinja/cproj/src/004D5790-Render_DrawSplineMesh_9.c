#include "gi_platform.h"
#include "004D5790-Render_DrawSplineMesh_9.h"
int32_t* Render_DrawSplineMesh_9(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    *a1 = a2;
    a1[1] = a3;
    memcpy(&a1[2], a4, 0x14);
    return a1;
}
