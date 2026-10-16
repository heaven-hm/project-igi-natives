#include "004DEE90-Render_SetupLighting_15.h"
/* 0x004dee90 Render_SetupLighting_15 full linked: callers=1 callees=1 */
void* sub_4dee90(void* a1, char* a2)

{
    void* result = sub_4cec10(a2);

    if (*(a1 + 0x6c) != result)
    {
        *(a1 + 0x6c) = result;
        *(a1 + 0x18c) = 0;
    }

    return result;
}
