// IGI native provenance: Display_MeshFormatNotSupport - 0x0049B4B0 - CFG score 80.9% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0049B4B0-Display_MeshFormatNotSupport.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_MeshFormatNotSupport.h"
void* Display_MeshFormatNotSupport(void* context)

{
    int32_t* context_val = context * 0xfa8 + &g_7205c0;
    int32_t temp_1 = *((context << 2) + &g_543cb8);
    int32_t* item_18 = context_val;
    int32_t entity_4;

    if (!g_bcad74)
        entity_4 = *((context << 2) + &g_543cc4);
    else
        entity_4 = *((context << 2) + &g_543cd0);

    int32_t data_1 = g_72350c;
    g_72350c = data_1 + 1;
    int32_t* data_3 = context_val[0x3e8];
    int32_t* data_4 = g_5ca110;
    void* source_1 = data_1 * 0x24 + &g_7ac0a0;
    int32_t item_10 = 0x10;
    context = source_1;
    (*(*data_4 + 0x14))(data_4, &item_10, source_1, 0);
    int32_t flagP = 0;
    void* i_1 = nullptr;
    *(source_1 + 4) = item_10;
    *(source_1 + 8) = entity_4;
    *(source_1 + 0xc) = temp_1;
    *(source_1 + 0x1c) = 0;
    *(source_1 + 0x10) = data_3;
    void* i = source_1 + 0x1c;
    *(source_1 + 0x18) = i;
    *(source_1 + 0x20) = source_1 + 0x18;

    if (context_val[0x3e9] > 0)
    {
        int32_t* item_24_1 = context_val;

        do
        {
            void* data_7 = *item_24_1;
            int32_t entity_9 = *(data_7 + 0x20);
            int32_t data_16;

            if (!entity_9)
            {
                void* context_2 = *(data_7 + 0x24);
                int16_t temp_7 = *(context_2 + 0xc);
                int32_t data_17 = *(context_2 + 0x10);
                *(context_2 + 0x24) = flagP;
                *(context_2 + 0x26) = temp_7;
                *(context_2 + 0x28) = source_1;
                *(context_2 + 0x20) = 1;
                *(context_2 + 0x2c) = data_17;
                int32_t item_1c = 0;
                int32_t* data_18 = **(context_2 + 0x28);
                (*(*data_18 + 0xc))(data_18, 0x20, &item_1c, 0);
                int32_t entity_24 = *(context_2 + 0xc) << 5;
                int32_t source_5;
                int32_t dest_6;
                dest_6 = memcpy((flagP << 5) + item_1c, *(context_2 + 0x10), entity_24 & 0xfffffffc);
                memcpy(dest_6, source_5, entity_24 & 3);
                int32_t* data_20 = **(context_2 + 0x28);
                (*(*data_20 + 0x10))(data_20);
                *(context + 0x14) = 0x20;
                Camera_SetFieldOfView_33(context + 0x18, context_2 + 0x18);
                data_16 = *(context_2 + 0xc);
            label_49b6a7:
                source_1 = context;
                context_val = item_18;
                flagP += data_16;
            }
            else if (entity_9 != 1)
            {
                if (entity_9 != 3)
                {
                    Error_Show("Mesh format not supported");

                    while (true)
                        /* nop */
                }
                else
                {
                    void* context_1 = *(data_7 + 0x24);
                    int16_t entity_13 = *(context_1 + 0x10);
                    int32_t temp_4 = *(context_1 + 0x14);
                    *(context_1 + 0x2c) = flagP;
                    *(context_1 + 0x2e) = entity_13;
                    *(context_1 + 0x30) = source_1;
                    *(context_1 + 0x28) = 1;
                    *(context_1 + 0x34) = temp_4;
                    int32_t item_20 = 0;
                    int32_t* data_9 = **(context_1 + 0x30);
                    (*(*data_9 + 0xc))(data_9, 0x20, &item_20, 0);
                    int32_t entity_16 = *(context_1 + 0x10) * 0x28;
                    int32_t source_3;
                    int32_t dest_2;
                    dest_2 =
                        memcpy(item_20 + flagP * 0x28, *(context_1 + 0x14), entity_16 & 0xfffffffc);
                    memcpy(dest_2, source_3, entity_16 & 3);
                    int32_t* data_13 = **(context_1 + 0x30);
                    (*(*data_13 + 0x10))(data_13);
                    *(context + 0x14) = 0x28;
                    Camera_SetFieldOfView_33(context + 0x18, context_1 + 0x20);
                    data_16 = *(context_1 + 0x10);
                }

                goto label_49b6a7;
            }
            i = i_1 + 1;
            i_1 = i;
            item_24_1 = &item_24_1[1];
        } while (i < context_val[0x3e9]);
    }

    context_val[0x3e9] = 0;
    context_val[0x3e8] = 0;
    return i;
}
