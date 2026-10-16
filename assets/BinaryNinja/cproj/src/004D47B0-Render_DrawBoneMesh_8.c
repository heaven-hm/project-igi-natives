#include "gi_platform.h"
#include "004D47B0-Render_DrawBoneMesh_8.h"
void* Render_DrawBoneMesh_8(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x74));

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
