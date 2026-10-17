// IGI native provenance: Terrain_TextureFileNotOfRequ - 0x005175A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005175A0-Terrain_TextureFileNotOfRequ.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_TextureFileNotOfRequ.h"
int32_t* Terrain_TextureFileNotOfRequ(int32_t* context)

{
    Sys_PopStack_8();
    int32_t* item_20 = context;
    int32_t data_val;
    void* entity_val;
    int32_t temp_val;
    int32_t* data_1 = Resource_Load(data_val, temp_val, entity_val, nullptr);
    int32_t* flagP = nullptr;

    if (!data_1)
    {
        int32_t* item_1c_6 = context;
        Error_Show("Couldn't load texture file '%s'.");

        while (true)
            /* nop */

        return;
    }

    char data_2 = *data_1;

    if (data_2 == 0x4c)
    {
        if (*(data_1 + 1) == 0x4f && *(data_1 + 2) == 0x4f && *(data_1 + 3) == 0x50 && data_1[1] == 7)
        {
            int32_t context_val = data_1[6];
            int32_t item_8;
            int32_t dest_1;

            if (!context_val)
            {
                item_8 = 2;
                dest_1 = 2;
            }
            else
            {
                int32_t* data_3 = Mem_Alloc(0xc, 4);
                dest_1 = *(context_val + data_1 + 0xc);
                flagP = data_3;
                item_8 = dest_1;
                Sys_PushStack_21(flagP, context_val + data_1 + 0x10, dest_1);
            }

            int32_t* data_6 = Mem_Alloc(data_1[8] * 0x24 + 0x30, 4);
            *data_6 = dest_1;
            data_6[2] = flagP;
            int32_t i = 0;
            data_6[1] = data_1[8];

            if (data_1[8] > 0)
            {
                int32_t* item_4_1 = &data_6[3];
                int32_t* dest_2 = &data_1[0xf];

                do
                {
                    Sys_FreeMemory_8(item_4_1, data_6[2], dest_2[-1], *dest_2, dest_2[1], item_8,
                        *(data_1 + 0x12), 0, dest_2[-2] + data_1);
                    i += 1;
                    dest_2 = &dest_2[0xa];
                    item_4_1 = &item_4_1[9];
                } while (i < data_1[8]);
            }

            Sys_ResolveSymbol_8();
            Resource_Unload(context);
            return data_6;
        }

        if (data_2 == 0x4c && *(data_1 + 1) == 0x4f && *(data_1 + 2) == 0x4f && *(data_1 + 3) == 0x50
            && data_1[1] == 9)
        {
            int32_t context_2 = data_1[6];
            int32_t dest_3;

            if (!context_2)
                dest_3 = 2;
            else
            {
                int32_t* data_14 = Mem_Alloc(0xc, 4);
                dest_3 = *(context_2 + data_1 + 0xc);
                flagP = data_14;
                Sys_PushStack_21(flagP, context_2 + data_1 + 0x10, dest_3);
            }

            int32_t* data_17 = Mem_Alloc(data_1[8] * 0x24 + 0x30, 4);
            *data_17 = dest_3;
            data_17[2] = flagP;
            int32_t i_1 = 0;
            data_17[1] = data_1[8];

            if (data_1[8] > 0)
            {
                int32_t* item_4_2 = &data_17[3];
                int16_t* dest_4 = &data_1[0x10];

                do
                {
                    int32_t temp_10 = 0;
                    temp_10 = *dest_4;
                    int32_t data_20 = 0;
                    int32_t entity_15 = 0;
                    data_20 = dest_4[-1];
                    entity_15 = dest_4[-2];
                    Sys_FreeMemory_8(item_4_2, data_17[2], entity_15, data_20, temp_10, *(dest_4 - 8),
                        *(data_1 + 0x12), 0, *(dest_4 - 0xc) + data_1);
                    i_1 += 1;
                    dest_4 = &dest_4[0x10];
                    item_4_2 = &item_4_2[9];
                } while (i_1 < data_1[8]);
            }

            Sys_ResolveSymbol_8();
            Resource_Unload(context);
            return data_17;
        }
    }

    int32_t* item_1c_5 = context;
    Error_Show("Texture file not of required type: '%s'.");

    while (true)
        /* nop */
}
