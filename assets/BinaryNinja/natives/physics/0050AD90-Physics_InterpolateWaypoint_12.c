// Original IGI.EXE function: Physics_InterpolateWaypoint_12 (VA 0x0050AD90; static CFG gate PASS, CFG score 0.991).
#include "Physics_InterpolateWaypoint_12.h"
int32_t Physics_InterpolateWaypoint_12(int32_t* context)

{
    int32_t item_590 = g_a7ceb0;

    if (context[0xa])
    {
        int32_t data_2 = context[6];
        int32_t data_3;

        if ((~(data_2 - 1) & data_2) == data_2)
            data_3 = context[7];

        if ((~(data_2 - 1) & data_2) != data_2 || (~(data_3 - 1) & data_3) != data_3)
        {
            Error_Show("
                Trying to download mipmap texture that is not power of 2 in width or height");

            while (true)
                /* nop */
        }
    }

    int32_t* data_4 = g_5ca114;
    (*(*data_4 + 0x8c))(data_4, 0, 0);
    int32_t* data_5 = g_5ca114;
    (*(*data_5 + 0x8c))(data_5, 1, 0);
    int32_t* data_9 = Mem_Alloc((context[7] * context[6]) << 3, 4);
    int32_t entity_5 = context[6];
    int32_t dest_val = context[3];
    int32_t* source_val = context[7];
    int32_t context_val = context[0xb];
    int32_t* item_578 = data_9;
    int32_t* item_594 = data_9;
    int32_t item_598 = entity_5;
    int32_t context_1;

    while (true)
    {
        int32_t entity_7 = context[8] - 1;

        if (entity_7 <= 0x42)
        {
            int32_t temp_5 = 0;
            temp_5 = lookup_table_50b47c[entity_7];

            switch (temp_5)
            {
                case 0:
                {
                    Terrain_RenderWaterSurface_7(data_9, item_598, source_val, 0, context_val, *(context[1] + 8), dest_val, source_val, nullptr);
                    context_val += source_val * dest_val;
                label_50aed0:
                    int32_t data_13 = item_598 >> 1;
                    int32_t* entity_18 = &item_594[source_val * item_598];
                    item_598 = data_13;
                    item_594 = entity_18;
                    source_val s>>= 1;
                    dest_val s>>= 1;

                    if (context[8] & 0x40 && data_13 > 0 && source_val > 0)
                    {
                        data_9 = item_594;
                        continue;
                    }

                    context_1 = 0;
                    *(*context + 0x18) = Physics_EvaluateAreaCriteria_11(item_578, context[6], context[7]);
                    break;
                    break;
                }
                case 1:
                {
                    Terrain_RenderQuadtree_7(data_9, item_598, source_val, context_val, dest_val >> 1, source_val, nullptr);
                    goto label_50aec1;
                }
                case 2:
                {
                    Terrain_UpdateWaterWaves_7(data_9, item_598, source_val, context_val, dest_val >> 2, source_val, nullptr);
                    goto label_50aec1;
                }
                case 3:
                {
                    Terrain_SelectTerrainLOD_7(data_9, item_598, source_val, context_val, dest_val >> 1, source_val, nullptr);
                label_50aec1:
                    context_val += source_val * dest_val;
                    goto label_50aed0;
                }
            }
        }

        Error_Show("Unsupported texture format");

        while (true)
            /* nop */
    }

    if (*(*context + 0x20))
    {
        g_a7ceb4 -= 1;
        int32_t data_18 = Physics_CouldnTGetSurfaceDes(*(*context + 0x20));
        int32_t entity_23 = g_a7ceb8 - data_18;
        int32_t data_19 = g_a7ceb4;
        g_a7ceb8 = entity_23;
        g_5ca124 = data_19;
        g_5ca128 = entity_23;
        int32_t* data_20 = *(*context + 0x20);
        (*(*data_20 + 8))(data_20);
        *(*context + 0x20) = 0;
    }

    int32_t item_574;
    memset(&item_574, 0, 0x7c);
    bool flag_0 = !(g_bcac00 & 0x80000);
    item_574 = 0x7c;
    int32_t item_570 = 0x1007;
    int32_t item_50c = 0x1000;
    int32_t item_508 = 8;

    if (!flag_0)
        int32_t item_508_1 = 0x18;

    int32_t entity_25 = context[0xa];
    int32_t item_588;
    int32_t item_56c;
    int32_t item_568;
    void* entity_27;

    if (entity_25 || !(*(&g_bcac5c + 1) & 1))
    {
        int32_t data_24 = context[6];
        int32_t temp_19 = context[7];
        item_588 = data_24;
        int32_t item_584_1 = temp_19;

        if (entity_25)
        {
            char entity_28 = item_590;
            int32_t data_25 = data_24 >> (entity_28 & 0x1f);
            int32_t temp_20 = temp_19 >> (entity_28 & 0x1f);
            item_588 = data_25;
            item_584_1 = temp_20;

            if (data_25 <= 1)
                item_588 = 1;

            if (temp_20 <= 1)
                item_584_1 = 1;
        }

        int32_t* item_5ac_11 = &item_588;
        int32_t data_26 = Sys_OpenFileStream_9();
        Sys_DispatchOpcode_3(Display_CheckCapabilities_7(), data_26, item_5ac_11);
        int32_t item_580;
        item_568 = item_580;
        int32_t item_57c;
        item_56c = item_57c;
        *(*context + 0x10) = item_588 / item_580;
        entity_27 = *context;
        *(entity_27 + 0x14) = item_584_1 / item_57c;
    }
    else
    {
        item_568 = context[6];
        entity_27 = *context;
        item_56c = context[7];
        *(entity_27 + 0x10) = 0x3f800000;
        *(*context + 0x14) = 0x3f800000;
    }

    if (g_a7ceac != 0xffffffff)
    {
        item_570 |= 0x100000;
        int32_t item_4fc_1 = Sys_DispatchOpcode_8(entity_27);
    }

    int32_t item_55c;

    if (context[0xa])
    {
        int32_t item_50c_1 = item_50c | &__dos_header.e_cparhdr;
        int32_t item_570_1 = item_570 | 0x20000;
        int32_t data_31 = Physics_EvaluateAreaCriteria_12(item_568, item_56c);
        item_55c = data_31;

        if (item_590 >= data_31 - 1)
            item_590 = data_31 - 1;
    }

    int32_t item_5b4_8 = context[8];
    void item_52c;
    Physics_CalculateSplineLength_12(&item_52c, context[9], *(*context + 0x18));
    int32_t* data_34 = g_5ca10c;
    int32_t data_35 = (*(*data_34 + 0x18))(data_34, &item_574, *context + 0x20, 0);
    void item_400;

    if (data_35)
    {
        Game_DataSymbolLoad(&item_400, "Couldn't create texture surface");
        int32_t item_5b8_7 = DDERR_GENERIC(data_35);
        void* item_5bc_5 = &item_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    void* temp_28 = *context;
    int32_t item_47c = 0x7c;
    int32_t* data_37 = *(temp_28 + 0x20);
    int32_t data_38 = (*(*data_37 + 0x58))(data_37, &item_47c);

    if (!data_38)
    {
        int32_t data_40 = context[0xa];
        int32_t* source_3 = context[6];
        int32_t* i = context[7];

        if (!data_40)
            Physics_CouldnTGetSurfacedes(*(*context + 0x20), item_568, item_56c, item_578, source_3, i);
        else
        {
            int32_t* item_58c;

            if (context[8] & 0x40)
            {
                int32_t* data_41 = *(*context + 0x20);
                item_588 = 0;
                item_594 = data_41;
                int32_t item_584_2 = 0;
                item_588 = QTask_CreateTask;
                int32_t item_580_1 = 0;
                item_58c = item_578;
                int32_t item_57c_1 = 0;

                if (source_3)
                {
                    while (i)
                    {
                        if (context_1 >= item_55c + item_590)
                            break;

                        if (context_1 >= item_590)
                        {
                            Physics_CouldnTGetSurfacedes(item_594, source_3, i, item_58c, source_3, i);

                            if (context_1 != item_55c + item_590 - 1)
                            {
                                int32_t* data_45 = item_594;
                                int32_t data_46 = (*(*data_45 + 0x30))(data_45, &item_588, &item_594);

                                if (data_46)
                                {
                                    Game_DataSymbolLoad(&item_400, "Couldn't get mipmap");
                                    int32_t item_5b8_10 = DDERR_GENERIC(data_46);
                                    void* item_5bc_8 = &item_400;
                                    Error_Show("%s\n\nDirectX error message: %s");

                                    while (true)
                                        /* nop */
                                }
                            }
                        }

                        int32_t data_48 = i * source_3;
                        source_3 s>>= 1;
                        i s>>= 1;
                        context_1 += 1;
                        item_58c = &item_58c[data_48];

                        if (!source_3)
                            break;
                    }
                }
            }
            else if (!data_40)
                Physics_CouldnTGetSurfacedes(*(*context + 0x20), item_568, item_56c, item_578, source_3, i);
            else
            {
                int32_t* context_2 = item_578;
                int32_t* data_51 = *(*context + 0x20);
                item_588 = 0;
                int32_t item_584_3 = 0;
                item_58c = data_51;
                int32_t item_580_2 = 0;
                item_588 = QTask_CreateTask;
                int32_t item_57c_2 = 0;
                int32_t item_4f8 = 0x7c;
                int32_t data_52 = (*(*data_51 + 0x58))(data_51, &item_4f8);

                if (!data_52)
                {
                    item_594 = nullptr;
                    int32_t item_4e0;

                    if (item_4e0 + item_590 > 0)
                    {
                        bool flag_5_1;

                        do
                        {
                            if (item_594 >= item_590)
                            {
                                Physics_CouldnTGetSurfacedes(item_58c, source_3, i, context_2, source_3, i);

                                if (item_594 != item_55c + item_590 - 1)
                                {
                                    int32_t* data_59 = item_58c;
                                    int32_t data_60 =
                                        (*(*data_59 + 0x30))(data_59, &item_588, &item_58c);

                                    if (data_60)
                                    {
                                        Game_DataSymbolLoad(&item_400, "Couldn't get mipmap");
                                        int32_t item_5b8_14 = DDERR_GENERIC(data_60);
                                        void* item_5bc_11 = &item_400;
                                        Error_Show("%s\n\nDirectX error message: %s");

                                        while (true)
                                            /* nop */
                                    }
                                }
                            }

                            int32_t data_63 = &context_2[i * source_3];
                            Terrain_BuildMipMaps_6(data_63, context_2, source_3, i);
                            context_2 = data_63;
                            source_3 s>>= 1;
                            i s>>= 1;
                            flag_5_1 = item_594 + 1 < item_4e0 + item_590;
                            item_594 += 1;
                        } while (flag_5_1);
                    }
                }
                else
                {
                    Game_DataSymbolLoad(&item_400, "Couldn't get surface description");
                    int32_t item_5b8_11 = DDERR_GENERIC(data_52);
                    void* item_5bc_9 = &item_400;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
            }
        }

        Sys_ExecuteBytecode_2(item_578);
        g_a7ceb4 += 1;
        int32_t result = Physics_CouldnTGetSurfaceDes(*(*context + 0x20));
        int32_t temp_42 = g_a7ceb4;
        int32_t entity_53 = g_a7ceb8 + result;
        g_a7ceb8 = entity_53;
        g_5ca124 = temp_42;
        g_5ca128 = entity_53;
        return result;
    }

    Game_DataSymbolLoad(&item_400, "Couldn't get surface description");
    int32_t item_5b8_8 = DDERR_GENERIC(data_38);
    void* item_5bc_6 = &item_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
