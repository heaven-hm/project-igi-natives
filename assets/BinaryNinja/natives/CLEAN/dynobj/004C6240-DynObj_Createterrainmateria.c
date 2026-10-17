// IGI native provenance: DynObj_Createterrainmateria - 0x004C6240 - CFG score 80.9% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004C6240-DynObj_Createterrainmateria.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_Createterrainmateria.h"
void* DynObj_Createterrainmateria(void* context, int32_t param_2)

{
    Render_ComputeNormals_3();
    int32_t i = 0xffffffff;
    int32_t dest_val = param_2;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    void item_80;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&item_80, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_2, source_1, entity_val & 3);
    char* dest_3 = ".bit";
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_3;
        dest_3 = &dest_3[1];
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_4 = ~i_1;
    void* dest_5 = &item_80;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool flag_2_1 = 0 != *dest_5;
        dest_5 += 1;
        i_2 -= 1;

        if (!flag_2_1)
            break;
    }

    int32_t source_3;
    int32_t dest_7;
    dest_7 = memcpy(dest_5 - 1, dest_3 - entity_4, entity_4 & 0xfffffffc);
    memcpy(dest_7, source_3, entity_4 & 3);
    void* item_a0 = &item_80;
    int32_t item_88;
    int32_t* data_2 = Resource_Load(&item_88, &item_80, &item_80, &item_88);
    void* dest_8 = &data_2[0x300];
    *(context + 0xdcc) = data_2;

    if (item_88 >= 0xc00)
    {
        void* source_4 = nullptr;

        for (void* i_3 = nullptr; i_3 < 0xc00; )
        {
            *(source_4 + 0xb81a20) = 1;
            int32_t temp_1 = *(context + 0xdcc);
            int32_t temp_2 = *(i_3 + temp_1 + 8);
            item_88 = temp_2;

            if (temp_2)
            {
                *(i_3 + temp_1) = dest_8;
                int32_t data_6 = item_88;
                int32_t data_8;
                int32_t temp_3;
                temp_3 = HIGHD(data_6 * data_6);
                data_8 = LOWD(data_6 * data_6);
                dest_8 += (data_8 + (temp_3 & 7)) >> 3;
            }

            i_3 += 0xc;
            source_4 += 1;
            *(i_3 + *(context + 0xdcc) - 8) = 0;
        }
    }
    else
    {
        void* data_4 = Mem_Alloc(0xc00, 4);
        *(context + 0xdcc) = data_4;
        memset(data_4, 0, 0xc00);
        memset(0xb81a20, 0, 0x100);
    }

    int32_t dest_10 = param_2;
    int32_t i_4 = 0xffffffff;

    while (i_4)
    {
        bool flag_4_1 = 0 != *dest_10;
        dest_10 += 1;
        i_4 -= 1;

        if (!flag_4_1)
            break;
    }

    int32_t entity_10 = ~i_4;
    int32_t source_6;
    int32_t dest_12;
    dest_12 = memcpy(&item_80, dest_10 - entity_10, entity_10 & 0xfffffffc);
    memcpy(dest_12, source_6, entity_10 & 3);
    char* dest_13 = ".hmp";
    int32_t i_5 = 0xffffffff;

    while (i_5)
    {
        bool flag_5_1 = 0 != *dest_13;
        dest_13 = &dest_13[1];
        i_5 -= 1;

        if (!flag_5_1)
            break;
    }

    int32_t entity_14 = ~i_5;
    void* dest_15 = &item_80;
    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool flag_6_1 = 0 != *dest_15;
        dest_15 += 1;
        i_6 -= 1;

        if (!flag_6_1)
            break;
    }

    int32_t source_8;
    int32_t dest_17;
    dest_17 = memcpy(dest_15 - 1, dest_13 - entity_14, entity_14 & 0xfffffffc);
    memcpy(dest_17, source_8, entity_14 & 3);
    int32_t data_13 = Sys_AllocateMemory_16(&item_80);

    if (!data_13)
        *(context + 0xdd0) = 0;
    else
    {
        void* item_a0_1 = &item_80;
        int32_t* data_14 = Resource_Load(data_13, &item_80, &item_88, &item_88);
        *(context + 0xdd0) = data_14;
        void* dest_18 = &data_14[0x300];

        if (item_88 >= 0xc00)
        {
            void* source_9 = nullptr;

            for (int32_t i_7 = 0; i_7 < 0xc00; )
            {
                *(source_9 + 0xb81920) = 1;
                void** entity_21 = *(context + 0xdd0) + i_7;
                int32_t temp_7 = entity_21[2];
                item_88 = temp_7;

                if (temp_7)
                {
                    *entity_21 = dest_18;
                    dest_18 += (item_88 + 1) * (item_88 + 1);
                }

                i_7 += 0xc;
                source_9 += 1;
                *(*(context + 0xdd0) + i_7 - 8) = 0;
            }
        }
        else
        {
            void* data_16 = Mem_Alloc(0xc00, 4);
            *(context + 0xdd0) = data_16;
            memset(data_16, 0, 0xc00);
            memset(0xb81920, 0, 0x100);
        }
    }

    int32_t dest_20 = param_2;
    int32_t i_8 = 0xffffffff;

    while (i_8)
    {
        bool flag_11_1 = 0 != *dest_20;
        dest_20 += 1;
        i_8 -= 1;

        if (!flag_11_1)
            break;
    }

    int32_t entity_24 = ~i_8;
    int32_t source_11;
    int32_t dest_22;
    dest_22 = memcpy(&item_80, dest_20 - entity_24, entity_24 & 0xfffffffc);
    memcpy(dest_22, source_11, entity_24 & 3);
    char* dest_23 = ".cmd";
    int32_t i_9 = 0xffffffff;

    while (i_9)
    {
        bool flag_12_1 = 0 != *dest_23;
        dest_23 = &dest_23[1];
        i_9 -= 1;

        if (!flag_12_1)
            break;
    }

    int32_t entity_28 = ~i_9;
    void* dest_25 = &item_80;
    int32_t i_10 = 0xffffffff;

    while (i_10)
    {
        bool flag_13_1 = 0 != *dest_25;
        dest_25 += 1;
        i_10 -= 1;

        if (!flag_13_1)
            break;
    }

    int32_t source_13;
    int32_t dest_27;
    dest_27 = memcpy(dest_25 - 1, dest_23 - entity_28, entity_28 & 0xfffffffc);
    void* item_a0_2 = &item_80;
    *(context + 8) =
        Resource_Load(&item_80, entity_28, memcpy(dest_27, source_13, entity_28 & 3), nullptr);
    int32_t dest_28 = param_2;
    int32_t i_11 = 0xffffffff;

    while (i_11)
    {
        bool flag_14_1 = 0 != *dest_28;
        dest_28 += 1;
        i_11 -= 1;

        if (!flag_14_1)
            break;
    }

    int32_t entity_34 = ~i_11;
    int32_t source_15;
    int32_t dest_30;
    dest_30 = memcpy(&item_80, dest_28 - entity_34, entity_34 & 0xfffffffc);
    memcpy(dest_30, source_15, entity_34 & 3);
    char* dest_31 = ".ctr";
    int32_t i_12 = 0xffffffff;

    while (i_12)
    {
        bool flag_15_1 = 0 != *dest_31;
        dest_31 = &dest_31[1];
        i_12 -= 1;

        if (!flag_15_1)
            break;
    }

    int32_t entity_38 = ~i_12;
    void* dest_33 = &item_80;
    int32_t i_13 = 0xffffffff;

    while (i_13)
    {
        bool flag_16_1 = 0 != *dest_33;
        dest_33 += 1;
        i_13 -= 1;

        if (!flag_16_1)
            break;
    }

    int32_t source_17;
    int32_t dest_35;
    dest_35 = memcpy(dest_33 - 1, dest_31 - entity_38, entity_38 & 0xfffffffc);
    memcpy(dest_35, source_17, entity_38 & 3);
    void* item_a8 = &item_80;
    int32_t item_84;
    *(context + 0xc) = Resource_Load(&item_84, entity_38, &item_80, &item_84);
    int32_t dest_36 = param_2;
    int32_t i_14 = 0xffffffff;

    while (i_14)
    {
        bool flag_17_1 = 0 != *dest_36;
        dest_36 += 1;
        i_14 -= 1;

        if (!flag_17_1)
            break;
    }

    int32_t entity_44 = ~i_14;
    int32_t source_19;
    int32_t dest_38;
    dest_38 = memcpy(&item_80, dest_36 - entity_44, entity_44 & 0xfffffffc);
    memcpy(dest_38, source_19, entity_44 & 3);
    char* dest_39 = ".qsc";
    int32_t i_15 = 0xffffffff;

    while (i_15)
    {
        bool flag_18_1 = 0 != *dest_39;
        dest_39 = &dest_39[1];
        i_15 -= 1;

        if (!flag_18_1)
            break;
    }

    int32_t entity_48 = ~i_15;
    void* dest_41 = &item_80;
    int32_t i_16 = 0xffffffff;

    while (i_16)
    {
        bool flag_19_1 = 0 != *dest_41;
        dest_41 += 1;
        i_16 -= 1;

        if (!flag_19_1)
            break;
    }

    int32_t source_21;
    int32_t dest_43;
    dest_43 = memcpy(dest_41 - 1, dest_39 - entity_48, entity_48 & 0xfffffffc);
    memcpy(dest_43, source_21, entity_48 & 3);
    Game_DefineOptions("CreateTerrainMaterial", CreateTerrainMaterial, 0, 0xe2);
    Game_DefineOptions("CreateTerrainTileMap", Create_TerrainTileMap, 0, 0x41);
    int32_t* data_24 = Qvm_Load(&item_80);
    Qvm_Execute(data_24);
    Qvm_Cleanup(data_24);
    Sys_CloseFileStream_23("CreateTerrainMaterial");
    Sys_CloseFileStream_23("CreateTerrainTileMap");
    uint32_t i_20 = item_84 >> 5;

    if (i_20 > 0)
    {
        int32_t temp_13 = 0;
        uint32_t i_17;

        do
        {
            int32_t entity_53 = *(context + 0xc);
            int32_t* entity_54 = temp_13 + entity_53 + 0x1c;
            int32_t dest_45 = *(temp_13 + entity_53 + 0x1c) + *(context + 8);
            temp_13 += 0x20;
            i_17 = i_20;
            i_20 -= 1;
            *entity_54 = dest_45;
        } while (i_17 != 1);
    }

    *(context + 0xdc0) = Mem_Alloc(0x1000, 4);
    *(context + 0xdc4) = Mem_Alloc(0x10000, 4);

    for (int32_t i_18 = 0; i_18 < 0x10000; i_18 += 0x100)
    {
        for (int32_t j = 0; j < 0x100; )
        {
            j += 1;
            *(i_18 + *(context + 0xdc4) + j - 1) = 0;
        }
    }

    for (int32_t i_19 = 0; i_19 < 0x1000; )
    {
        i_19 += 0x10;
        *(*(context + 0xdc0) + i_19 - 0x10) = 0;
    }

    return DynObj_UpdateDynTree_11(context);
}
