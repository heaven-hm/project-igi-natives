// Original IGI.EXE function: Render_DrawBoneMesh_11 (VA 0x004D6640; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawBoneMesh_11.h"
void Render_DrawBoneMesh_11(int32_t context)

{
    int32_t dest_1 = context * 0x28;
    int32_t item_4 = dest_1;

    if (*(dest_1 + 0xa53910))
    {
        Sys_OpenFileStream_2(dest_1 + 0xa538f8);
        *(dest_1 + 0xa53910) = 0;
    }

    int32_t temp_val = *(dest_1 + 0xa53914);
    int32_t item_8 = temp_val;

    if (temp_val <= 0)
        return;

    int32_t i_2 = *(context * 0xc + &g_a542f0);

    if (i_2)
    {
        int32_t entity_2 = 0;
        context = 0;

        if (temp_val > 0)
        {
            do
            {
                int32_t data_2 = *(dest_1 + &g_a538f4);
                void* source_1 = *(data_2 + (entity_2 << 2));

                if (source_1)
                {
                    *(data_2 + (entity_2 << 2)) = 0;
                    void* dest_2 = *(source_1 + 0x10);

                    if (dest_2)
                    {
                        Sys_ExecuteBytecode_2(*(dest_2 + 4));
                        *(dest_2 + 4) = 0;
                        Sys_ExecuteBytecode_2(dest_2);
                    }

                    void* dest_3 = *(source_1 + 8);
                    Sys_ExecuteBytecode_2(*(dest_3 + 4));
                    *(dest_3 + 4) = 0;
                    Sys_ExecuteBytecode_2(dest_3);
                    int32_t i_1 = i_2;
                    void* flagP1 = *(source_1 + 0xc);

                    if (i_1 > 0)
                    {
                        int32_t* source_2 = flagP1 + 8;
                        int32_t i;

                        do
                        {
                            Sys_ExecuteBytecode_2(source_2[-1]);
                            source_2[-1] = 0;
                            void* data_5 = *source_2;

                            if (data_5)
                            {
                                Sys_ExecuteBytecode_2(data_5);
                                *source_2 = 0;
                            }

                            void* data_6 = source_2[1];

                            if (data_6)
                            {
                                Sys_ExecuteBytecode_2(data_6);
                                source_2[1] = 0;
                            }

                            source_2 = &source_2[4];
                            i = i_1;
                            i_1 -= 1;
                        } while (i != 1);
                    }

                    Sys_ExecuteBytecode_2(flagP1);
                    temp_val = item_8;
                    dest_1 = item_4;
                    entity_2 = context;
                }

                entity_2 += 1;
                context = entity_2;
            } while (entity_2 < temp_val);
        }
    }

    Sys_ExecuteBytecode_2(*(dest_1 + &g_a538f0));
    *(dest_1 + &g_a538f0) = 0;
    Sys_ExecuteBytecode_2(*(dest_1 + &g_a538f4));
    *(dest_1 + &g_a538f0) = 0;
    *(dest_1 + 0xa53914) = 0;
    *(dest_1 + &g_a538f4) = 0;
}
