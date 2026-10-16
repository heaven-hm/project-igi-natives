#include "004D47B0-Render_DrawBoneMesh_8.h"
/* 0x004d47b0 Render_DrawBoneMesh_8 full linked: callers=1 callees=0 */
void* sub_4d47b0(void* a1)

{
    void* result = *(a1 + 0x74);

    if (result)
    {
        while (!(*(result + 4) & 0x20000))
        {
            result = *(result + 0x74);

            if (!result)
                break;
        }
    }

    return result;
}
