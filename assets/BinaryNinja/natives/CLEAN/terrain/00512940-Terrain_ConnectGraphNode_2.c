// IGI native provenance: Terrain_ConnectGraphNode_2 - 0x00512940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00512940-Terrain_ConnectGraphNode_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_ConnectGraphNode_2.h"
int32_t Terrain_ConnectGraphNode_2(int32_t context)

{
    void* flagP = nullptr;
    int32_t context_val = 0;
    int32_t data_3;

    if (g_bcab38)
    {
        int32_t data_7 = g_b015a8;
        int32_t item_34_1 = 0x20;
        int32_t item_38_1 = 0x20;
        int32_t source_4 = *(g_b015a4 + (data_7 << 2)) * g_b015b0 + g_b015a0;
        *(g_b015b4 + source_4) = data_7;
        g_b015a8 += 1;
        int32_t dest_5 = context;
        int32_t item_3c_1 = *(dest_5 + 0x14) - 16.0f;
        int32_t item_40_1 = *(dest_5 + 0x10) - 16.0f;
        int32_t item_44_1 = source_4;
        context = 0xfffffff0;
        long double fpu_val_7_5 = 0.0f;
        long double fpu_val_6_1 = 0.0f;
        long double fpu_val_5_1 = 0.0f;
        bool flag_2_1;

        do
        {
            int32_t i = 0xfffffff0;
            int32_t i_1 = 0xfffffff0;

            do
            {
                if (*(flagP + 0xa7dc64) && *(source_4 + (context_val << 1)) == *(*(dest_5 + 0x24) + (context_val << 1)))
                {
                    fpu_val_7_5 = fpu_val_7_5 + 1.0f;
                    fpu_val_6_1 = fpu_val_6_1 + i_1;
                    fpu_val_5_1 = fpu_val_5_1 + context;
                }

                context_val += 1;
                flagP += 1;
                i += 1;
                i_1 = i;
            } while (i < 0x10);

            flag_2_1 = context + 1 < 0x10;
            context += 1;
        } while (flag_2_1);
        long double f1_1 = 0.0f;
        fpu_val_7_5 - f1_1;

        if (!(*(&((fpu_val_7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f1_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        {
            *(dest_5 + 0x10) = fpu_val_6_1 / fpu_val_7_5 + *(dest_5 + 0x10);
            *(dest_5 + 0x14) = fpu_val_5_1 / fpu_val_7_5 + *(dest_5 + 0x14);
        }

        long double fpu_val_7_7 = fpu_val_7_5 * 0.0009765625f;
        int32_t* entity_8 = *(dest_5 + 0xc);
        float item_c = fpu_val_7_7 * *(dest_5 + 0x18);
        float item_8_1 = fpu_val_7_7 * *(dest_5 + 0x1c);
        float item_4_1 = fpu_val_7_7 * *(dest_5 + 0x20);
        Terrain_SampleHeightmap_8(entity_8, dest_5 + 0x10, &item_c);
        int32_t* context_2 = g_b015b4;
        int32_t data_14 = g_b015a8 - 1;
        int32_t source_5 = *(context_2 + source_4);
        g_b015a8 = data_14;

        if (source_5 != data_14)
        {
            int32_t entity_9 = g_b015a4;
            int32_t data_17 = *(entity_9 + (data_14 << 2)) * g_b015b0 + g_b015a0;
            int32_t temp_5 = *(entity_9 + (source_5 << 2));
            int32_t context_3 = *(context_2 + data_17);
            *(entity_9 + (source_5 << 2)) = *(entity_9 + (context_3 << 2));
            *(g_b015a4 + (context_3 << 2)) = temp_5;
            *(g_b015b4 + data_17) = source_5;
            data_14 = g_b015a8;
            context_2 = g_b015b4;
        }

        data_3 = data_14 - 1;
        int32_t entity_12 = *(*(dest_5 + 0x24) + context_2);
        g_b015a8 = data_3;

        if (entity_12 != data_3)
        {
            int32_t temp_7 = g_b015a4;
            data_3 = *(temp_7 + (data_3 << 2)) * g_b015b0 + g_b015a0;
            int32_t source_7 = *(temp_7 + (entity_12 << 2));
            int32_t context_4 = *(context_2 + data_3);
            *(temp_7 + (entity_12 << 2)) = *(temp_7 + (context_4 << 2));
            *(g_b015a4 + (context_4 << 2)) = source_7;
            *(g_b015b4 + data_3) = entity_12;
        }
    }
    else
    {
        int32_t* source_val = g_b015b4;
        data_3 = g_b015a8 - 1;
        int32_t temp_val = *(*(context + 0x24) + source_val);
        g_b015a8 = data_3;

        if (temp_val != data_3)
        {
            int32_t entity_1 = g_b015a4;
            int32_t data_6 = *(entity_1 + (data_3 << 2)) * g_b015b0 + g_b015a0;
            int32_t dest_2 = *(entity_1 + (temp_val << 2));
            int32_t source_1 = *(source_val + data_6);
            *(entity_1 + (temp_val << 2)) = *(entity_1 + (source_1 << 2));
            *(g_b015a4 + (source_1 << 2)) = dest_2;
            *(g_b015b4 + data_6) = temp_val;
            return data_6;
        }
    }

    return data_3;
}
