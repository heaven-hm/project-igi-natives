// Original IGI.EXE function: Sector_OnEvent (VA 0x004DD310; static CFG gate PASS, CFG score 1.000).
#include "Sector_OnEvent.h"
float Sector_OnEvent(float context) {
    float result = context;
    int32_t temp_val = g_bcabd4;
    int32_t item_8 = g_bcabd0;
    g_a5e354 = result;
    int32_t item_10 = g_bcabd8;
    int32_t item_4 = temp_val;
    float result_1 = result;
    int32_t item_c = g_bcabdc;

    if (*(result + 0x6c))
    {
        if (result != g_a538d0)
            goto label_4dd381;

        result = g_a538cc;

        if (!result)
        {
            result_1 = g_a538d4;
        label_4dd381:
            g_a5e35c = Render_SkinBones_13(&g_a5e334);
            Render_ComputeNormals_12(&g_a5e330, &g_a5e310);
            int32_t entity_3 = g_bcabd4;
            int32_t temp_2 = g_bcabd8;
            float item_18 = g_bcabd0;
            int32_t data_2 = g_bcabdc;
            int32_t item_14_1 = entity_3;
            int32_t item_20 = temp_2;
            int32_t item_1c_1 = data_2;
            int32_t data_3 = DynObj_CreateMagicObject_16(result_1);

            if (data_3 != 0xffffffff)
                Render_ClipMesh_14(result_1, &item_18, &item_20, data_3);

            int32_t i = g_a5e340;
            int32_t source_val = 0;
            bool flag_1_1 = !i;

            if (i > 0)
            {
                do
                {
                    int32_t* data_7 = *(g_a5e33c + (source_val << 2)) * g_a5e348 + g_a5e338;
                    int32_t saved_ebx_2 = data_7[5];
                    Render_DrawRigidMesh_15(data_7[6], data_7, &data_7[2]);
                    i = g_a5e340;
                    source_val += 1;
                } while (source_val < i);

                flag_1_1 = !i;
            }

            if (!flag_1_1)
            {
                int32_t* source_1 = g_a5e34c;
                int32_t* entity_6 = g_a5e33c;
                int32_t context_1 = g_a5e338;
                int32_t dest_1 = g_a5e348;

                do
                {
                    i -= 1;
                    int32_t temp_7 = *(*entity_6 * dest_1 + source_1 + context_1);
                    g_a5e340 = i;

                    if (temp_7 != i)
                    {
                        int32_t dest_2 = entity_6[temp_7];
                        int32_t data_11 = entity_6[i] * dest_1 + context_1;
                        int32_t source_2 = *(source_1 + data_11);
                        entity_6[temp_7] = entity_6[source_2];
                        *(g_a5e33c + (source_2 << 2)) = dest_2;
                        *(g_a5e34c + data_11) = temp_7;
                        source_1 = g_a5e34c;
                        dest_1 = g_a5e348;
                        entity_6 = g_a5e33c;
                        context_1 = g_a5e338;
                        i = g_a5e340;
                    }
                } while (i);
            }

            return Display_CloseDevice_13(0xbcaba0, &item_8, &item_10);
        }
    }

    return result;
}
