// IGI native provenance: Sys_ResolveSymbol_24 - 0x004B9CD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B9CD0-Sys_ResolveSymbol_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_24.h"
int32_t Sys_ResolveSymbol_24(int32_t* context, char** param_2, int32_t param_3, int32_t param_4)

{
    char* i_1 = nullptr;
    int32_t* source_val = context;
    char* i_2 = nullptr;
    char* i_6 = nullptr;
    int32_t item_4 = 0;
    int32_t item_8 = 0;
    char* i_4 = nullptr;
    int32_t temp_19;

    while (true)
    {
        if (item_8)
        {
            temp_19 = item_4;
            break;
        }

        int32_t* entity_2 = source_val[6];
        int32_t temp_1 = source_val[5];
        context = entity_2;

        if (param_4 && entity_2 == 0x18)
        {
            temp_1 = 0;
        label_4b9d2a:

            switch (jump_table_4ba31c[temp_1])
            {
                case 0x4b9d31:
                {
                    if (!i_1)
                    {
                        int32_t item_24_20 = DynObj_CreateMagicObject(source_val);
                        int32_t item_28_26 = DynObj_LookupHashItem(source_val);
                        Sys_FreeMemory_22("Syntax error in line %d: '%s'. Expected operand.");
                        i_1 = i_2;
                        temp_19 = 1;
                        break;
                    }

                    if (entity_2 != 0x1d)
                    {
                        if (!g_a43e80)
                        {
                            int32_t item_24_18 = DynObj_CreateMagicObject(source_val);
                            int32_t item_28_24 = DynObj_LookupHashItem(source_val);
                            Sys_FreeMemory_22("Syntax error in line %d: '%s'");
                            i_1 = i_2;
                            temp_19 = 1;
                            break;
                        }

                        goto label_4b9e54;
                    }

                    g_a43e80 = 1;

                    while (*(i_1 + 0x20))
                    {
                        char* i_5 = *(i_1 + 0x20);

                        if (Sys_ScriptInternalErrorU(0x1d) < i_5[2])
                        {
                            i_1 = i_2;
                            break;
                        }

                        i_1 = i_5;
                        i_2 = i_1;
                    }

                    char* i_3 = Sys_ScriptInternalErrorI(7, i_1, *(*source_val + 0xc), nullptr);
                    char* i_8 = i_2;
                    void* data_1 = *(i_8 + 0x20);

                    if (data_1)
                    {
                        if (*(data_1 + 0x18) == i_8)
                            *(data_1 + 0x18) = i_3;
                        else if (*(data_1 + 0x1c) != i_8)
                            *(data_1 + 8) = i_3;
                        else
                            *(data_1 + 0x1c) = i_3;
                    }

                    *(i_3 + 0x20) = *(i_2 + 0x20);

                    if (!Sys_CloseFileStream_31(source_val, &source_val[2]))
                    {
                    label_4ba156:
                        int32_t item_24_16 = DynObj_CreateMagicObject(source_val);
                        int32_t item_28_22 = DynObj_LookupHashItem(source_val);
                        Sys_FreeMemory_22("Unexpected end of file in line %d: '%s'");
                    }
                    else if (Sys_ResolveSymbol_24(source_val, &i_3[0x18], param_3 + 1, 0))
                    {
                        if (source_val[6] != 0x1e)
                        {
                            int32_t item_24_14 = DynObj_CreateMagicObject(source_val);
                            int32_t item_28_20 = DynObj_LookupHashItem(source_val);
                            Sys_FreeMemory_22("Expected ':' in line %d: '%s'");
                        }
                        else
                        {
                            if (!Sys_CloseFileStream_31(source_val, &source_val[2]))
                                goto label_4ba156;

                            if (Sys_ResolveSymbol_24(source_val, &i_3[0x1c], param_3 + 1, 0))
                            {
                                i_4 = i_6;
                                i_1 = i_3;
                                i_2 = i_1;
                                item_8 = 1;
                                g_a43e80 = 0;
                                continue;
                            }
                        }
                    }

                    i_1 = i_2;
                    i_4 = i_6;
                    temp_19 = 1;
                    break;
                    break;
                }
                case 0x4b9e54:
                {
                label_4b9e54:
                    item_8 = 1;
                    continue;
                    continue;
                }
                case 0x4b9e5d:
                {
                    if (!i_1)
                    {
                        i_1 = Sys_ScriptInternalErrorI(2, source_val[7], *(*source_val + 0xc), nullptr);
                        i_2 = i_1;
                    }
                    else
                    {
                        if (*i_1 != 2)
                            goto label_4ba1ed;

                        i_1 = Sys_ScriptInternalErrorI(2, source_val[7], *(*source_val + 0xc), i_1);
                        i_2 = i_1;
                    }
                    break;
                }
                case 0x4b9ea7:
                {
                    if (i_1)
                    {
                    label_4ba1ed:
                        int32_t item_24_22 = DynObj_CreateMagicObject(source_val);
                        int32_t item_28_28 = DynObj_LookupHashItem(source_val);
                        Sys_FreeMemory_22("Syntax error in line %d: '%s'.");
                        i_1 = i_2;
                        temp_19 = 1;
                        break;
                        break;
                    }

                    i_1 = Sys_ScriptInternalErrorI(3, &source_val[8], *(*source_val + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9ecd:
                {
                    if (i_1)
                        goto label_4ba1ed;

                    i_1 = Sys_ScriptInternalErrorI(1, &source_val[0xa], *(*source_val + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9ef2:
                {
                    if (i_1)
                        goto label_4ba1ed;

                    i_1 = Sys_ScriptInternalErrorI(5, source_val[7], *(*source_val + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9f18:
                {
                    if (entity_2 != 0x15)
                    {
                        if (!i_1 || i_4)
                        {
                            if (entity_2 == 1 || entity_2 == 2)
                            {
                                void* temp_12 = nullptr;
                                temp_12 = entity_2 != 1;
                                context = temp_12 + 3;
                            }
                            else if (temp_1 == 1)
                            {
                                int32_t item_24_28 = DynObj_CreateMagicObject(source_val);
                                int32_t item_28_35 = DynObj_LookupHashItem(source_val);
                                Sys_FreeMemory_22("Syntax error in line %d, '%s'. Binary operator requires lvalue.");
                            label_4ba295:
                                i_1 = i_2;
                                temp_19 = 1;
                                break;
                                break;
                                break;
                            }
                        }

                        char* i_7 = Sys_ScriptInternalErrorI(8, &context, *(*source_val + 0xc), nullptr);
                        i_1 = i_2;

                        if (i_1)
                        {
                            i_4 = *(i_1 + 0x20);
                            i_6 = i_4;
                        }

                        if (i_4)
                        {
                            int32_t data_21 = Sys_AllocateMemory_25(i_7[1]);
                            int32_t context_2 = -(data_21);
                            int32_t context_4 = -((context_2 - context_2));
                            int32_t data_22 = Sys_ScriptInternalErrorU(i_6[1]);

                            if (Sys_ScriptInternalErrorU(i_7[1]) + context_4 > data_22)
                            {
                                int32_t data_26;
                                int32_t data_28;

                                do
                                {
                                    char* i_9 = *(i_6 + 0x20);

                                    if (!i_9)
                                    {
                                        *(i_7 + 0x18) = i_6;
                                        i_1 = nullptr;
                                        *(i_6 + 0x20) = i_7;
                                        i_2 = nullptr;
                                        goto label_4ba0f6;
                                    }

                                    i_6 = i_9;
                                    data_26 = Sys_ScriptInternalErrorU(i_9[1]);
                                    data_28 = Sys_ScriptInternalErrorU(i_7[1]) + context_4;
                                } while (data_28 > data_26);
                            }

                            if (i_6)
                            {
                                if (*(i_6 + 0x1c))
                                {
                                    if (!Sys_CheckHeap_24(i_6[1]))
                                        *(i_7 + 0x18) = *(i_6 + 0x1c);
                                    else
                                        *(i_7 + 0x1c) = *(i_6 + 0x1c);

                                    *(*(i_6 + 0x1c) + 0x20) = i_7;
                                }

                                *(i_6 + 0x1c) = i_7;
                                *(i_7 + 0x20) = i_6;
                            }

                            i_1 = nullptr;
                            i_2 = nullptr;
                        }
                        else if (i_1)
                        {
                            if (!Sys_CheckHeap_24(i_7[1]))
                                *(i_7 + 0x18) = i_2;
                            else
                                *(i_7 + 0x1c) = i_2;

                            i_1 = nullptr;
                            *(i_2 + 0x20) = i_7;
                            i_2 = nullptr;
                        }

                    label_4ba0f6:
                        i_4 = i_7;
                        i_6 = i_4;
                    }
                    else if (!i_1)
                    {
                        if (!Sys_CloseFileStream_31(source_val, &source_val[2]))
                        {
                            int32_t item_24_26 = DynObj_CreateMagicObject(source_val);
                            int32_t item_28_33 = DynObj_LookupHashItem(source_val);
                            Sys_FreeMemory_22("Unexpected end of file in line %d: '%s'");
                            i_1 = i_2;
                            temp_19 = 1;
                            break;
                            break;
                        }

                        if (!Sys_ResolveSymbol_24(source_val, &i_2, param_3 + 1, 0))
                            goto label_4ba295;

                        if (source_val[6] != 0x16)
                        {
                            Sys_PushStack_24(i_2);
                            i_2 = nullptr;
                            int32_t item_24_24 = DynObj_CreateMagicObject(source_val);
                            int32_t item_28_31 = DynObj_LookupHashItem(source_val);
                            Sys_FreeMemory_22("Expected ')' in line %d: '%s'");
                            i_1 = i_2;
                            temp_19 = 1;
                            break;
                        }

                        i_1 = Sys_ScriptInternalErrorI(6, i_2, *(*source_val + 0xc), nullptr);
                        i_2 = i_1;
                    }
                    else
                    {
                        if (*i_1 != 5)
                            goto label_4ba1ed;

                        int32_t* data_13 = Sys_TooManyArgumentsToFu(source_val, nullptr);
                        *(i_2 + 0xc) = data_13;

                        if (!data_13)
                            goto label_4ba295;

                        i_1 = i_2;
                    }
                    break;
                }
            }
        }
        else if (temp_1 <= 7)
            goto label_4b9d2a;

        if (i_1 && i_4)
        {
            *(i_4 + 0x1c) = i_1;
            *(i_2 + 0x20) = i_4;
            i_4 = nullptr;
            i_6 = nullptr;
        }

        if (!Sys_CloseFileStream_31(source_val, &source_val[2]))
            item_8 = 1;

        i_1 = i_2;
    }

    if (i_4)
        i_1 = i_4;

    if (i_1)
    {
        for (char* i = *(i_1 + 0x20); i; i = *(i_1 + 0x20))
            i_1 = i;

        if (i_1)
        {
            if (!temp_19)
            {
                *param_2 = i_1;
                return 1;
            }

            Sys_PushStack_24(i_1);
        }
    }

    while (source_val[6] != 0x17)
    {
        if (!Sys_CloseFileStream_31(source_val, &source_val[2]))
            break;
    }

    *param_2 = nullptr;
    g_a43e80 = 0;
    return 0;
}
