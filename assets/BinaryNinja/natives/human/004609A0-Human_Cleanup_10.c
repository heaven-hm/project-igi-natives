#include "Human_Cleanup_10.h"
int32_t Human_Cleanup_10(void* a1, int32_t a2)

{
    char result = *(a1 + 0xcf6);

    if (!result)
        return result;

    *(a1 + 0xcf6) = 0;
    return (*(((DynObj_LinkDynamicCube_12() * 0x180 + Render_DrawRigidMesh_12()) << 2) + &g_a96ae0))(a1, a2);
}
