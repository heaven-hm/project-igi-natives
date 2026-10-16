#include "gi_platform.h"
#include "004BC2F0-Sys_UnknownExpressionTyp.h"
void Sys_UnknownExpressionTyp(int32_t* a1, char* a2)

{
    char* dstD = a2;

    if (!dstD)
        return;

    while (true)
    {
        int32_t valA2 = *dstD - 1;
        char v_40;

        if (valA2 > 7)
        {
            Error_Show("Unknown expression type");

            while (true)
                /* nop */
        }
        else
            switch (valA2)
            {
                case 0:
                {
                    Sys_FreeMemory_27(2, a1);
                    Sys_PopStack_27(a1, (*(int32_t*)(uintptr_t)(dstD + 8)));
                    Sys_OpenFileStream_27(a1);
                    return;
                    break;
                }
                case 1:
                {
                    Sys_FreeMemory_27(7, a1);
                    Sys_DispatchOpcode_27(a1, (*(int32_t*)(uintptr_t)(dstD + 8)));
                    Sys_OpenFileStream_27(a1);
                    return;
                    break;
                }
                case 2:
                {
                    Sys_FreeMemory_27(5, a1);
                    Sys_ResolveSymbol_27(a1, (*(int32_t*)(uintptr_t)(dstD + 8)), (*(int32_t*)(uintptr_t)(dstD + 0xc)));
                    Sys_OpenFileStream_27(a1);
                    return;
                    break;
                }
                case 3:
                case 4:
                {
                    int32_t* srcS4 = a1;
                    Sys_FreeMemory_27(0xb, srcS4);
                    Sys_CloseFileStream_27(srcS4, (*(int32_t*)(uintptr_t)(dstD + 0x10)));
                    Sys_OpenFileStream_27(srcS4);
                    int32_t* dstD1 = (*(int32_t*)(uintptr_t)(dstD + 0xc));

                    if (!dstD1)
                        break;

                    int32_t flagP = *dstD1;
                    Sys_FreeMemory_27(0x18, srcS4);
                    Sys_CloseFileStream_27(srcS4, &g_547a4c);
                    int32_t ctxB = 0;
                    a1 = nullptr;

                    if (flagP > 0)
                    {
                        do
                        {
                            if (a1 >= 5)
                            {
                                a1 = nullptr;
                                Sys_OpenFileStream_27(srcS4);
                                Sys_ExecuteBytecode_27(srcS4);
                            }

                            Sys_ReadFileBlock_27(&v_40, 0x547a48, (*(int32_t*)(uintptr_t)(dstD1[2] + (ctxB << 2))));
                            Sys_CloseFileStream_27(srcS4, &v_40);

                            if (ctxB < flagP - 1)
                                Sys_CloseFileStream_27(srcS4, &g_547a44);

                            ctxB += 1;
                            a1 += 1;
                        } while (ctxB < flagP);
                    }

                    Sys_CloseFileStream_27(srcS4, &g_547a40);
                    Sys_OpenFileStream_27(srcS4);
                    Sys_ReadFileBlock_27(&v_40, 0x547a3c, dstD1);
                    Sys_FreeMemory_27(0x14, srcS4);
                    Sys_CloseFileStream_27(srcS4, &v_40);
                    Sys_OpenFileStream_27(srcS4);
                    int32_t ctxB1 = 0;

                    if (flagP > 0)
                    {
                        do
                        {
                            Sys_ReadFileBlock_27(&v_40, 0x547a48, *(dstD1[2] + (ctxB1 << 2)));
                            Sys_CloseFileStream_27(srcS4, &v_40);
                            Sys_CloseFileStream_27(srcS4, 0x5479e8);
                            Sys_OpenFileStream_27(srcS4);
                            Sys_UnknownExpressionTyp(srcS4, *(dstD1[2] + (ctxB1 << 2)));
                            Sys_FreeMemory_27(0, srcS4);
                            Sys_OpenFileStream_27(srcS4);
                            ctxB1 += 1;
                        } while (ctxB1 < flagP);
                    }

                    Sys_ReadFileBlock_27(&v_40, 0x547a3c, dstD1);
                    Sys_CloseFileStream_27(srcS4, &v_40);
                    Sys_CloseFileStream_27(srcS4, 0x5479e8);
                    Sys_OpenFileStream_27(srcS4);
                    return;
                    break;
                }
                case 5:
                {
                    dstD = (*(int32_t*)(uintptr_t)(dstD + 8));

                    if (!dstD)
                        return;

                    continue;
                }
                case 6:
                {
                    Sys_UnknownExpressionTyp(a1, (*(int32_t*)(uintptr_t)(dstD + 8)));
                    Sys_FreeMemory_27(0x15, a1);
                    Sys_ReadFileBlock_27(&v_40, 0x547a38, (*(int32_t*)(uintptr_t)(dstD + 0x1c)));
                    Sys_CloseFileStream_27(a1, &v_40);
                    Sys_OpenFileStream_27(a1);
                    Sys_UnknownExpressionTyp(a1, (*(int32_t*)(uintptr_t)(dstD + 0x18)));
                    Sys_FreeMemory_27(0x14, a1);
                    Sys_ReadFileBlock_27(&v_40, 0x547a34, dstD);
                    Sys_CloseFileStream_27(a1, &v_40);
                    Sys_ReadFileBlock_27(&v_40, 0x547a38, (*(int32_t*)(uintptr_t)(dstD + 0x1c)));
                    Sys_CloseFileStream_27(a1, &v_40);
                    Sys_OpenFileStream_27(a1);
                    Sys_UnknownExpressionTyp(a1, (*(int32_t*)(uintptr_t)(dstD + 0x1c)));
                    Sys_ReadFileBlock_27(&v_40, 0x547a34, dstD);
                    Sys_CloseFileStream_27(a1, &v_40);
                    Sys_CloseFileStream_27(a1, 0x5479e8);
                    Sys_OpenFileStream_27(a1);
                    return;
                    break;
                }
                case 7:
                {
                    char* valA14 = (*(int32_t*)(uintptr_t)(dstD + 0x18));

                    if (valA14)
                        Sys_UnknownExpressionTyp(a1, valA14);

                    if (dstD[1] == 0x18)
                    {
                        Sys_FreeMemory_27(0x12, a1);
                        Sys_OpenFileStream_27(a1);
                    }

                    char* valA15 = (*(int32_t*)(uintptr_t)(dstD + 0x1c));

                    if (valA15)
                        Sys_UnknownExpressionTyp(a1, valA15);

                    switch (dstD[1] - 1)
                    {
                        case 0:
                        {
                            Sys_FreeMemory_27(0x19, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 1:
                        {
                            Sys_FreeMemory_27(0x1a, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 2:
                        {
                            Sys_FreeMemory_27(0x2b, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 3:
                        {
                            Sys_FreeMemory_27(0x2c, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 4:
                        {
                            Sys_FreeMemory_27(0x1b, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 5:
                        {
                            Sys_FreeMemory_27(0x1c, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 7:
                        {
                            Sys_FreeMemory_27(0x20, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 8:
                        {
                            Sys_FreeMemory_27(0x21, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 9:
                        {
                            Sys_FreeMemory_27(0x1f, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0xa:
                        {
                            Sys_FreeMemory_27(0x1d, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0xb:
                        {
                            Sys_FreeMemory_27(0x1e, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0xc:
                        {
                            Sys_FreeMemory_27(0x2d, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0xd:
                        {
                            Sys_FreeMemory_27(0x24, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0xe:
                        {
                            Sys_FreeMemory_27(0x25, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0xf:
                        {
                            Sys_FreeMemory_27(0x26, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0x10:
                        {
                            Sys_FreeMemory_27(0x28, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0x11:
                        {
                            Sys_FreeMemory_27(0x27, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0x12:
                        {
                            Sys_FreeMemory_27(0x29, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0x13:
                        {
                            Sys_FreeMemory_27(0x2e, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0x17:
                        {
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0x18:
                        {
                            Sys_FreeMemory_27(0x2a, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0x1a:
                        {
                            Sys_FreeMemory_27(0x23, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        case 0x1b:
                        {
                            Sys_FreeMemory_27(0x22, a1);
                            Sys_OpenFileStream_27(a1);
                            break;
                        }
                        default:
                        {
                            Error_Show("Unknown operator in expression.");

                            while (true)
                                /* nop */
                        }
                    }

                    break;
                    break;
                }
            }
    }
}
