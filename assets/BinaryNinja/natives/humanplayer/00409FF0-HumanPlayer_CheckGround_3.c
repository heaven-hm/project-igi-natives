// Original IGI.EXE function: HumanPlayer_CheckGround_3 (VA 0x00409FF0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckGround_3.h"
int32_t HumanPlayer_CheckGround_3(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.200000003f);
    int32_t data_2 = *(context + 0xc) - 4;

    if (data_2 <= 0x13)
    {
        int32_t entity_1 = 0;
        entity_1 = lookup_table_40a078[data_2];

        switch (entity_1)
        {
            case 0:
            {
                Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);
                break;
            }
        }
    }

    int32_t result = HumanPlayer_ApplyRecoil_9(source_val, 2);
    *(context + 0x14) = sub_40a090;
    return result;
}
