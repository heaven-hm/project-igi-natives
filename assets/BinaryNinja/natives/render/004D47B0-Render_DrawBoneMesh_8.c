#include "Render_DrawBoneMesh_8.h"
void* Render_DrawBoneMesh_8(void* a1)

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
