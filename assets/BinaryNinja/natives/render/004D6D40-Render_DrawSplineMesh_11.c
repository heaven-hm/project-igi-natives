// Original IGI.EXE function: Render_DrawSplineMesh_11 (VA 0x004D6D40; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawSplineMesh_11.h"
int32_t* Render_DrawSplineMesh_11(int32_t* context)

{
    int32_t* result = context;
    int32_t dest_val = *(result * 0xc + &g_a542f0);
    int32_t item_54 = dest_val;

    if (dest_val > 0)
    {
        int32_t data_1 = result * 0x28;
        int32_t entity_1 = *(data_1 + 0xa53914);
        result = *(data_1 + &g_a538f4);

        if (entity_1 > 0)
        {
            int32_t* result_1 = result;
            int32_t item_60_1 = entity_1;
            bool flag_1_1;

            do
            {
                void* data_2 = *result;

                if (data_2 && dest_val > 0)
                {
                    int32_t* context_2 = *(data_2 + 0xc) + 4;
                    int32_t item_68_1 = dest_val;
                    bool flag_3_1;

                    do
                    {
                        int32_t source_1 = context_2[-1];
                        int32_t item_6c_1 = source_1;

                        if (source_1 > 1 && !context_2[1])
                        {
                            int32_t flagP1 = source_1 << 3;
                            context_2[1] = Mem_Alloc(flagP1, 4);

                            if (g_a54678)
                                context_2[2] = Mem_Alloc(flagP1, 4);

                            int32_t flagP2 = 0;

                            if (source_1 > 0)
                            {
                                float* dest_1 = nullptr;

                                do
                                {
                                    int32_t f1_1 = (flagP2 + 1) % source_1;

                                    if (f1_1 || *(data_2 + 7) & 0x80)
                                    {
                                        int32_t data_14 = *context_2;
                                        context = nullptr;
                                        float item_3c = *(dest_1 + data_14);
                                        float item_38_1 = *(dest_1 + data_14 + 4);
                                        float item_34_1 = *(dest_1 + data_14 + 8);
                                        int32_t item_2c_1 = 0;
                                        float item_30_1 = *(dest_1 + data_14 + 0xc);
                                        int32_t temp_5 = context_2[1];
                                        int32_t source_3 = f1_1 * 0x34;
                                        float item_50 = *(source_3 + data_14);
                                        float item_4c_1 = *(source_3 + data_14 + 4);
                                        float item_48_1 = *(source_3 + data_14 + 8);
                                        float* data_15 = temp_5 + (flagP2 << 3);
                                        float item_44_1 = *(source_3 + data_14 + 0xc);
                                        int32_t item_40_1 = 0;
                                        Sys_CloseFileStream_13(&context, data_15, &data_15[1], &item_3c, &item_50);

                                        if (context)
                                        {
                                            int32_t data_17 = context_2[1];
                                            *(data_17 + (flagP2 << 3)) =
                                                *(data_17 + (flagP2 << 3)) + 6.28318548f;
                                        }

                                        if (g_a54678)
                                        {
                                            int32_t data_20 = *context_2;
                                            float item_14 = *(dest_1 + data_20 + 0x14);
                                            float item_10_1 = *(dest_1 + data_20 + 0x18);
                                            float item_c_1 = *(dest_1 + data_20 + 0x1c);
                                            int32_t item_4_1 = 0;
                                            float item_8_1 = *(dest_1 + data_20 + 0x20);
                                            float item_28 = *(source_3 + data_20 + 0x24);
                                            float item_24_1 = *(source_3 + data_20 + 0x28);
                                            float item_20_1 = *(source_3 + data_20 + 0x2c);
                                            int32_t item_18_1 = 0;
                                            float item_1c_1 = *(source_3 + data_20 + 0x30);
                                            float* data_21 = context_2[2] + (flagP2 << 3);
                                            Sys_CloseFileStream_13(&context, data_21, &data_21[1], &item_14, &item_28);

                                            if (context)
                                            {
                                                int32_t entity_5 = context_2[2];
                                                *(entity_5 + (flagP2 << 3)) =
                                                    *(entity_5 + (flagP2 << 3)) + 6.28318548f;
                                            }
                                        }

                                        source_1 = item_6c_1;
                                    }
                                    else
                                    {
                                        *(context_2[1] + (flagP2 << 3)) = 0;
                                        *(context_2[1] + (flagP2 << 3) + 4) = 0;

                                        if (g_a54678)
                                        {
                                            *(context_2[2] + (flagP2 << 3)) = 0;
                                            *(context_2[2] + (flagP2 << 3) + 4) = 0;
                                        }
                                    }

                                    flagP2 += 1;
                                    dest_1 = &dest_1[0xd];
                                } while (flagP2 < source_1);

                                dest_val = item_54;
                            }
                        }

                        context_2 = &context_2[4];
                        flag_3_1 = item_68_1 != 1;
                        item_68_1 -= 1;
                    } while (flag_3_1);
                }

                result = &result_1[1];
                flag_1_1 = item_60_1 != 1;
                result_1 = result;
                item_60_1 -= 1;
            } while (flag_1_1);
        }
    }

    return result;
}
