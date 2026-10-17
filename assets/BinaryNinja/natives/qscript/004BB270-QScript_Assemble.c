// Original IGI.EXE function: QScript_Assemble (VA 0x004BB270; static CFG gate PASS, CFG score 0.983).
#include "QScript_Assemble.h"
int32_t QScript_Assemble(void* context, void* param_2)

// Sig: int QScript_Assemble(char* srcText, int srcLen2)
// Note: ASSEMBLER stage of the script pipeline: strips comments via regex
// "{.*:(.*//)*}.*", initialises the parser ("Initialising parser."), generates
// assembly code and WRITES IT TO "LOCAL:qvmbin.tmp" (also referenced as
// /0qvmbin.tmp). Params: srcText = script source buffer, srcLen2 = secondary
// length/context arg. Returns assembly result.
{
    int32_t i = 0;
    int32_t item_554;

    if (!Sys_PushStack(nullptr, nullptr, "{.*:(.*//)*}.*", context, 0))
    {
        item_554 = g_54794c[0];
        int32_t item_550_1 = g_54794c[4][0];
        int32_t item_54c_1 = g_54794c[8][0];
        int32_t item_548_1 = g_54794c[0xc][0];
        char item_544_1 = g_54794c[0x10][0];
    }
    else
        Sys_AllocateMemory_2(&item_554, 0x104, "/0qvmbin.tmp", context);

    char* saved_edi_2 = &g_538354;
    g_a43ed0 = 0;
    int32_t* data_2 = QFile_ReadWrite(context, saved_edi_2);
    int32_t* item_644 = data_2;
    void* item_620;

    if (!data_2)
    {
        void* saved_edi_3 = context;
        void** item_65c_32 = &item_620;
        Sys_FreeMemory_26("Failed to open file '%s' for writing.");
        return g_a43ed0;
    }

    int32_t data_3;
    void* entity_3;
    int32_t temp_3;
    data_3 = Sys_AllocateMemory_16(param_2);

    if (!data_3)
    {
        void* item_658_38 = param_2;
        void** item_660_20 = &item_620;
        Sys_FreeMemory_26("Failed to load assembler source file: '%s'");
        Sys_ReadFileBlock_4(item_644);
        return g_a43ed0;
    }

    void* item_65c_2 = param_2;
    int32_t item_5c8;
    int32_t* data_5 = Resource_Load(&item_5c8, temp_3, entity_3, &item_5c8);
    Log_Add("Initialising parser.\n");
    void item_634;
    DynObj_ParseConfigFile_2(&item_634);
    int32_t item_668 = 1;
    int32_t item_66c = 1;
    char* item_670 = "[ \t\n\r]+";
    DynObj_UpdateDynTree_2(&item_634, item_670, item_66c, item_668);
    DynObj_UpdateDynTree_2(&item_634, ""([~\\"]*(\.)*)*"", 2, 1);
    DynObj_UpdateDynTree_2(&item_634, "[a-zA-Z][a-zA-Z0-9_]*:", 0xa, 1);
    DynObj_UpdateDynTree_2(&item_634, "-?[0-9]+/.[0-9]+", 5, 1);
    int32_t item_668_1 = 1;
    int32_t item_66c_1 = 6;
    item_670 = &g_5478e4;
    DynObj_UpdateDynTree_2(&item_634, item_670, item_66c_1, item_668_1);
    DynObj_UpdateDynTree_2(&item_634, "/(", 7, 1);
    DynObj_UpdateDynTree_2(&item_634, "/)", 8, 1);
    DynObj_UpdateDynTree_2(&item_634, "0x[0-9a-fA-F]+", 3, 1);
    int32_t item_668_2 = 1;
    int32_t item_66c_2 = 0xb;
    item_670 = "[0-9a-zA-Z]+:";
    DynObj_UpdateDynTree_2(&item_634, item_670, item_66c_2, item_668_2);
    DynObj_UpdateDynTree_2(&item_634, "@[0-9a-zA-Z]+", 0xc, 1);
    DynObj_UpdateDynTree_2(&item_634, "[a-zA-Z][a-zA-Z0-9_.]*", 9, 0);
    DynObj_UpdateDynTree_2(&item_634, "-?[0-9]+", 4, 0);
    int32_t temp_4 = item_5c8;
    void item_574;
    item_670 = &item_574;
    Sys_ResolveSymbol_30(item_670, data_5, temp_4);
    void item_588;
    DynObj_LinkDynamicCube_2(&item_588, &item_634, &item_574);
    memset(&item_620, 0, 0x50);
    void* item_608 = &item_588;
    void item_450;
    void* item_60c = &item_450;
    int32_t item_5fc;
    int32_t* i_27 = &item_5fc;
    int32_t** item_5f8 = &i_27;
    int32_t item_5e4;
    int32_t* i_29 = &item_5e4;
    int32_t** item_5e0 = &i_29;
    int32_t item_5f0;
    int32_t* i_28 = &item_5f0;
    void* item_638 = nullptr;
    int32_t* item_610 = data_2;
    item_620 = nullptr;
    item_5fc = 0;
    item_5e4 = 0;
    int32_t** item_5ec = &i_28;
    item_5f0 = 0;
    int32_t item_5d8;
    int32_t* i_30 = &item_5d8;
    int32_t** item_5d4 = &i_30;
    item_5d8 = 0;
    int32_t* data_6 = DynObj_RemoveSymbol(0x12ccb);
    void item_188;
    void* context_1 = &item_188;
    int32_t item_628;

    do
    {
        Sys_FreeMemory_29(i, 1, &item_628, 0);
        int32_t* dest_1 = &item_628;
        int32_t j = 0xffffffff;

        while (j)
        {
            bool flag_1_1 = 0 != *dest_1;
            dest_1 += 1;
            j -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_4 = ~j;
        void* dest_3 = context_1;
        context_1 += 8;
        int32_t source_4;
        int32_t dest_4;
        dest_4 = memcpy(dest_3, dest_1 - entity_4, entity_4 & 0xfffffffc);
        i += 1;
        memcpy(dest_4, source_4, entity_4 & 3);
    } while (i < 0x31);

    int32_t* data_8 = QFile_ReadWrite(&item_554, "w");
    int32_t* flagP4;

    if (!data_8)
    {
        int32_t* item_658_29 = &item_554;
        void** item_660_17 = &item_620;
        Sys_FreeMemory_26("Failed to create temporary file '%s'.");
        flagP4 = item_644;
    }
    else
    {
        Log_Add("Assembling\n");
        int32_t item_614_1 = 2;
        int32_t* item_610_1 = data_8;
        int32_t data_9;
        int32_t entity_8;
        data_9 = Sys_PushStack_26(&item_450, &item_588);
        void* item_63c;
        int32_t i_1;

        if (data_9)
        {
            while (!i_1)
            {
                int32_t item_18c;
                char j_12;

                if (item_18c == 0xa)
                {
                    int32_t* data_12 = Sys_DuplicateLabelS(&item_620, &j_12);

                    if (data_12)
                    {
                        data_12[5] = 1;
                        data_12[6] = item_638;
                    }
                }
                else if (item_18c != 0xb && item_18c == 9)
                {
                    char j_1 = j_12;

                    if (j_1)
                    {
                        char* source_6 = &j_12;

                        do
                        {
                            int32_t j_11 = j_1;
                            char data_13;
                            data_13 = Camera_ApplyWideScreen_28(entity_8);
                            *source_6 = data_13;
                            j_1 = source_6[1];
                            source_6 = &source_6[1];
                        } while (j_1);
                    }

                    int32_t dest_5 = 0;
                    char* flagP = &item_188;

                    while (true)
                    {
                        char* source_7 = flagP;
                        char* data_14 = &j_12;
                        int32_t data_16;

                        while (true)
                        {
                            char temp_6 = *data_14;
                            char f0_1 = *source_7;
                            bool c_1 = temp_6 < f0_1;

                            if (temp_6 == f0_1)
                            {
                                if (!temp_6)
                                {
                                    data_16 = 0;
                                    break;
                                }

                                temp_6 = data_14[1];
                                char f3_1 = source_7[1];
                                c_1 = temp_6 < f3_1;

                                if (temp_6 == f3_1)
                                {
                                    data_14 = &data_14[2];
                                    source_7 = &source_7[2];

                                    if (temp_6)
                                        continue;

                                    data_16 = 0;
                                    break;
                                }
                            }

                            data_16 = data_14 - data_14 + 1;
                            break;
                        }

                        if (data_16)
                        {
                            dest_5 += 1;
                            flagP = &flagP[8];

                            if (dest_5 < 0x31)
                                continue;
                        }
                        else if (dest_5 < 0x31)
                        {
                            void** item_658_17 = &item_620;
                            void** item_65c_13 = &item_63c;
                            item_63c = nullptr;
                            Sys_FreeMemory_29(dest_5, item_614_1, item_65c_13, item_658_17);
                            void* data_22 = item_638 + item_63c;
                            item_638 = data_22;
                            item_620 = data_22;
                            break;
                        }

                        char* item_658_12 = &j_12;
                        void** item_660_7 = &item_620;
                        i_1 = 1;
                        Sys_FreeMemory_26("Unknown opcode: %s\n");
                        break;
                    }
                }
                int32_t data_17;
                data_17 = Sys_PushStack_26(&item_450, &item_588);

                if (!data_17)
                    break;
            }
        }

        Sys_ReadFileBlock_4(data_8);

        if (i_1)
            flagP4 = item_644;
        else
        {
            int32_t item_5cc;
            void* context_2 = Resource_PackUnpack(&item_554, &item_5cc);
            item_63c = context_2;

            if (!context_2)
                flagP4 = item_644;
            else if (item_5cc == item_638)
            {
                Log_Add("Patching code\n");
                int32_t* i_21 = i_27;
                int32_t* i_2 = *i_21;
                int32_t* i_14 = i_2;

                if (i_2)
                {
                    do
                    {
                        int32_t* j_13 = i_21[2];
                        int32_t* j_2 = *j_13;

                        if (j_2)
                        {
                            do
                            {
                                if (!i_21[5])
                                {
                                    int32_t item_658_19 = j_13[2];
                                    void* item_65c_14 = &i_21[7];
                                    int32_t* item_664_6 = &item_620;
                                    Sys_FreeMemory_26("Unknown label '%s' at PC:%08x\n");
                                }

                                void* flagP1 = item_63c;
                                item_628 = i_21[6] - j_13[3];

                                for (int32_t k = 0; k < 4; )
                                {
                                    char temp_11 = *(&item_628 + k);
                                    char* entity_15 = j_13[2] + k;
                                    k += 1;
                                    *(entity_15 + flagP1) = temp_11;
                                }

                                Camera_ApplyHandiCam_33(j_13);
                                Sys_ExecuteBytecode_2(j_13);
                                j_13 = j_2;
                                j_2 = *j_2;
                            } while (j_2);

                            i_2 = i_14;
                        }

                        Symbol_Remove(data_6, &i_21[7]);
                        Camera_ApplyHandiCam_33(i_21);
                        Sys_ExecuteBytecode_2(i_21);
                        i_21 = i_2;
                        i_2 = *i_2;
                        i_14 = i_2;
                    } while (i_2);

                    context_2 = item_63c;
                }

                int32_t* i_20 = i_30;

                for (int32_t* i_3 = *i_20; i_3; i_3 = *i_3)
                {
                    int32_t j_3 = 0;
                    item_628 = i_20[3];

                    do
                    {
                        char temp_13 = *(&item_628 + j_3);
                        char* entity_18 = i_20[2] + j_3;
                        j_3 += 1;
                        *(entity_18 + context_2) = temp_13;
                    } while (j_3 < 4);

                    Camera_ApplyHandiCam_33(i_20);
                    Sys_ExecuteBytecode_2(i_20);
                    i_20 = i_3;
                }

                int32_t* i_16 = i_28;
                char item_5c4;
                strncpy(&item_5c4, "LOOP", 4);
                int32_t item_5c0_1 = 8;
                int32_t item_58c_1 = 0;
                int32_t item_590_1 = 0;
                int32_t item_5bc_1 = 5;
                int32_t* i_4 = *i_16;
                int32_t source_8 = 0;
                int32_t context_3 = 0;

                while (i_4)
                {
                    void* dest_6 = &i_16[2];
                    int32_t j_4 = 0xffffffff;

                    while (j_4)
                    {
                        bool flag_8_1 = 0 != *dest_6;
                        dest_6 += 1;
                        j_4 -= 1;

                        if (!flag_8_1)
                            break;
                    }

                    i_16 = i_4;
                    i_4 = *i_4;
                    context_3 += 1;
                    source_8 = source_8 + ~j_4 - 1 + 1;
                }

                int32_t* i_17 = i_29;
                int32_t temp_14 = context_3 << 2;
                int32_t item_5b0_1 = temp_14;
                int32_t item_5b4_1 = temp_14 + 0x3c;
                int32_t item_5b8_1 = 0x3c;
                int32_t item_5ac_1 = source_8;
                int32_t temp_16 = temp_14 + 0x3c + source_8;
                int32_t* i_5 = *i_17;
                int32_t flagP2 = 0;
                int32_t context_4 = 0;

                while (i_5)
                {
                    void* dest_7 = &i_17[2];
                    int32_t j_5 = 0xffffffff;

                    while (j_5)
                    {
                        bool flag_11_1 = 0 != *dest_7;
                        dest_7 += 1;
                        j_5 -= 1;

                        if (!flag_11_1)
                            break;
                    }

                    i_17 = i_5;
                    i_5 = *i_5;
                    context_4 += 1;
                    flagP2 = ~j_5 - 1 + flagP2 + 1;
                }

                int32_t data_29 = context_4 << 2;
                int32_t item_5a8_1 = temp_16;
                int32_t temp_17 = temp_16 + data_29;
                int32_t item_59c_1 = flagP2;
                int32_t item_598_1 = flagP2 + temp_17;
                flagP4 = item_644;
                int32_t item_5a0_1 = data_29;
                int32_t item_5a4_1 = temp_17;
                void* item_594_1 = item_638;
                Sys_CloseFileStream_4(flagP4, &item_5c4, 0x3c);
                int32_t* i_22 = i_28;
                item_644 = nullptr;
                int32_t* i_6 = *i_22;

                if (i_6)
                {
                    do
                    {
                        Sys_CloseFileStream_4(flagP4, &item_644, 4);
                        void* dest_8 = &i_22[2];
                        int32_t j_6 = 0xffffffff;

                        while (j_6)
                        {
                            bool flag_14_1 = 0 != *dest_8;
                            dest_8 += 1;
                            j_6 -= 1;

                            if (!flag_14_1)
                                break;
                        }

                        i_22 = i_6;
                        item_644 = item_644 + ~j_6 - 1 + 1;
                        i_6 = *i_6;
                    } while (i_6);

                    i_22 = i_28;
                }

                int32_t* i_7 = *i_22;
                int32_t* i_18 = i_22;

                for (; i_7; i_7 = *i_7)
                {
                    int32_t j_7 = 0xffffffff;
                    void* dest_9 = &i_18[2];

                    while (j_7)
                    {
                        bool flag_15_1 = 0 != *dest_9;
                        dest_9 += 1;
                        j_7 -= 1;

                        if (!flag_15_1)
                            break;
                    }

                    Sys_CloseFileStream_4(flagP4, &i_18[2], ~j_7);
                    i_18 = i_7;
                }

                int32_t* i_19 = i_29;
                item_644 = nullptr;
                int32_t* i_23 = i_19;
                int32_t* i_8 = *i_19;

                if (i_8)
                {
                    do
                    {
                        Sys_CloseFileStream_4(flagP4, &item_644, 4);
                        void* dest_10 = &i_23[2];
                        int32_t j_8 = 0xffffffff;

                        while (j_8)
                        {
                            bool flag_16_1 = 0 != *dest_10;
                            dest_10 += 1;
                            j_8 -= 1;

                            if (!flag_16_1)
                                break;
                        }

                        i_23 = i_8;
                        item_644 = item_644 + ~j_8 - 1 + 1;
                        i_8 = *i_8;
                    } while (i_8);

                    i_19 = i_29;
                }

                for (int32_t* i_9 = *i_19; i_9; i_9 = *i_9)
                {
                    int32_t j_9 = 0xffffffff;
                    void* dest_11 = &i_19[2];

                    while (j_9)
                    {
                        bool flag_17_1 = 0 != *dest_11;
                        dest_11 += 1;
                        j_9 -= 1;

                        if (!flag_17_1)
                            break;
                    }

                    Sys_CloseFileStream_4(flagP4, &i_19[2], ~j_9);
                    i_19 = i_9;
                }

                void* source_9 = item_63c;
                Sys_CloseFileStream_4(flagP4, source_9, item_638);
                Sys_OpenFileStream_5(source_9);
            }
            else
            {
                Error_Show("
                    INTERNAL ERROR: QVMAsm bin file size does not match computed program size!!!");

                while (true)
                    /* nop */
            }
        }
    }

    Log_Add("Cleaning up\n");
    int32_t* i_24 = i_28;

    for (int32_t* i_10 = *i_24; i_10; i_10 = *i_10)
    {
        Camera_ApplyHandiCam_33(i_24);
        Sys_ExecuteBytecode_2(i_24);
        i_24 = i_10;
    }

    int32_t* i_25 = i_29;

    for (int32_t* i_11 = *i_25; i_11; i_11 = *i_11)
    {
        Camera_ApplyHandiCam_33(i_25);
        Sys_ExecuteBytecode_2(i_25);
        i_25 = i_11;
    }

    int32_t* i_26 = i_30;

    for (int32_t* i_12 = *i_26; i_12; i_12 = *i_12)
    {
        Camera_ApplyHandiCam_33(i_26);
        Sys_ExecuteBytecode_2(i_26);
        i_26 = i_12;
    }

    int32_t* i_32 = i_27;
    int32_t* i_31 = *i_32;
    int32_t* i_15 = i_31;

    if (i_31)
    {
        int32_t* i_13;

        do
        {
            int32_t* j_14 = i_32[2];

            for (int32_t* j_10 = *j_14; j_10; j_10 = *j_10)
            {
                Camera_ApplyHandiCam_33(j_14);
                Sys_ExecuteBytecode_2(j_14);
                j_14 = j_10;
            }

            Symbol_Remove(data_6, &i_32[7]);
            Camera_ApplyHandiCam_33(i_32);
            Sys_ExecuteBytecode_2(i_32);
            i_32 = i_15;
            i_13 = *i_32;
            i_15 = i_13;
        } while (i_13);
    }

    DynObj_RegisterSymbol_2(data_6);
    QScript_Cleanup(&item_554);
    Sys_PopStack_30(&item_574);
    DynObj_RemoveSymbol_2(&item_588);
    Script_ParseEnumInt32_10(&item_634);
    Resource_Flush(data_5);
    Sys_ReadFileBlock_4(flagP4);
    return g_a43ed0;
}
