// IGI native provenance: Render_IllegalAllocInfo - 0x004D2A20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D2A20-Render_IllegalAllocInfo.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_IllegalAllocInfo.h"
int32_t Render_IllegalAllocInfo()

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t i_1 = 0;
    int32_t* context_val = &g_b04358;
    int32_t i;

    do
    {
        int32_t* data_1 = *context_val;

        if (data_1)
        {
            int32_t entity_1 = context_val[-1];
            int32_t data_6;
            int32_t temp_1;

            if (!entity_1)
            {
                int32_t* source_1 = g_b12b74;
                temp_1 = *(data_1 + source_1);
                int32_t data_3 = g_b12b68 - 1;
                g_b12b68 = data_3;

                if (temp_1 != data_3)
                {
                    int32_t entity_2 = g_b12b64;
                    data_6 = *(entity_2 + (data_3 << 2)) * g_b12b70 + g_b12b60;
                    int32_t dest_2 = *(entity_2 + (temp_1 << 2));
                    int32_t source_2 = *(source_1 + data_6);
                    *(entity_2 + (temp_1 << 2)) = *(entity_2 + (source_2 << 2));
                    *(g_b12b64 + (source_2 << 2)) = dest_2;
                    *(g_b12b74 + data_6) = temp_1;
                }
            }
            else if (entity_1 == 1)
            {
                int32_t* source_3 = g_b12c54;
                temp_1 = *(data_1 + source_3);
                int32_t data_8 = g_b12c48 - 1;
                g_b12c48 = data_8;

                if (temp_1 != data_8)
                {
                    int32_t entity_5 = g_b12c44;
                    data_6 = *(entity_5 + (data_8 << 2)) * g_b12c50 + g_b12c40;
                    int32_t dest_4 = *(entity_5 + (temp_1 << 2));
                    int32_t source_4 = *(source_3 + data_6);
                    *(entity_5 + (temp_1 << 2)) = *(entity_5 + (source_4 << 2));
                    *(g_b12c44 + (source_4 << 2)) = dest_4;
                    *(g_b12c54 + data_6) = temp_1;
                }
            }
            else if (entity_1 != 2)
            {
                Error_Show("Illegal alloc info");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t* source_5 = g_b16cd4;
                temp_1 = *(data_1 + source_5);
                int32_t data_12 = g_b16cc8 - 1;
                g_b16cc8 = data_12;

                if (temp_1 != data_12)
                {
                    int32_t entity_7 = g_b16cc4;
                    data_6 = *(entity_7 + (data_12 << 2)) * g_b16cd0 + g_b16cc0;
                    int32_t dest_6 = *(entity_7 + (temp_1 << 2));
                    int32_t source_6 = *(source_5 + data_6);
                    *(entity_7 + (temp_1 << 2)) = *(entity_7 + (source_6 << 2));
                    *(g_b16cc4 + (source_6 << 2)) = dest_6;
                    *(g_b16cd4 + data_6) = temp_1;
                }
            }
            *context_val = 0;
            *context_val = 0;
        }

        context_val[-2] = 0xffffffff;
        i = i_1 + 1;
        context_val = &context_val[7];
        i_1 = i;
    } while (i < 0x800);

    return i;
}
