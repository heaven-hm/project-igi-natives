#include "gi_platform.h"
#include "004D0970-Render_SetupLighting.h"
void** Render_SetupLighting(void** a1, void* a2, int32_t a3)

{
    void** result = (*(int32_t*)(uintptr_t)(a2 + 0x6c));

    if (result)
    {
        result = *result;

        if (result)
        {
            int32_t* tmpD3 = *(*(result[3] + 0xc) + 0x88) + (a3 << 4);
            result = a1;
            *result = *tmpD3;
            result[1] = tmpD3[1];
            result[2] = tmpD3[2];
            *result = (*(int32_t*)(uintptr_t)(a2 + 0x98)) * *result;
            result[1] = (*(int32_t*)(uintptr_t)(a2 + 0x9c)) * result[1];
            result[2] = (*(int32_t*)(uintptr_t)(a2 + 0xa0)) * result[2];
        }
    }

    return result;
}
