#include "gi_platform.h"
#include "00409410-HumanPlayer_ApplyPhysics_2.h"
int32_t HumanPlayer_ApplyPhysics_2(void* a1, float a2)

{
    float srcS = a2;
    (*(int32_t*)(uintptr_t)(srcS + 0x33d)) = 0;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0.0f);
    Human_StateAnimation(srcS, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
    int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xc));

    if (valA1 == 4 || valA1 == 0xe || valA1 == 0x19)
        Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    int32_t result = HumanPlayer_ApplyRecoil_9(srcS, 3);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_PlayFootstep_2;
    return result;
}
