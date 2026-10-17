// IGI native provenance: Render_ClipMesh_3 - 0x004D12C0 - CFG score 90.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D12C0-Render_ClipMesh_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ClipMesh_3.h"
int32_t Render_ClipMesh_3(int32_t context)

{
    int32_t dest_val = 1;
    Terrain_RenderWaterSurface(context);
    DynObj_ParseConfigFile_11(context, 0x11, 0, &g_bcab08, 0x20000000);
    char* source_val = g_b16c98;
    int32_t item_8;

    if (g_a538d0)
    {
        int32_t i = 0;

        if (g_b12c20 > 0)
        {
            do
            {
                void* data_5 = *(source_val + 4);
                long double fp0_1;
                long double fpu_val_6_2;

                if (*(data_5 + 0x1c) != g_c30064)
                {
                    fp0_1 = Sys_PushStack_11(0xb16c80, data_5 + 0x20);
                    fpu_val_6_2 = g_b04264 * g_b04264;
                    fpu_val_6_2 - fp0_1;
                }

                if (*(data_5 + 0x1c) != g_c30064 && !(*(&((fpu_val_6_2 < fp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fp0_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fp0_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    if (!dest_val)
                    {
                        long double fpu_val_7_3 = g_bcabc0 + g_bcabb8;
                        int32_t data_9 = g_bcabbc;
                        item_8 = g_bcabb8;
                        float item_10 = fpu_val_7_3;
                        int32_t item_4_1 = data_9;
                        float item_c_1 = g_bcabc4 + g_bcabbc;
                        Display_CloseDevice_13(0xbcaba0, &item_8, &item_10);
                    }

                    void* data_10 = *(source_val + 4);
                    int32_t entity_6 = 0;
                    entity_6 = *source_val;
                    int32_t temp_4 = 0;
                    temp_4 = *(data_10 + 0x1c);
                    (*(((entity_6 * 0x180 + temp_4) << 2) + &g_a96ae0))(data_10, *(data_10 + 0x48));
                    dest_val = 1;
                }
                else if (g_54843c)
                {
                    if (dest_val)
                        Display_CloseDevice_13(0xbcaba0, &g_b12b78, &g_b16c60);

                    void* data_12 = *(source_val + 4);
                    int32_t entity_10 = 0;
                    entity_10 = *source_val;
                    int32_t temp_6 = 0;
                    temp_6 = *(data_12 + 0x1c);
                    (*(((entity_10 * 0x180 + temp_6) << 2) + &g_a96ae0))(data_12, *(data_12 + 0x48));
                    dest_val = 0;
                }

                source_val = &source_val[8];
                i += 1;
            } while (i < g_b12c20);
        }
    }
    else
    {
        int32_t i_1 = 0;

        if (g_b12c20 > 0)
        {
            do
            {
                void* data_2 = *(source_val + 4);
                int32_t entity_1 = 0;
                entity_1 = *source_val;
                int32_t temp_1 = 0;
                temp_1 = *(data_2 + 0x1c);
                (*(((entity_1 * 0x180 + temp_1) << 2) + &g_a96ae0))(data_2, *(data_2 + 0x48));
                source_val = &source_val[8];
                i_1 += 1;
            } while (i_1 < g_b12c20);
        }
    }

    DynObj_ParseConfigFile_11(context, 0x12, 0, &g_bcab08, 0x20000000);
    int32_t entity_14 = g_b12c20;
    item_8 = g_b16c98;
    int32_t item_4_2 = entity_14;
    return Render_DrawRigidMesh_4(g_a538e4, &item_8);
}
