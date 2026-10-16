#include "Render_DrawSplineMesh_10.h"
int32_t Render_DrawSplineMesh_10(void* a1, int32_t a2)

{
    return *(Render_DrawBoneMesh_10(a1, a2) + 4);
}
