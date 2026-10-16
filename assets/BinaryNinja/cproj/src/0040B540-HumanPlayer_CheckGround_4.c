#include "gi_platform.h"
#include "0040B540-HumanPlayer_CheckGround_4.h"
int32_t HumanPlayer_CheckGround_4(void* a1, float a2)

{
    float srcS = a2;
    (*(int32_t*)(uintptr_t)(srcS + 0x33d)) = 1;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0.0f);
    Human_StateAnimation(srcS, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
    int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xc));

    if (valA1 == 6 || valA1 == 0xe || valA1 == 0x17)
        Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    int32_t result = HumanPlayer_ApplyRecoil_9(srcS, 5);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40b5c0;
    return result;
}
