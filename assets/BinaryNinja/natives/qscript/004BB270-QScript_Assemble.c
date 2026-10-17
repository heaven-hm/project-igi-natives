// Original IGI.EXE function: QScript_Assemble (VA 0x004BB270; static CFG gate PASS, CFG score 0.983).
#include "QScript_Assemble.h"
int32_t QScript_Assemble(void* a1, void* a2)

// Sig: int QScript_Assemble(char* srcText, int srcLen2)
// Note: ASSEMBLER stage of the script pipeline: strips comments via regex
// "{.*:(.*//)*}.*", initialises the parser ("Initialising parser."), generates
// assembly code and WRITES IT TO "LOCAL:qvmbin.tmp" (also referenced as
// /0qvmbin.tmp). Params: srcText = script source buffer, srcLen2 = secondary
// length/context arg. Returns assembly result.
{
    int32_t i = 0;
    int32_t v_554;

    if (!Sys_PushStack(nullptr, nullptr, "{.*:(.*//)*}.*", a1, 0))
    {
        v_554 = g_54794c[0];
        int32_t v_550_1 = g_54794c[4][0];
        int32_t v_54c_1 = g_54794c[8][0];
        int32_t v_548_1 = g_54794c[0xc][0];
        char v_544_1 = g_54794c[0x10][0];
    }
    else
        Sys_AllocateMemory_2(&v_554, 0x104, "/0qvmbin.tmp", a1);

    char* __saved_edi_2 = &g_538354;
    g_a43ed0 = 0;
    int32_t* valA2 = QFile_ReadWrite(a1, __saved_edi_2);
    int32_t* v_644 = valA2;
    void* v_620;

    if (!valA2)
    {
        void* __saved_edi_3 = a1;
        void** v_65c_32 = &v_620;
        Sys_FreeMemory_26("Failed to open file '%s' for writing.");
        return g_a43ed0;
    }

    int32_t valA3;
    void* objC3;
    int32_t tmpD3;
    valA3 = Sys_AllocateMemory_16(a2);

    if (!valA3)
    {
        void* v_658_38 = a2;
        void** v_660_20 = &v_620;
        Sys_FreeMemory_26("Failed to load assembler source file: '%s'");
        Sys_ReadFileBlock_4(v_644);
        return g_a43ed0;
    }

    void* v_65c_2 = a2;
    int32_t v_5c8;
    int32_t* valA5 = Resource_Load(&v_5c8, tmpD3, objC3, &v_5c8);
    Log_Add("Initialising parser.\n");
    void v_634;
    DynObj_ParseConfigFile_2(&v_634);
    int32_t v_668 = 1;
    int32_t v_66c = 1;
    char* v_670 = "[ \t\n\r]+";
    DynObj_UpdateDynTree_2(&v_634, v_670, v_66c, v_668);
    DynObj_UpdateDynTree_2(&v_634, ""([~\\"]*(\.)*)*"", 2, 1);
    DynObj_UpdateDynTree_2(&v_634, "[a-zA-Z][a-zA-Z0-9_]*:", 0xa, 1);
    DynObj_UpdateDynTree_2(&v_634, "-?[0-9]+/.[0-9]+", 5, 1);
    int32_t v_668_1 = 1;
    int32_t v_66c_1 = 6;
    v_670 = &g_5478e4;
    DynObj_UpdateDynTree_2(&v_634, v_670, v_66c_1, v_668_1);
    DynObj_UpdateDynTree_2(&v_634, "/(", 7, 1);
    DynObj_UpdateDynTree_2(&v_634, "/)", 8, 1);
    DynObj_UpdateDynTree_2(&v_634, "0x[0-9a-fA-F]+", 3, 1);
    int32_t v_668_2 = 1;
    int32_t v_66c_2 = 0xb;
    v_670 = "[0-9a-zA-Z]+:";
    DynObj_UpdateDynTree_2(&v_634, v_670, v_66c_2, v_668_2);
    DynObj_UpdateDynTree_2(&v_634, "@[0-9a-zA-Z]+", 0xc, 1);
    DynObj_UpdateDynTree_2(&v_634, "[a-zA-Z][a-zA-Z0-9_.]*", 9, 0);
    DynObj_UpdateDynTree_2(&v_634, "-?[0-9]+", 4, 0);
    int32_t tmpD4 = v_5c8;
    void v_574;
    v_670 = &v_574;
    Sys_ResolveSymbol_30(v_670, valA5, tmpD4);
    void v_588;
    DynObj_LinkDynamicCube_2(&v_588, &v_634, &v_574);
    __builtin_memset(&v_620, 0, 0x50);
    void* v_608 = &v_588;
    void v_450;
    void* v_60c = &v_450;
    int32_t v_5fc;
    int32_t* i_27 = &v_5fc;
    int32_t** v_5f8 = &i_27;
    int32_t v_5e4;
    int32_t* i_29 = &v_5e4;
    int32_t** v_5e0 = &i_29;
    int32_t v_5f0;
    int32_t* i_28 = &v_5f0;
    void* v_638 = nullptr;
    int32_t* v_610 = valA2;
    v_620 = nullptr;
    v_5fc = 0;
    v_5e4 = 0;
    int32_t** v_5ec = &i_28;
    v_5f0 = 0;
    int32_t v_5d8;
    int32_t* i_30 = &v_5d8;
    int32_t** v_5d4 = &i_30;
    v_5d8 = 0;
    int32_t* valA6 = DynObj_RemoveSymbol(0x12ccb);
    void v_188;
    void* ctxB1 = &v_188;
    int32_t v_628;

    do
    {
        Sys_FreeMemory_29(i, 1, &v_628, 0);
        int32_t* dstD1 = &v_628;
        int32_t j = 0xffffffff;

        while (j)
        {
            bool cond_1_1 = 0 != *dstD1;
            dstD1 += 1;
            j -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC4 = ~j;
        void* dstD3 = ctxB1;
        ctxB1 += 8;
        int32_t srcS4;
        int32_t dstD4;
        dstD4 = memcpy(dstD3, dstD1 - objC4, objC4 & 0xfffffffc);
        i += 1;
        memcpy(dstD4, srcS4, objC4 & 3);
    } while (i < 0x31);

    int32_t* valA8 = QFile_ReadWrite(&v_554, "w");
    int32_t* flagP4;

    if (!valA8)
    {
        int32_t* v_658_29 = &v_554;
        void** v_660_17 = &v_620;
        Sys_FreeMemory_26("Failed to create temporary file '%s'.");
        flagP4 = v_644;
    }
    else
    {
        Log_Add("Assembling\n");
        int32_t v_614_1 = 2;
        int32_t* v_610_1 = valA8;
        int32_t valA9;
        int32_t objC8;
        valA9 = Sys_PushStack_26(&v_450, &v_588);
        void* v_63c;
        int32_t i_1;

        if (valA9)
        {
            while (!i_1)
            {
                int32_t v_18c;
                char j_12;

                if (v_18c == 0xa)
                {
                    int32_t* valA12 = Sys_DuplicateLabelS(&v_620, &j_12);

                    if (valA12)
                    {
                        valA12[5] = 1;
                        valA12[6] = v_638;
                    }
                }
                else if (v_18c != 0xb && v_18c == 9)
                {
                    char j_1 = j_12;

                    if (j_1)
                    {
                        char* srcS6 = &j_12;

                        do
                        {
                            int32_t j_11 = j_1;
                            char valA13;
                            valA13 = Camera_ApplyWideScreen_28(objC8);
                            *srcS6 = valA13;
                            j_1 = srcS6[1];
                            srcS6 = &srcS6[1];
                        } while (j_1);
                    }

                    int32_t dstD5 = 0;
                    char* flagP = &v_188;

                    while (true)
                    {
                        char* srcS7 = flagP;
                        char* valA14 = &j_12;
                        int32_t valA16;

                        while (true)
                        {
                            char tmpD6 = *valA14;
                            char f0_1 = *srcS7;
                            bool c_1 = tmpD6 < f0_1;

                            if (tmpD6 == f0_1)
                            {
                                if (!tmpD6)
                                {
                                    valA16 = 0;
                                    break;
                                }

                                tmpD6 = valA14[1];
                                char f3_1 = srcS7[1];
                                c_1 = tmpD6 < f3_1;

                                if (tmpD6 == f3_1)
                                {
                                    valA14 = &valA14[2];
                                    srcS7 = &srcS7[2];

                                    if (tmpD6)
                                        continue;

                                    valA16 = 0;
                                    break;
                                }
                            }

                            valA16 = valA14 - valA14 + 1;
                            break;
                        }

                        if (valA16)
                        {
                            dstD5 += 1;
                            flagP = &flagP[8];

                            if (dstD5 < 0x31)
                                continue;
                        }
                        else if (dstD5 < 0x31)
                        {
                            void** v_658_17 = &v_620;
                            void** v_65c_13 = &v_63c;
                            v_63c = nullptr;
                            Sys_FreeMemory_29(dstD5, v_614_1, v_65c_13, v_658_17);
                            void* valA22 = v_638 + v_63c;
                            v_638 = valA22;
                            v_620 = valA22;
                            break;
                        }

                        char* v_658_12 = &j_12;
                        void** v_660_7 = &v_620;
                        i_1 = 1;
                        Sys_FreeMemory_26("Unknown opcode: %s\n");
                        break;
                    }
                }
                int32_t valA17;
                valA17 = Sys_PushStack_26(&v_450, &v_588);

                if (!valA17)
                    break;
            }
        }

        Sys_ReadFileBlock_4(valA8);

        if (i_1)
            flagP4 = v_644;
        else
        {
            int32_t v_5cc;
            void* ctxB2 = Resource_PackUnpack(&v_554, &v_5cc);
            v_63c = ctxB2;

            if (!ctxB2)
                flagP4 = v_644;
            else if (v_5cc == v_638)
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
                                    int32_t v_658_19 = j_13[2];
                                    void* v_65c_14 = &i_21[7];
                                    int32_t* v_664_6 = &v_620;
                                    Sys_FreeMemory_26("Unknown label '%s' at PC:%08x\n");
                                }

                                void* flagP1 = v_63c;
                                v_628 = i_21[6] - j_13[3];

                                for (int32_t k = 0; k < 4; )
                                {
                                    char tmpD11 = *(&v_628 + k);
                                    char* objC15 = j_13[2] + k;
                                    k += 1;
                                    *(objC15 + flagP1) = tmpD11;
                                }

                                Camera_ApplyHandiCam_33(j_13);
                                Sys_ExecuteBytecode_2(j_13);
                                j_13 = j_2;
                                j_2 = *j_2;
                            } while (j_2);

                            i_2 = i_14;
                        }

                        Symbol_Remove(valA6, &i_21[7]);
                        Camera_ApplyHandiCam_33(i_21);
                        Sys_ExecuteBytecode_2(i_21);
                        i_21 = i_2;
                        i_2 = *i_2;
                        i_14 = i_2;
                    } while (i_2);

                    ctxB2 = v_63c;
                }

                int32_t* i_20 = i_30;

                for (int32_t* i_3 = *i_20; i_3; i_3 = *i_3)
                {
                    int32_t j_3 = 0;
                    v_628 = i_20[3];

                    do
                    {
                        char tmpD13 = *(&v_628 + j_3);
                        char* objC18 = i_20[2] + j_3;
                        j_3 += 1;
                        *(objC18 + ctxB2) = tmpD13;
                    } while (j_3 < 4);

                    Camera_ApplyHandiCam_33(i_20);
                    Sys_ExecuteBytecode_2(i_20);
                    i_20 = i_3;
                }

                int32_t* i_16 = i_28;
                char v_5c4;
                __builtin_strncpy(&v_5c4, "LOOP", 4);
                int32_t v_5c0_1 = 8;
                int32_t v_58c_1 = 0;
                int32_t v_590_1 = 0;
                int32_t v_5bc_1 = 5;
                int32_t* i_4 = *i_16;
                int32_t srcS8 = 0;
                int32_t ctxB3 = 0;

                while (i_4)
                {
                    void* dstD6 = &i_16[2];
                    int32_t j_4 = 0xffffffff;

                    while (j_4)
                    {
                        bool cond_8_1 = 0 != *dstD6;
                        dstD6 += 1;
                        j_4 -= 1;

                        if (!cond_8_1)
                            break;
                    }

                    i_16 = i_4;
                    i_4 = *i_4;
                    ctxB3 += 1;
                    srcS8 = srcS8 + ~j_4 - 1 + 1;
                }

                int32_t* i_17 = i_29;
                int32_t tmpD14 = ctxB3 << 2;
                int32_t v_5b0_1 = tmpD14;
                int32_t v_5b4_1 = tmpD14 + 0x3c;
                int32_t v_5b8_1 = 0x3c;
                int32_t v_5ac_1 = srcS8;
                int32_t tmpD16 = tmpD14 + 0x3c + srcS8;
                int32_t* i_5 = *i_17;
                int32_t flagP2 = 0;
                int32_t ctxB4 = 0;

                while (i_5)
                {
                    void* dstD7 = &i_17[2];
                    int32_t j_5 = 0xffffffff;

                    while (j_5)
                    {
                        bool cond_11_1 = 0 != *dstD7;
                        dstD7 += 1;
                        j_5 -= 1;

                        if (!cond_11_1)
                            break;
                    }

                    i_17 = i_5;
                    i_5 = *i_5;
                    ctxB4 += 1;
                    flagP2 = ~j_5 - 1 + flagP2 + 1;
                }

                int32_t valA29 = ctxB4 << 2;
                int32_t v_5a8_1 = tmpD16;
                int32_t tmpD17 = tmpD16 + valA29;
                int32_t v_59c_1 = flagP2;
                int32_t v_598_1 = flagP2 + tmpD17;
                flagP4 = v_644;
                int32_t v_5a0_1 = valA29;
                int32_t v_5a4_1 = tmpD17;
                void* v_594_1 = v_638;
                Sys_CloseFileStream_4(flagP4, &v_5c4, 0x3c);
                int32_t* i_22 = i_28;
                v_644 = nullptr;
                int32_t* i_6 = *i_22;

                if (i_6)
                {
                    do
                    {
                        Sys_CloseFileStream_4(flagP4, &v_644, 4);
                        void* dstD8 = &i_22[2];
                        int32_t j_6 = 0xffffffff;

                        while (j_6)
                        {
                            bool cond_14_1 = 0 != *dstD8;
                            dstD8 += 1;
                            j_6 -= 1;

                            if (!cond_14_1)
                                break;
                        }

                        i_22 = i_6;
                        v_644 = v_644 + ~j_6 - 1 + 1;
                        i_6 = *i_6;
                    } while (i_6);

                    i_22 = i_28;
                }

                int32_t* i_7 = *i_22;
                int32_t* i_18 = i_22;

                for (; i_7; i_7 = *i_7)
                {
                    int32_t j_7 = 0xffffffff;
                    void* dstD9 = &i_18[2];

                    while (j_7)
                    {
                        bool cond_15_1 = 0 != *dstD9;
                        dstD9 += 1;
                        j_7 -= 1;

                        if (!cond_15_1)
                            break;
                    }

                    Sys_CloseFileStream_4(flagP4, &i_18[2], ~j_7);
                    i_18 = i_7;
                }

                int32_t* i_19 = i_29;
                v_644 = nullptr;
                int32_t* i_23 = i_19;
                int32_t* i_8 = *i_19;

                if (i_8)
                {
                    do
                    {
                        Sys_CloseFileStream_4(flagP4, &v_644, 4);
                        void* dstD10 = &i_23[2];
                        int32_t j_8 = 0xffffffff;

                        while (j_8)
                        {
                            bool cond_16_1 = 0 != *dstD10;
                            dstD10 += 1;
                            j_8 -= 1;

                            if (!cond_16_1)
                                break;
                        }

                        i_23 = i_8;
                        v_644 = v_644 + ~j_8 - 1 + 1;
                        i_8 = *i_8;
                    } while (i_8);

                    i_19 = i_29;
                }

                for (int32_t* i_9 = *i_19; i_9; i_9 = *i_9)
                {
                    int32_t j_9 = 0xffffffff;
                    void* dstD11 = &i_19[2];

                    while (j_9)
                    {
                        bool cond_17_1 = 0 != *dstD11;
                        dstD11 += 1;
                        j_9 -= 1;

                        if (!cond_17_1)
                            break;
                    }

                    Sys_CloseFileStream_4(flagP4, &i_19[2], ~j_9);
                    i_19 = i_9;
                }

                void* srcS9 = v_63c;
                Sys_CloseFileStream_4(flagP4, srcS9, v_638);
                Sys_OpenFileStream_5(srcS9);
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

            Symbol_Remove(valA6, &i_32[7]);
            Camera_ApplyHandiCam_33(i_32);
            Sys_ExecuteBytecode_2(i_32);
            i_32 = i_15;
            i_13 = *i_32;
            i_15 = i_13;
        } while (i_13);
    }

    DynObj_RegisterSymbol_2(valA6);
    QScript_Cleanup(&v_554);
    Sys_PopStack_30(&v_574);
    DynObj_RemoveSymbol_2(&v_588);
    Script_ParseEnumInt32_10(&v_634);
    Resource_Flush(valA5);
    Sys_ReadFileBlock_4(flagP4);
    return g_a43ed0;
}
