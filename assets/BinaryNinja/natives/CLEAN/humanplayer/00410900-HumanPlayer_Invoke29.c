// IGI native provenance: HumanPlayer_Invoke29 - 0x00410900 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00410900-HumanPlayer_Invoke29.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke29.h"

int32_t HumanPlayer_Invoke29(void* arg1, int32_t arg2)

{
    int32_t result = AI_CombatTarget_29();

    if (result)
        result = AI_UpdatePatrol_29();

    result = *(arg1 + 0xcf6);

    if (!result)
        return result;

    *(arg1 + 0xcf6) = 0;
    return (
        *(((DynObj_LinkDynamicCube_12() * 0x180 + Render_DrawRigidMesh_12()) << 2) + &g_a96ae0))(arg1,
        arg2);
}
