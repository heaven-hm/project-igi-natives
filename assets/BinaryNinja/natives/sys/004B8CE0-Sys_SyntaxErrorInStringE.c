// Original IGI.EXE function: Sys_SyntaxErrorInStringE (VA 0x004B8CE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_SyntaxErrorInStringE.h"
char* Sys_SyntaxErrorInStringE(char* context, int16_t* param_2, char* param_3)

{
    if (!context)
    {
        *param_2 = g_5474d8;
        return 0;
    }

    int32_t data_2 = context[1];
    char* item_82c_9;

    if (data_2 > 0x19)
    {
    label_4b8fc0:
        int32_t saved_ebp_13 = *(context + 0x24);
        item_82c_9 = "Syntax error in string expression, line %d";
    label_4b8fc6:
        Sys_FreeMemory_22(item_82c_9);
        *param_2 = g_5474d8;
        return 0;
    }

    int32_t temp_1 = 0;
    temp_1 = lookup_table_4b9000[data_2];
    void item_800;

    switch (temp_1)
    {
        case 0:
        {
            int32_t data_6 = *context - 1;

            if (data_6 > 5)
            {
                *param_2 = g_5474d8;
                return 0;
            }

            char* item_82c_3;
            void* saved_ebp_3;
            char* data_9;
            char* dest_1;

            switch (data_6)
            {
                case 0:
                case 2:
                {
                    int32_t saved_ebp_2 = *(context + 0x24);
                    Sys_FreeMemory_22("Numeric member in string expression. Line %d.");
                    *param_2 = g_5474d8;
                    return 0;
                    break;
                }
                case 1:
                {
                    dest_1 = param_3;
                    data_9 = *(context + 8);
                    saved_ebp_3 = &dest_1[0xffffffff];
                label_4b8e57:
                    item_82c_3 = data_9;
                label_4b8e58:
                    char* source_1 = param_2;
                    Camera_ApplyLineFilter_5(source_1, item_82c_3, saved_ebp_3);
                    *(source_1 + dest_1 - 1) = 0;
                    return source_1;
                    break;
                }
                case 3:
                case 4:
                {
                    if (!*(context + 8))
                        *(context + 8) = Sys_ExecuteBytecode_25(*(context + 0x10));

                    void* data_12 = *(context + 8);
                    void* data_13;

                    if (data_12)
                        data_13 = *(data_12 + 8);

                    if (data_12 && data_13)
                    {
                        dest_1 = param_3;
                        saved_ebp_3 = &dest_1[0xffffffff];
                        void item_818;
                        item_82c_3 = *((*(data_13 + 0x10))(&item_818, *(data_13 + 0x18), *(context + 0xc),
                            saved_ebp_3) + 0x10);
                        goto label_4b8e58;
                    }

                    void* data_15 = *(context + 0x18);

                    if (!data_15)
                    {
                        int32_t saved_ebp_6 = *(context + 0x24);
                        int32_t item_82c_5 = *(context + 0x10);
                        Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                    }
                    else
                    {
                        int32_t saved_ebp_5 = *(context + 0x24);
                        int32_t item_82c_4 = *(data_15 + 0x10);
                        Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                    }
                    break;
                }
                case 5:
                {
                    dest_1 = param_3;
                    saved_ebp_3 = &dest_1[0xffffffff];
                    data_9 = Sys_SyntaxErrorInStringE(*(context + 8), &item_800, 0x800);
                    goto label_4b8e57;
                }
            }

            *param_2 = g_5474d8;
            return 0;
            break;
        }
        case 1:
        {
            Camera_ApplyLineFilter_5(param_2, Sys_SyntaxErrorInStringE(*(context + 0x18), &item_800, 0x800), &param_3[0xffffffff]);
            Terrain_RenderQuadtree_4(param_2, Sys_SyntaxErrorInStringE(*(context + 0x1c), &item_800, 0x800), &param_3[0xffffffff]);
            *(param_2 + param_3 - 1) = 0;
            return param_2;
            break;
        }
        case 2:
        {
            Sys_SyntaxErrorInStringE(*(context + 0x18), param_2, param_3);
            return Sys_SyntaxErrorInStringE(*(context + 0x1c), param_2, param_3);
            break;
        }
        case 3:
        {
            char* data_16 = *(context + 0x18);

            if (!data_16)
            {
                *param_2 = g_5474d8;
                return 0;
            }

            char entity_11 = *data_16;

            if (entity_11 != 4)
            {
                if (entity_11 != 5)
                {
                    int32_t saved_ebp_7 = *(context + 0x24);
                    Error_Show("Internal script error. Invalid assignment, line %d");

                    while (true)
                        /* nop */
                }
                else if (entity_11 != 4 && !*(data_16 + 8))
                    *(*(context + 0x18) + 8) = Sys_ExecuteBytecode_25(*(data_16 + 0x10));
            }

            void* entity_15 = *(context + 0x18);
            void* data_26 = *(entity_15 + 8);
            int32_t* data_27;

            if (data_26)
                data_27 = *(data_26 + 8);

            if (!data_26 || !data_27)
            {
                int32_t saved_ebp_12 = *(context + 0x24);
                int32_t item_82c_10 = *(entity_15 + 0x10);
                Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                *param_2 = g_5474d8;
                return 0;
            }

            int32_t entity_16 = *data_27;

            if (!entity_16)
            {
                long double fpu2;
                Sys_OpenFileStream_24(fpu2, *(context + 0x1c), data_27);
                return Sys_SyntaxErrorInStringE(*(context + 0x1c), param_2, param_3);
            }

            if (entity_16 != 2)
            {
                int32_t saved_ebp_11 = *(context + 0x24);
                item_82c_9 = "Syntax error in assignment, line %d";
            }
            else
            {
                int32_t saved_ebp_10 = *(context + 0x24);
                item_82c_9 = "Expression: Cannot assign to constant, line %d";
            }

            goto label_4b8fc6;
        }
        case 4:
        {
            goto label_4b8fc0;
        }
    }
}
