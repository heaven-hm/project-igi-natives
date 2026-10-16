#include "gi_platform.h"
#include "004D3730-Render_BindTexture_6.h"
int32_t* Render_BindTexture_6(void* a1)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x80));

    if (result)
    {
        result = Render_ClipMesh_6(result);
        (*(int32_t*)(uintptr_t)(a1 + 0x80)) = result;
    }

    return result;
}
