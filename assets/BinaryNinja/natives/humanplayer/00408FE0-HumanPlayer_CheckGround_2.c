#include "HumanPlayer_CheckGround_2.h"
int32_t HumanPlayer_CheckGround_2(void* a1, float a2)

{
    float dstD = a2;
    *(dstD + 0x33d) = 0;
    a2 = Render_TransformVertices_10(dstD + 0x68, 0f);
    int32_t v_14_1;
    float v_10;

    if (*(a1 + 0xc) != 0x1c)
    {
        v_10 = 0.200000003f;
        v_14_1 = *(a1 + 0x10);
    }
    else
    {
        v_10 = 0f;
        v_14_1 = *(a1 + 0x10);
    }

    Human_StateAnimation(dstD, v_14_1, v_10);
    int32_t valA3 = *(a1 + 0xc) - 5;

    if (valA3 <= 0x12)
    {
        int32_t tmpD1 = 0;
        tmpD1 = lookup_table_40907c[valA3];

        switch (tmpD1)
        {
            case 0:
            {
                Render_BindTexture_10(dstD + 0x68, 0, Render_DrawLightmapMesh_10(dstD + 0x68, 0) * a2);
                break;
            }
        }
    }

    int32_t result = HumanPlayer_ApplyRecoil_9(dstD, 3);
    *(a1 + 0x14) = HumanPlayer_UpdateStamina_2;
    return result;
}
