// IGI native provenance: Human_Cleanup_9 - 0x00460950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460950-Human_Cleanup_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_Cleanup_9.h"
int32_t Human_Cleanup_9(void* context, int32_t param_2)

{
    char result = *(context + 0xcf6);

    if (result)
        return result;

    *(context + 0xcf6) = 1;
    return (*(((DynObj_UpdateDynTree_12() * 0x180 + Render_DrawRigidMesh_12()) << 2) + &g_a96ae0))(context, param_2);
}
