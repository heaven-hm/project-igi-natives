// Original IGI.EXE function: Sys_UnknownExpressionTyp (VA 0x004BC2F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_UnknownExpressionTyp.h"
void Sys_UnknownExpressionTyp(int32_t* context, char* param_2)

{
    char* dest_val = param_2;

    if (!dest_val)
        return;

    while (true)
    {
        int32_t data_2 = *dest_val - 1;
        void item_40;

        if (data_2 > 7)
        {
            Error_Show("Unknown expression type");

            while (true)
                /* nop */
        }
        else
            switch (data_2)
            {
                case 0:
                {
                    Sys_FreeMemory_27(2, context);
                    Sys_PopStack_27(context, *(dest_val + 8));
                    Sys_OpenFileStream_27(context);
                    return;
                    break;
                }
                case 1:
                {
                    Sys_FreeMemory_27(7, context);
                    Sys_DispatchOpcode_27(context, *(dest_val + 8));
                    Sys_OpenFileStream_27(context);
                    return;
                    break;
                }
                case 2:
                {
                    Sys_FreeMemory_27(5, context);
                    Sys_ResolveSymbol_27(context, *(dest_val + 8), *(dest_val + 0xc));
                    Sys_OpenFileStream_27(context);
                    return;
                    break;
                }
                case 3:
                case 4:
                {
                    int32_t* source_4 = context;
                    Sys_FreeMemory_27(0xb, source_4);
                    Sys_CloseFileStream_27(source_4, *(dest_val + 0x10));
                    Sys_OpenFileStream_27(source_4);
                    int32_t* dest_1 = *(dest_val + 0xc);

                    if (!dest_1)
                        break;

                    int32_t flagP = *dest_1;
                    Sys_FreeMemory_27(0x18, source_4);
                    Sys_CloseFileStream_27(source_4, &g_547a4c);
                    int32_t context_val = 0;
                    context = nullptr;

                    if (flagP > 0)
                    {
                        do
                        {
                            if (context >= 5)
                            {
                                context = nullptr;
                                Sys_OpenFileStream_27(source_4);
                                Sys_ExecuteBytecode_27(source_4);
                            }

                            Sys_ReadFileBlock_27(&item_40, 0x547a48, *(dest_1[2] + (context_val << 2)));
                            Sys_CloseFileStream_27(source_4, &item_40);

                            if (context_val < flagP - 1)
                                Sys_CloseFileStream_27(source_4, &g_547a44);

                            context_val += 1;
                            context += 1;
                        } while (context_val < flagP);
                    }

                    Sys_CloseFileStream_27(source_4, &g_547a40);
                    Sys_OpenFileStream_27(source_4);
                    Sys_ReadFileBlock_27(&item_40, 0x547a3c, dest_1);
                    Sys_FreeMemory_27(0x14, source_4);
                    Sys_CloseFileStream_27(source_4, &item_40);
                    Sys_OpenFileStream_27(source_4);
                    int32_t context_1 = 0;

                    if (flagP > 0)
                    {
                        do
                        {
                            Sys_ReadFileBlock_27(&item_40, 0x547a48, *(dest_1[2] + (context_1 << 2)));
                            Sys_CloseFileStream_27(source_4, &item_40);
                            Sys_CloseFileStream_27(source_4, 0x5479e8);
                            Sys_OpenFileStream_27(source_4);
                            Sys_UnknownExpressionTyp(source_4, *(dest_1[2] + (context_1 << 2)));
                            Sys_FreeMemory_27(0, source_4);
                            Sys_OpenFileStream_27(source_4);
                            context_1 += 1;
                        } while (context_1 < flagP);
                    }

                    Sys_ReadFileBlock_27(&item_40, 0x547a3c, dest_1);
                    Sys_CloseFileStream_27(source_4, &item_40);
                    Sys_CloseFileStream_27(source_4, 0x5479e8);
                    Sys_OpenFileStream_27(source_4);
                    return;
                    break;
                }
                case 5:
                {
                    dest_val = *(dest_val + 8);

                    if (!dest_val)
                        return;

                    continue;
                }
                case 6:
                {
                    Sys_UnknownExpressionTyp(context, *(dest_val + 8));
                    Sys_FreeMemory_27(0x15, context);
                    Sys_ReadFileBlock_27(&item_40, 0x547a38, *(dest_val + 0x1c));
                    Sys_CloseFileStream_27(context, &item_40);
                    Sys_OpenFileStream_27(context);
                    Sys_UnknownExpressionTyp(context, *(dest_val + 0x18));
                    Sys_FreeMemory_27(0x14, context);
                    Sys_ReadFileBlock_27(&item_40, 0x547a34, dest_val);
                    Sys_CloseFileStream_27(context, &item_40);
                    Sys_ReadFileBlock_27(&item_40, 0x547a38, *(dest_val + 0x1c));
                    Sys_CloseFileStream_27(context, &item_40);
                    Sys_OpenFileStream_27(context);
                    Sys_UnknownExpressionTyp(context, *(dest_val + 0x1c));
                    Sys_ReadFileBlock_27(&item_40, 0x547a34, dest_val);
                    Sys_CloseFileStream_27(context, &item_40);
                    Sys_CloseFileStream_27(context, 0x5479e8);
                    Sys_OpenFileStream_27(context);
                    return;
                    break;
                }
                case 7:
                {
                    char* data_14 = *(dest_val + 0x18);

                    if (data_14)
                        Sys_UnknownExpressionTyp(context, data_14);

                    if (dest_val[1] == 0x18)
                    {
                        Sys_FreeMemory_27(0x12, context);
                        Sys_OpenFileStream_27(context);
                    }

                    char* data_15 = *(dest_val + 0x1c);

                    if (data_15)
                        Sys_UnknownExpressionTyp(context, data_15);

                    switch (dest_val[1] - 1)
                    {
                        case 0:
                        {
                            Sys_FreeMemory_27(0x19, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 1:
                        {
                            Sys_FreeMemory_27(0x1a, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 2:
                        {
                            Sys_FreeMemory_27(0x2b, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 3:
                        {
                            Sys_FreeMemory_27(0x2c, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 4:
                        {
                            Sys_FreeMemory_27(0x1b, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 5:
                        {
                            Sys_FreeMemory_27(0x1c, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 7:
                        {
                            Sys_FreeMemory_27(0x20, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 8:
                        {
                            Sys_FreeMemory_27(0x21, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 9:
                        {
                            Sys_FreeMemory_27(0x1f, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0xa:
                        {
                            Sys_FreeMemory_27(0x1d, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0xb:
                        {
                            Sys_FreeMemory_27(0x1e, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0xc:
                        {
                            Sys_FreeMemory_27(0x2d, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0xd:
                        {
                            Sys_FreeMemory_27(0x24, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0xe:
                        {
                            Sys_FreeMemory_27(0x25, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0xf:
                        {
                            Sys_FreeMemory_27(0x26, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0x10:
                        {
                            Sys_FreeMemory_27(0x28, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0x11:
                        {
                            Sys_FreeMemory_27(0x27, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0x12:
                        {
                            Sys_FreeMemory_27(0x29, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0x13:
                        {
                            Sys_FreeMemory_27(0x2e, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0x17:
                        {
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0x18:
                        {
                            Sys_FreeMemory_27(0x2a, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0x1a:
                        {
                            Sys_FreeMemory_27(0x23, context);
                            Sys_OpenFileStream_27(context);
                            break;
                        }
                        case 0x1b:
                        {
                            Sys_FreeMemory_27(0x22, context);
                            Sys_OpenFileStream_27(context);
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
