// IGI native provenance: TypeWriterBox_LoadParameters - 0x0041A6D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041A6D0-TypeWriterBox_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TypeWriterBox_LoadParameters.h"
int32_t TypeWriterBox_LoadParameters(void* context)

{
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(context + 0x44)) - 8) * 0.125f;
    long double f2 = 0.0f;
    fpu_val_7_1 - f2;
    float item_128;

    item_128 = *(&((fpu_val_7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.0f : fpu_val_7_1;

    void* context_val = *(context + 0x64);
    int32_t entity_val = *(context + 0x5c);
    void* item_114 = context_val;

    if ((context_val - 1) % entity_val != *(context + 0x60))
    {
        int32_t* item_120_1 = context_val - 1;
        int32_t* data_34;

        do
        {
            int32_t entity_1 = context_val % entity_val * 9;
            int32_t temp_4 = *(context + 0x58);
            int32_t* flagP1 = temp_4 + (entity_1 << 2);
            int32_t* source_val = *(context + (*(temp_4 + (entity_1 << 2) + 0xc) << 2) + 0x78);

            if (source_val)
            {
                int32_t context_1 = *flagP1;
                int32_t data_12 = flagP1[2] * 0xc;
                float item_12c_1 = *(data_12 + 0x53b778);
                float item_11c_1 = *(data_12 + 0x53b780);
                float item_124_1 = *(data_12 + 0x53b77c);
                float item_118_1 = item_128;

                if (flagP1[1] != 0xffffffff)
                {
                    if (*(context + 0x74))
                    {
                        int32_t data_16 = *(context + 0x6c);

                        if (data_16 < 0x10)
                            item_118_1 = data_16 * item_128 * 0.0625f;

                        if (data_16 < 0x20)
                        {
                            int32_t temp_6 = 0;
                            temp_6 = data_16 - 0x10 < 0;
                            long double fpu_val_7_7 = ((temp_6 - 1) & (data_16 - 0x10)) * 0.0625f;
                            item_12c_1 = (item_12c_1 - 128.0f) * fpu_val_7_7 + 128.0f;
                            item_124_1 = (item_124_1 - 128.0f) * fpu_val_7_7 + 128.0f;
                            item_11c_1 = (item_11c_1 - 128.0f) * fpu_val_7_7 + 128.0f;
                        }
                    }

                    Sys_FreeMemory_18(source_val, flagP1[8]);
                    int32_t item_130_3;

                    if (!context_1)
                    {
                        int32_t data_19 = Sys_CheckHeap_21(source_val);
                        item_130_3 = (*(context + 0x28) - data_19) >> 1;
                    }
                    else if (context_1 >= 0)
                        item_130_3 = context_1 + 8;
                    else
                    {
                        int32_t data_20 = Sys_CheckHeap_21(source_val);
                        item_130_3 = context_1 + *(context + 0x28) - data_20 - 8;
                    }

                    int32_t entity_8 = source_val[9] | 0x80000;
                    source_val[1] = *(context + 0x20) + item_130_3;
                    long double fpu_val_7_12 = *(context + 0x24) + flagP1[1];
                    source_val[9] = entity_8;
                    source_val[4] = item_118_1;
                    source_val[5] = item_12c_1;
                    source_val[6] = item_124_1;
                    source_val[7] = item_11c_1;
                    source_val[2] = fpu_val_7_12;

                    if (item_114 == *(context + 0x60))
                    {
                        char item_100[0x100];
                        Camera_ApplyLineFilter_5(&item_100, flagP1[8], *(context + 0x68));
                        item_100[*(context + 0x68)] = 0;
                        Sys_FreeMemory_18(source_val, &item_100);
                        Sys_CloseFileStream_18(source_val);

                        if (*(context + 0x70) & 8)
                        {
                            int32_t data_28 = Sys_CheckHeap_21(source_val) + source_val[1];
                            int32_t item_110_1 = source_val[2];
                            int32_t data_30 = Sys_AllocateMemory_22(source_val);
                            float item_15c_1 = item_124_1;
                            float item_160_1 = item_124_1;
                            float item_164_1 = item_124_1;
                            float item_168_1 = item_124_1;
                            Sys_ExecuteBytecode_14(data_28, item_110_1, (data_30 * 3) >> 2, data_30, item_12c_1,
                                item_124_1, item_11c_1, item_118_1, 0x80000, 0);
                        }
                    }
                    else
                        Sys_CloseFileStream_18(source_val);
                }
            }

            entity_val = *(context + 0x5c);
            context_val = item_114 + 1;
            data_34 = item_120_1 + 1;
            item_114 = context_val;
            item_120_1 = data_34;
        } while (data_34 % entity_val != *(context + 0x60));
    }

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(context);
    return Menu_DrawWidget_14(context, 0.5f, item_128, 0);
}
