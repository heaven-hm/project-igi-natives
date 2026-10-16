#include "004BB270-QScript_Assemble.h"
/* 0x004bb270 QScript_Assemble full linked: callers=2 callees=77 */
int32_t QScript_Assemble(void* a1, void* a2)

// Sig: int QScript_Assemble(char* srcText, int srcLen2)
// Note: ASSEMBLER stage of the script pipeline: strips comments via regex
// "{.*:(.*//)*}.*", initialises the parser ("Initialising parser."), generates
// assembly code and WRITES IT TO "LOCAL:qvmbin.tmp" (also referenced as
// /0qvmbin.tmp). Params: srcText = script source buffer, srcLen2 = secondary
// length/context arg. Returns assembly result.
{
    int32_t i = 0;
    int32_t var_554;

    if (!sub_4b08a0(nullptr, nullptr, "{.*:(.*//)*}.*", a1, 0))
    {
        var_554 = g_54794c[0];
        int32_t var_550_1 = g_54794c[4][0];
        int32_t var_54c_1 = g_54794c[8][0];
        int32_t var_548_1 = g_54794c[0xc][0];
        char var_544_1 = g_54794c[0x10][0];
    }
    else
        sub_4b0a80(&var_554, 0x104, "/0qvmbin.tmp", a1);

    char* __saved_edi_2 = &g_538354;
    g_a43ed0 = 0;
    int32_t* eax_2 = QFile_ReadWrite(a1, __saved_edi_2);
    int32_t* var_644 = eax_2;
    void* var_620;

    if (!eax_2)
    {
        void* __saved_edi_3 = a1;
        void** var_65c_32 = &var_620;
        sub_4baf30("Failed to open file '%s' for writing.");
        return g_a43ed0;
    }

    int32_t eax_3;
    void* ecx_3;
    int32_t edx_3;
    eax_3 = sub_4b5b60(a2);

    if (!eax_3)
    {
        void* var_658_38 = a2;
        void** var_660_20 = &var_620;
        sub_4baf30("Failed to load assembler source file: '%s'");
        sub_4b1690(var_644);
        return g_a43ed0;
    }

    void* var_65c_2 = a2;
    int32_t var_5c8;
    int32_t* eax_5 = Resource_Load(&var_5c8, edx_3, ecx_3, &var_5c8);
    Log_Add("Initialising parser.\n");
    void var_634;
    sub_4c0660(&var_634);
    int32_t var_668 = 1;
    int32_t var_66c = 1;
    char* var_670 = "[ \t\n\r]+";
    sub_4c0680(&var_634, var_670, var_66c, var_668);
    sub_4c0680(&var_634, ""([~\\"]*(\.)*)*"", 2, 1);
    sub_4c0680(&var_634, "[a-zA-Z][a-zA-Z0-9_]*:", 0xa, 1);
    sub_4c0680(&var_634, "-?[0-9]+/.[0-9]+", 5, 1);
    int32_t var_668_1 = 1;
    int32_t var_66c_1 = 6;
    var_670 = &g_5478e4;
    sub_4c0680(&var_634, var_670, var_66c_1, var_668_1);
    sub_4c0680(&var_634, "/(", 7, 1);
    sub_4c0680(&var_634, "/)", 8, 1);
    sub_4c0680(&var_634, "0x[0-9a-fA-F]+", 3, 1);
    int32_t var_668_2 = 1;
    int32_t var_66c_2 = 0xb;
    var_670 = "[0-9a-zA-Z]+:";
    sub_4c0680(&var_634, var_670, var_66c_2, var_668_2);
    sub_4c0680(&var_634, "@[0-9a-zA-Z]+", 0xc, 1);
    sub_4c0680(&var_634, "[a-zA-Z][a-zA-Z0-9_.]*", 9, 0);
    sub_4c0680(&var_634, "-?[0-9]+", 4, 0);
    int32_t edx_4 = var_5c8;
    void var_574;
    var_670 = &var_574;
    sub_4bf1c0(var_670, eax_5, edx_4);
    void var_588;
    sub_4c0720(&var_588, &var_634, &var_574);
    __builtin_memset(&var_620, 0, 0x50);
    void* var_608 = &var_588;
    void var_450;
    void* var_60c = &var_450;
    int32_t var_5fc;
    int32_t* i_27 = &var_5fc;
    int32_t** var_5f8 = &i_27;
    int32_t var_5e4;
    int32_t* i_29 = &var_5e4;
    int32_t** var_5e0 = &i_29;
    int32_t var_5f0;
    int32_t* i_28 = &var_5f0;
    void* var_638 = nullptr;
    int32_t* var_610 = eax_2;
    var_620 = nullptr;
    var_5fc = 0;
    var_5e4 = 0;
    int32_t** var_5ec = &i_28;
    var_5f0 = 0;
    int32_t var_5d8;
    int32_t* i_30 = &var_5d8;
    int32_t** var_5d4 = &i_30;
    var_5d8 = 0;
    int32_t* eax_6 = sub_4c0360(0x12ccb);
    void var_188;
    void* ebx_1 = &var_188;
    int32_t var_628;

    do
    {
        sub_4bd3f0(i, 1, &var_628, 0);
        int32_t* edi_1 = &var_628;
        int32_t j = 0xffffffff;

        while (j)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 += 1;
            j -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_4 = ~j;
        void* edi_3 = ebx_1;
        ebx_1 += 8;
        int32_t esi_4;
        int32_t edi_4;
        edi_4 = memcpy(edi_3, edi_1 - ecx_4, ecx_4 & 0xfffffffc);
        i += 1;
        memcpy(edi_4, esi_4, ecx_4 & 3);
    } while (i < 0x31);

    int32_t* eax_8 = QFile_ReadWrite(&var_554, "w");
    int32_t* ebp_4;

    if (!eax_8)
    {
        int32_t* var_658_29 = &var_554;
        void** var_660_17 = &var_620;
        sub_4baf30("Failed to create temporary file '%s'.");
        ebp_4 = var_644;
    }
    else
    {
        Log_Add("Assembling\n");
        int32_t var_614_1 = 2;
        int32_t* var_610_1 = eax_8;
        int32_t eax_9;
        int32_t ecx_8;
        eax_9 = sub_4bb240(&var_450, &var_588);
        void* var_63c;
        int32_t i_1;

        if (eax_9)
        {
            while (!i_1)
            {
                int32_t var_18c;
                char j_12;

                if (var_18c == 0xa)
                {
                    int32_t* eax_12 = sub_4bae00(&var_620, &j_12);

                    if (eax_12)
                    {
                        eax_12[5] = 1;
                        eax_12[6] = var_638;
                    }
                }
                else if (var_18c != 0xb && var_18c == 9)
                {
                    char j_1 = j_12;

                    if (j_1)
                    {
                        char* esi_6 = &j_12;

                        do
                        {
                            int32_t j_11 = j_1;
                            char eax_13;
                            eax_13 = sub_4ad73d(ecx_8);
                            *esi_6 = eax_13;
                            j_1 = esi_6[1];
                            esi_6 = &esi_6[1];
                        } while (j_1);
                    }

                    int32_t edi_5 = 0;
                    char* ebp = &var_188;

                    while (true)
                    {
                        char* esi_7 = ebp;
                        char* eax_14 = &j_12;
                        int32_t eax_16;

                        while (true)
                        {
                            char edx_6 = *eax_14;
                            char temp0_1 = *esi_7;
                            bool c_1 = edx_6 < temp0_1;

                            if (edx_6 == temp0_1)
                            {
                                if (!edx_6)
                                {
                                    eax_16 = 0;
                                    break;
                                }

                                edx_6 = eax_14[1];
                                char temp3_1 = esi_7[1];
                                c_1 = edx_6 < temp3_1;

                                if (edx_6 == temp3_1)
                                {
                                    eax_14 = &eax_14[2];
                                    esi_7 = &esi_7[2];

                                    if (edx_6)
                                        continue;

                                    eax_16 = 0;
                                    break;
                                }
                            }

                            eax_16 = eax_14 - eax_14 + 1;
                            break;
                        }

                        if (eax_16)
                        {
                            edi_5 += 1;
                            ebp = &ebp[8];

                            if (edi_5 < 0x31)
                                continue;
                        }
                        else if (edi_5 < 0x31)
                        {
                            void** var_658_17 = &var_620;
                            void** var_65c_13 = &var_63c;
                            var_63c = nullptr;
                            sub_4bd3f0(edi_5, var_614_1, var_65c_13, var_658_17);
                            void* eax_22 = var_638 + var_63c;
                            var_638 = eax_22;
                            var_620 = eax_22;
                            break;
                        }

                        char* var_658_12 = &j_12;
                        void** var_660_7 = &var_620;
                        i_1 = 1;
                        sub_4baf30("Unknown opcode: %s\n");
                        break;
                    }
                }
                int32_t eax_17;
                eax_17 = sub_4bb240(&var_450, &var_588);

                if (!eax_17)
                    break;
            }
        }

        sub_4b1690(eax_8);

        if (i_1)
            ebp_4 = var_644;
        else
        {
            int32_t var_5cc;
            void* ebx_2 = Resource_PackUnpack(&var_554, &var_5cc);
            var_63c = ebx_2;

            if (!ebx_2)
                ebp_4 = var_644;
            else if (var_5cc == var_638)
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
                                    int32_t var_658_19 = j_13[2];
                                    void* var_65c_14 = &i_21[7];
                                    int32_t* var_664_6 = &var_620;
                                    sub_4baf30("Unknown label '%s' at PC:%08x\n");
                                }

                                void* ebp_1 = var_63c;
                                var_628 = i_21[6] - j_13[3];

                                for (int32_t k = 0; k < 4; )
                                {
                                    char edx_11 = *(&var_628 + k);
                                    char* ecx_15 = j_13[2] + k;
                                    k += 1;
                                    *(ecx_15 + ebp_1) = edx_11;
                                }

                                sub_4af960(j_13);
                                sub_4b0d10(j_13);
                                j_13 = j_2;
                                j_2 = *j_2;
                            } while (j_2);

                            i_2 = i_14;
                        }

                        Symbol_Remove(eax_6, &i_21[7]);
                        sub_4af960(i_21);
                        sub_4b0d10(i_21);
                        i_21 = i_2;
                        i_2 = *i_2;
                        i_14 = i_2;
                    } while (i_2);

                    ebx_2 = var_63c;
                }

                int32_t* i_20 = i_30;

                for (int32_t* i_3 = *i_20; i_3; i_3 = *i_3)
                {
                    int32_t j_3 = 0;
                    var_628 = i_20[3];

                    do
                    {
                        char edx_13 = *(&var_628 + j_3);
                        char* ecx_18 = i_20[2] + j_3;
                        j_3 += 1;
                        *(ecx_18 + ebx_2) = edx_13;
                    } while (j_3 < 4);

                    sub_4af960(i_20);
                    sub_4b0d10(i_20);
                    i_20 = i_3;
                }

                int32_t* i_16 = i_28;
                char var_5c4;
                __builtin_strncpy(&var_5c4, "LOOP", 4);
                int32_t var_5c0_1 = 8;
                int32_t var_58c_1 = 0;
                int32_t var_590_1 = 0;
                int32_t var_5bc_1 = 5;
                int32_t* i_4 = *i_16;
                int32_t esi_8 = 0;
                int32_t ebx_3 = 0;

                while (i_4)
                {
                    void* edi_6 = &i_16[2];
                    int32_t j_4 = 0xffffffff;

                    while (j_4)
                    {
                        bool cond:8_1 = 0 != *edi_6;
                        edi_6 += 1;
                        j_4 -= 1;

                        if (!cond:8_1)
                            break;
                    }

                    i_16 = i_4;
                    i_4 = *i_4;
                    ebx_3 += 1;
                    esi_8 = esi_8 + ~j_4 - 1 + 1;
                }

                int32_t* i_17 = i_29;
                int32_t edx_14 = ebx_3 << 2;
                int32_t var_5b0_1 = edx_14;
                int32_t var_5b4_1 = edx_14 + 0x3c;
                int32_t var_5b8_1 = 0x3c;
                int32_t var_5ac_1 = esi_8;
                int32_t edx_16 = edx_14 + 0x3c + esi_8;
                int32_t* i_5 = *i_17;
                int32_t ebp_2 = 0;
                int32_t ebx_4 = 0;

                while (i_5)
                {
                    void* edi_7 = &i_17[2];
                    int32_t j_5 = 0xffffffff;

                    while (j_5)
                    {
                        bool cond:11_1 = 0 != *edi_7;
                        edi_7 += 1;
                        j_5 -= 1;

                        if (!cond:11_1)
                            break;
                    }

                    i_17 = i_5;
                    i_5 = *i_5;
                    ebx_4 += 1;
                    ebp_2 = ~j_5 - 1 + ebp_2 + 1;
                }

                int32_t eax_29 = ebx_4 << 2;
                int32_t var_5a8_1 = edx_16;
                int32_t edx_17 = edx_16 + eax_29;
                int32_t var_59c_1 = ebp_2;
                int32_t var_598_1 = ebp_2 + edx_17;
                ebp_4 = var_644;
                int32_t var_5a0_1 = eax_29;
                int32_t var_5a4_1 = edx_17;
                void* var_594_1 = var_638;
                sub_4b1700(ebp_4, &var_5c4, 0x3c);
                int32_t* i_22 = i_28;
                var_644 = nullptr;
                int32_t* i_6 = *i_22;

                if (i_6)
                {
                    do
                    {
                        sub_4b1700(ebp_4, &var_644, 4);
                        void* edi_8 = &i_22[2];
                        int32_t j_6 = 0xffffffff;

                        while (j_6)
                        {
                            bool cond:14_1 = 0 != *edi_8;
                            edi_8 += 1;
                            j_6 -= 1;

                            if (!cond:14_1)
                                break;
                        }

                        i_22 = i_6;
                        var_644 = var_644 + ~j_6 - 1 + 1;
                        i_6 = *i_6;
                    } while (i_6);

                    i_22 = i_28;
                }

                int32_t* i_7 = *i_22;
                int32_t* i_18 = i_22;

                for (; i_7; i_7 = *i_7)
                {
                    int32_t j_7 = 0xffffffff;
                    void* edi_9 = &i_18[2];

                    while (j_7)
                    {
                        bool cond:15_1 = 0 != *edi_9;
                        edi_9 += 1;
                        j_7 -= 1;

                        if (!cond:15_1)
                            break;
                    }

                    sub_4b1700(ebp_4, &i_18[2], ~j_7);
                    i_18 = i_7;
                }

                int32_t* i_19 = i_29;
                var_644 = nullptr;
                int32_t* i_23 = i_19;
                int32_t* i_8 = *i_19;

                if (i_8)
                {
                    do
                    {
                        sub_4b1700(ebp_4, &var_644, 4);
                        void* edi_10 = &i_23[2];
                        int32_t j_8 = 0xffffffff;

                        while (j_8)
                        {
                            bool cond:16_1 = 0 != *edi_10;
                            edi_10 += 1;
                            j_8 -= 1;

                            if (!cond:16_1)
                                break;
                        }

                        i_23 = i_8;
                        var_644 = var_644 + ~j_8 - 1 + 1;
                        i_8 = *i_8;
                    } while (i_8);

                    i_19 = i_29;
                }

                for (int32_t* i_9 = *i_19; i_9; i_9 = *i_9)
                {
                    int32_t j_9 = 0xffffffff;
                    void* edi_11 = &i_19[2];

                    while (j_9)
                    {
                        bool cond:17_1 = 0 != *edi_11;
                        edi_11 += 1;
                        j_9 -= 1;

                        if (!cond:17_1)
                            break;
                    }

                    sub_4b1700(ebp_4, &i_19[2], ~j_9);
                    i_19 = i_9;
                }

                void* esi_9 = var_63c;
                sub_4b1700(ebp_4, esi_9, var_638);
                sub_4b1a30(esi_9);
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
        sub_4af960(i_24);
        sub_4b0d10(i_24);
        i_24 = i_10;
    }

    int32_t* i_25 = i_29;

    for (int32_t* i_11 = *i_25; i_11; i_11 = *i_11)
    {
        sub_4af960(i_25);
        sub_4b0d10(i_25);
        i_25 = i_11;
    }

    int32_t* i_26 = i_30;

    for (int32_t* i_12 = *i_26; i_12; i_12 = *i_12)
    {
        sub_4af960(i_26);
        sub_4b0d10(i_26);
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
                sub_4af960(j_14);
                sub_4b0d10(j_14);
                j_14 = j_10;
            }

            Symbol_Remove(eax_6, &i_32[7]);
            sub_4af960(i_32);
            sub_4b0d10(i_32);
            i_32 = i_15;
            i_13 = *i_32;
            i_15 = i_13;
        } while (i_13);
    }

    sub_4c03c0(eax_6);
    QScript_Cleanup(&var_554);
    sub_4befc0(&var_574);
    sub_4c0750(&var_588);
    sub_4f1d80(&var_634);
    Resource_Flush(eax_5);
    sub_4b1690(ebp_4);
    return g_a43ed0;
}
