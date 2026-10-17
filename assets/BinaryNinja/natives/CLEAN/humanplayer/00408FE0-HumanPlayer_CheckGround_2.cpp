// IGI native provenance: HumanPlayer_CheckGround_2 - 0x00408FE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00408FE0-HumanPlayer_CheckGround_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_CheckGround_2.h"
int32_t HumanPlayer_CheckGround_2(void* context, float param_2)

{
    float dest_val = param_2;
    *(dest_val + 0x33d) = 0;
    param_2 = Render_TransformVertices_10(dest_val + 0x68, 0.0f);
    int32_t item_14_1;
    float item_10;

    if (*(context + 0xc) != 0x1c)
    {
        item_10 = 0.200000003f;
        item_14_1 = *(context + 0x10);
    }
    else
    {
        item_10 = 0.0f;
        item_14_1 = *(context + 0x10);
    }

    Human_StateAnimation(dest_val, item_14_1, item_10);
    int32_t data_3 = *(context + 0xc) - 5;

    if (data_3 <= 0x12)
    {
        int32_t temp_1 = 0;
        temp_1 = lookup_table_40907c[data_3];

        switch (temp_1)
        {
            case 0:
            {
                Render_BindTexture_10(dest_val + 0x68, 0, Render_DrawLightmapMesh_10(dest_val + 0x68, 0) * param_2);
                break;
            }
        }
    }

    int32_t result = HumanPlayer_ApplyRecoil_9(dest_val, 3);
    *(context + 0x14) = HumanPlayer_UpdateStamina_2;
    return result;
}
