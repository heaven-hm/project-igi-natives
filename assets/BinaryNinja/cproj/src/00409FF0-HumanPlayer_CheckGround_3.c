#include "gi_platform.h"
#include "00409FF0-HumanPlayer_CheckGround_3.h"
int32_t HumanPlayer_CheckGround_3(void* a1, float a2)

{
    float srcS = a2;
    (*(int32_t*)(uintptr_t)(srcS + 0x33d)) = 0;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0.0f);
    Human_StateAnimation(srcS, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
    int32_t valA2 = (*(int32_t*)(uintptr_t)(a1 + 0xc)) - 4;

    if (valA2 <= 0x13)
    {
        int32_t objC1 = 0;
        objC1 = lookup_table_40a078[valA2];

        switch (objC1)
        {
            case 0:
            {
                Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);
                break;
            }
        }
    }

    int32_t result = HumanPlayer_ApplyRecoil_9(srcS, 2);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40a090;
    return result;
}
