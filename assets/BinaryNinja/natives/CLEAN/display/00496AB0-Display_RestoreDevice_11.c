// IGI native provenance: Display_RestoreDevice_11 - 0x00496AB0 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 00496AB0-Display_RestoreDevice_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_RestoreDevice_11.h"
int32_t Display_RestoreDevice_11(int32_t context, int32_t param_2)

{
    int32_t source_val = context;
    int32_t data_val = 0;
    int32_t dest_val = *(source_val + 0x3c);
    void* entity_val = *(source_val + 0xc);
    data_val = dest_val == 1;
    int32_t item_c = data_val;
    context = param_2;
    int32_t data_4;
    int32_t temp_2;
    temp_2 = HIGHD(0x10624dd3 * *(entity_val + 0x1c) * 0xfa0);
    data_4 = LOWD(0x10624dd3 * *(entity_val + 0x1c) * 0xfa0);
    int32_t temp_3 = temp_2 >> 6;
    int32_t temp_4 = temp_3 + (temp_3 >> 0x1f);
    int32_t data_9;
    int32_t temp_5;
    temp_5 = HIGHD(*(entity_val + 0x18) * *(entity_val + 0x16));
    data_9 = LOWD(*(entity_val + 0x18) * *(entity_val + 0x16));
    int32_t data_10 = data_9 + (temp_5 & 7);
    int32_t context_1 = data_10 >> 3;

    if (dest_val != 2)
    {
        int32_t* data_11 = *(source_val + 0x10);
        int32_t item_8;
        int32_t item_4;
        int32_t data_12 = (*(*data_11 + 0x2c))(data_11, 0, 0, &item_8, &item_4, 0, 0, 2);

        if (data_12)
        {
            *(source_val + 0x3c) = 0xffffffff;
            return data_12;
        }

        if (param_2)
        {
            bool flag_2_1;

            do
            {
                int32_t flagP1;

                if (context >= 0)
                {
                    flagP1 = temp_4 - *(source_val + 0x28);

                    if (flagP1 >= context)
                        flagP1 = context;
                }
                else
                    flagP1 = 0;

                char* dest_3 = *(source_val + 0x28) * context_1 + item_8;

                if (!item_c)
                {
                    if (flagP1 >= 0)
                    {
                        void* entity_8 = *(source_val + 0xc);
                        int32_t data_17 = *(entity_8 + 0x20) - *(source_val + 0x24);

                        if (data_17 < flagP1)
                            flagP1 = data_17;

                        if (flagP1)
                        {
                            if (*(entity_8 + 0x14) != 2)
                                Display_CreateSurface_11(dest_3, source_val, flagP1, context_1);
                            else
                                Display_CheckCapabilities_11(dest_3, source_val, flagP1);
                        }
                    }
                    else
                        flagP1 = 0;

                    *(source_val + 0x24) += flagP1;
                }
                else
                {
                    int32_t entity_4 = flagP1 * context_1;
                    memset(memset(dest_3, 0, entity_4 & 0xfffffffc), 0, entity_4 & 3);
                }

                int32_t temp_12 = *(source_val + 0x28) + flagP1;
                *(source_val + 0x28) = temp_12;

                if (temp_12 >= temp_4)
                    *(source_val + 0x28) = 0;

                if (*(source_val + 0x24) >= *(*(source_val + 0xc) + 0x20))
                {
                    if (*(source_val + 8) & 0x10)
                    {
                        Sys_ExecuteBytecode_4(*(source_val + 0x18), 0x14, 0);
                        Sys_ResolveSymbol_4(*(source_val + 0x18));
                        void* entity_15 = *(source_val + 0xc);
                        *(source_val + 0x24) = 0;
                        Display_ClearSurfaces_10(source_val + 0x40, *(entity_15 + 0x18));
                    }
                    else if (!item_c)
                    {
                        item_c = 1;
                        int32_t data_23;
                        int32_t temp_14;
                        temp_14 = HIGHD(0x10624dd3 * g_limit_b * 0xfa0);
                        data_23 = LOWD(0x10624dd3 * g_limit_b * 0xfa0);
                        int32_t temp_15 = temp_14 >> 6;
                        int32_t data_26 = temp_15 + (temp_15 >> 0x1f) + g_c28c5c;
                        int32_t entity_14 = *(source_val + 0x20);
                        *(source_val + 0x2c) = data_26;

                        if (entity_14 - data_26 >= 0)
                            *(source_val + 0x30) = entity_14 - data_26;
                        else
                            *(source_val + 0x30) = data_26 - entity_14;
                    }
                }

                flag_2_1 = context != flagP1;
                context -= flagP1;
            } while (flag_2_1);
        }

        int32_t* data_33 = *(source_val + 0x10);
        int32_t data_34 = (*(*data_33 + 0x4c))(data_33, item_8, item_4, 0, 0);

        if (data_34)
        {
            *(source_val + 0x3c) = 0xffffffff;
            return data_34;
        }

        data_10 = 0;
        data_10 = item_c;
        *(source_val + 0x3c) = data_10;
    }

    return data_10;
}
