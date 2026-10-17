// Original IGI.EXE function: Sys_ResolveSymbol_24 (VA 0x004B9CD0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_24.h"
int32_t Sys_ResolveSymbol_24(int32_t* a1, char** a2, int32_t a3, int32_t a4)

{
    char* i_1 = nullptr;
    int32_t* srcS = a1;
    char* i_2 = nullptr;
    char* i_6 = nullptr;
    int32_t v_4 = 0;
    int32_t v_8 = 0;
    char* i_4 = nullptr;
    int32_t tmpD19;

    while (true)
    {
        if (v_8)
        {
            tmpD19 = v_4;
            break;
        }

        int32_t* objC2 = srcS[6];
        int32_t tmpD1 = srcS[5];
        a1 = objC2;

        if (a4 && objC2 == 0x18)
        {
            tmpD1 = 0;
        label_4b9d2a:

            switch (jump_table_4ba31c[tmpD1])
            {
                case 0x4b9d31:
                {
                    if (!i_1)
                    {
                        int32_t v_24_20 = DynObj_CreateMagicObject(srcS);
                        int32_t v_28_26 = DynObj_LookupHashItem(srcS);
                        Sys_FreeMemory_22("Syntax error in line %d: '%s'. Expected operand.");
                        i_1 = i_2;
                        tmpD19 = 1;
                        break;
                    }

                    if (objC2 != 0x1d)
                    {
                        if (!g_a43e80)
                        {
                            int32_t v_24_18 = DynObj_CreateMagicObject(srcS);
                            int32_t v_28_24 = DynObj_LookupHashItem(srcS);
                            Sys_FreeMemory_22("Syntax error in line %d: '%s'");
                            i_1 = i_2;
                            tmpD19 = 1;
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

                    char* i_3 = Sys_ScriptInternalErrorI(7, i_1, *(*srcS + 0xc), nullptr);
                    char* i_8 = i_2;
                    void* valA1 = *(i_8 + 0x20);

                    if (valA1)
                    {
                        if (*(valA1 + 0x18) == i_8)
                            *(valA1 + 0x18) = i_3;
                        else if (*(valA1 + 0x1c) != i_8)
                            *(valA1 + 8) = i_3;
                        else
                            *(valA1 + 0x1c) = i_3;
                    }

                    *(i_3 + 0x20) = *(i_2 + 0x20);

                    if (!Sys_CloseFileStream_31(srcS, &srcS[2]))
                    {
                    label_4ba156:
                        int32_t v_24_16 = DynObj_CreateMagicObject(srcS);
                        int32_t v_28_22 = DynObj_LookupHashItem(srcS);
                        Sys_FreeMemory_22("Unexpected end of file in line %d: '%s'");
                    }
                    else if (Sys_ResolveSymbol_24(srcS, &i_3[0x18], a3 + 1, 0))
                    {
                        if (srcS[6] != 0x1e)
                        {
                            int32_t v_24_14 = DynObj_CreateMagicObject(srcS);
                            int32_t v_28_20 = DynObj_LookupHashItem(srcS);
                            Sys_FreeMemory_22("Expected ':' in line %d: '%s'");
                        }
                        else
                        {
                            if (!Sys_CloseFileStream_31(srcS, &srcS[2]))
                                goto label_4ba156;

                            if (Sys_ResolveSymbol_24(srcS, &i_3[0x1c], a3 + 1, 0))
                            {
                                i_4 = i_6;
                                i_1 = i_3;
                                i_2 = i_1;
                                v_8 = 1;
                                g_a43e80 = 0;
                                continue;
                            }
                        }
                    }

                    i_1 = i_2;
                    i_4 = i_6;
                    tmpD19 = 1;
                    break;
                    break;
                }
                case 0x4b9e54:
                {
                label_4b9e54:
                    v_8 = 1;
                    continue;
                    continue;
                }
                case 0x4b9e5d:
                {
                    if (!i_1)
                    {
                        i_1 = Sys_ScriptInternalErrorI(2, srcS[7], *(*srcS + 0xc), nullptr);
                        i_2 = i_1;
                    }
                    else
                    {
                        if (*i_1 != 2)
                            goto label_4ba1ed;

                        i_1 = Sys_ScriptInternalErrorI(2, srcS[7], *(*srcS + 0xc), i_1);
                        i_2 = i_1;
                    }
                    break;
                }
                case 0x4b9ea7:
                {
                    if (i_1)
                    {
                    label_4ba1ed:
                        int32_t v_24_22 = DynObj_CreateMagicObject(srcS);
                        int32_t v_28_28 = DynObj_LookupHashItem(srcS);
                        Sys_FreeMemory_22("Syntax error in line %d: '%s'.");
                        i_1 = i_2;
                        tmpD19 = 1;
                        break;
                        break;
                    }

                    i_1 = Sys_ScriptInternalErrorI(3, &srcS[8], *(*srcS + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9ecd:
                {
                    if (i_1)
                        goto label_4ba1ed;

                    i_1 = Sys_ScriptInternalErrorI(1, &srcS[0xa], *(*srcS + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9ef2:
                {
                    if (i_1)
                        goto label_4ba1ed;

                    i_1 = Sys_ScriptInternalErrorI(5, srcS[7], *(*srcS + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9f18:
                {
                    if (objC2 != 0x15)
                    {
                        if (!i_1 || i_4)
                        {
                            if (objC2 == 1 || objC2 == 2)
                            {
                                void* tmpD12 = nullptr;
                                tmpD12 = objC2 != 1;
                                a1 = tmpD12 + 3;
                            }
                            else if (tmpD1 == 1)
                            {
                                int32_t v_24_28 = DynObj_CreateMagicObject(srcS);
                                int32_t v_28_35 = DynObj_LookupHashItem(srcS);
                                Sys_FreeMemory_22("Syntax error in line %d, '%s'. Binary operator requires lvalue.");
                            label_4ba295:
                                i_1 = i_2;
                                tmpD19 = 1;
                                break;
                                break;
                                break;
                            }
                        }

                        char* i_7 = Sys_ScriptInternalErrorI(8, &a1, *(*srcS + 0xc), nullptr);
                        i_1 = i_2;

                        if (i_1)
                        {
                            i_4 = *(i_1 + 0x20);
                            i_6 = i_4;
                        }

                        if (i_4)
                        {
                            int32_t valA21 = Sys_AllocateMemory_25(i_7[1]);
                            int32_t ctxB2 = -(valA21);
                            int32_t ctxB4 = -((ctxB2 - ctxB2));
                            int32_t valA22 = Sys_ScriptInternalErrorU(i_6[1]);

                            if (Sys_ScriptInternalErrorU(i_7[1]) + ctxB4 > valA22)
                            {
                                int32_t valA26;
                                int32_t valA28;

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
                                    valA26 = Sys_ScriptInternalErrorU(i_9[1]);
                                    valA28 = Sys_ScriptInternalErrorU(i_7[1]) + ctxB4;
                                } while (valA28 > valA26);
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
                        if (!Sys_CloseFileStream_31(srcS, &srcS[2]))
                        {
                            int32_t v_24_26 = DynObj_CreateMagicObject(srcS);
                            int32_t v_28_33 = DynObj_LookupHashItem(srcS);
                            Sys_FreeMemory_22("Unexpected end of file in line %d: '%s'");
                            i_1 = i_2;
                            tmpD19 = 1;
                            break;
                            break;
                        }

                        if (!Sys_ResolveSymbol_24(srcS, &i_2, a3 + 1, 0))
                            goto label_4ba295;

                        if (srcS[6] != 0x16)
                        {
                            Sys_PushStack_24(i_2);
                            i_2 = nullptr;
                            int32_t v_24_24 = DynObj_CreateMagicObject(srcS);
                            int32_t v_28_31 = DynObj_LookupHashItem(srcS);
                            Sys_FreeMemory_22("Expected ')' in line %d: '%s'");
                            i_1 = i_2;
                            tmpD19 = 1;
                            break;
                        }

                        i_1 = Sys_ScriptInternalErrorI(6, i_2, *(*srcS + 0xc), nullptr);
                        i_2 = i_1;
                    }
                    else
                    {
                        if (*i_1 != 5)
                            goto label_4ba1ed;

                        int32_t* valA13 = Sys_TooManyArgumentsToFu(srcS, nullptr);
                        *(i_2 + 0xc) = valA13;

                        if (!valA13)
                            goto label_4ba295;

                        i_1 = i_2;
                    }
                    break;
                }
            }
        }
        else if (tmpD1 <= 7)
            goto label_4b9d2a;

        if (i_1 && i_4)
        {
            *(i_4 + 0x1c) = i_1;
            *(i_2 + 0x20) = i_4;
            i_4 = nullptr;
            i_6 = nullptr;
        }

        if (!Sys_CloseFileStream_31(srcS, &srcS[2]))
            v_8 = 1;

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
            if (!tmpD19)
            {
                *a2 = i_1;
                return 1;
            }

            Sys_PushStack_24(i_1);
        }
    }

    while (srcS[6] != 0x17)
    {
        if (!Sys_CloseFileStream_31(srcS, &srcS[2]))
            break;
    }

    *a2 = nullptr;
    g_a43e80 = 0;
    return 0;
}
