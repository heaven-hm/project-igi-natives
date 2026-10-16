#include "gi_platform.h"
#include "004609A0-Human_Cleanup_10.h"
int32_t Human_Cleanup_10(void* a1, int32_t a2)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xcf6));

    if (!result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0xcf6)) = 0;
    return ((int(*)())(uintptr_t)(*(((DynObj_LinkDynamicCube_12() * 0x180 + Render_DrawRigidMesh_12()) << 2) + &g_a96ae0)))(a1, a2);
}
