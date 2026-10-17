// Original IGI.EXE function: Human_Cleanup_9 (VA 0x00460950; static CFG gate PASS, CFG score 1.000).
#include "Human_Cleanup_9.h"
int32_t Human_Cleanup_9(void* context, int32_t param_2)

{
    char result = *(context + 0xcf6);

    if (result)
        return result;

    *(context + 0xcf6) = 1;
    return (*(((DynObj_UpdateDynTree_12() * 0x180 + Render_DrawRigidMesh_12()) << 2) + &g_a96ae0))(context, param_2);
}
