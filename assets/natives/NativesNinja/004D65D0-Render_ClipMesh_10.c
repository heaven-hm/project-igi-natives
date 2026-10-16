#include "004D65D0-Render_ClipMesh_10.h"
/* 0x004d65d0 Render_ClipMesh_10 full linked: callers=2 callees=2 */
int32_t sub_4d65d0()

{
    int32_t result;

    for (int32_t i = 0; i < 0x40; i += 1)
    {
        sub_4d6640(i);
        result = sub_4d65f0(i);
    }

    return result;
}
