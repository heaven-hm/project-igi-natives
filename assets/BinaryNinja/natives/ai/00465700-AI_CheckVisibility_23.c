#include "AI_CheckVisibility_23.h"
int32_t AI_CheckVisibility_23(void* a1)

{
    char result = *(a1 + 0xda);

    if (result)
    {
        result = Render_DrawBoneMesh_7(a1 + 0x78, a1 + 0x68);
        *(a1 + 0xda) = 0;
    }

    return result;
}
