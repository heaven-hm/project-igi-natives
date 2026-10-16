#include "gi_platform.h"
#include "004D65D0-Render_ClipMesh_10.h"
int32_t Render_ClipMesh_10()

{
    int32_t result;

    for (int32_t i = 0; i < 0x40; i += 1)
    {
        Render_DrawBoneMesh_11(i);
        result = Render_DrawRigidMesh_11(i);
    }

    return result;
}
