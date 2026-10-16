#include "gi_platform.h"
#include "004D09E0-Render_BindTexture.h"
void** Render_BindTexture(void** a1, void* a2, int32_t a3, char* a4)

{
    void** result = DynObj_Missing(a4);

    if (result)
    {
        result = *result;

        if (result)
        {
            int32_t* objC3 = *(*(result[3] + 0xc) + 0x88) + (a3 << 4);
            result = a1;
            *result = *objC3;
            result[1] = objC3[1];
            result[2] = objC3[2];
            *result = (*(int32_t*)(uintptr_t)(a2 + 0x98)) * *result;
            result[1] = (*(int32_t*)(uintptr_t)(a2 + 0x9c)) * result[1];
            result[2] = (*(int32_t*)(uintptr_t)(a2 + 0xa0)) * result[2];
        }
    }

    return result;
}
