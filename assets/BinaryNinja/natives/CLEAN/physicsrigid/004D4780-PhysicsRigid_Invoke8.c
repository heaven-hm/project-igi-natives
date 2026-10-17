// IGI native provenance: PhysicsRigid_Invoke8 - 0x004D4780 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D4780-PhysicsRigid_Invoke8.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_Invoke8.h"

float PhysicsRigid_Invoke8(int32_t arg1, float arg2, void* arg3) __location("result_val")

{
    int32_t var_10 = arg1;
    long double x87_r6;
    return Render_DrawLightmapMesh_7(x87_r6, arg2, *(Render_DrawBoneMesh_8(arg3) + 0x80));
}
