// Original IGI.EXE function: Sys_DispatchOpcode_24 (VA 0x004B9660; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_24.h"
void Sys_DispatchOpcode_24(long double context , long double param_2 , int32_t param_3)

{
    if (!param_3)
        return;

    int32_t data_val = *(param_3 + 1);

    if (data_val > 0x1d)
        return;

    int32_t entity_1 = 0;
    entity_1 = lookup_table_4b9ba4[data_val];
    long double entry_x87_r2;
    long double fpu3;
    long double fpu4;
    long double entry_x87_r5;

    switch (entity_1)
    {
        case 0:
        {
            switch (*param_3 - 1)
            {
                case 0:
                {
                    *(param_3 + 8);
                    break;
                }
                case 2:
                {
                    *(param_3 + 8);
                    break;
                }
                case 3:
                case 4:
                {
                    if (!*(param_3 + 8))
                        *(param_3 + 8) = Sys_ExecuteBytecode_25(*(param_3 + 0x10));

                    void* data_5 = *(param_3 + 8);

                    if (data_5)
                    {
                        void* data_6 = *(data_5 + 8);

                        if (data_6)
                        {
                            void item_18;
                            *((*(data_6 + 0x10))(&item_18, *(data_6 + 0x18), *(param_3 + 0xc)) + 8);
                            return;
                        }
                    }

                    void* data_8 = *(param_3 + 0x18);

                    if (!data_8)
                    {
                        int32_t item_2c_5 = *(param_3 + 0x24);
                        int32_t item_30_4 = *(param_3 + 0x10);
                    }
                    else
                    {
                        int32_t item_2c_4 = *(param_3 + 0x24);
                        int32_t item_30_3 = *(data_8 + 0x10);
                    }

                    Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                    break;
                }
                case 5:
                {
                    Sys_DispatchOpcode_24(context, param_2, *(param_3 + 8));
                    break;
                }
            }
            break;
        }
        case 1:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x1c));
            double item_20_1 = entry_x87_r2;
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x18));
            break;
        }
        case 2:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            double item_20_2 = entry_x87_r2;
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
            break;
        }
        case 3:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x1c));
            break;
        }
        case 4:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x1c));
            break;
        }
        case 5:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x1c));
            double item_20_3 = entry_x87_r2;
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x18));
            break;
        }
        case 6:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x1c));
            double item_20_4 = entry_x87_r2;
            long double f1 = 0.0;
            entry_x87_r2 - f1;

            if (*(&((entry_x87_r2 < f1 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, f1) ? 1 : 0) << 0xa
                | (entry_x87_r2 == f1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40)
            {
                g_a965a8 = 1;
                return;
            }

            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x18));
            break;
        }
        case 7:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
            long double f6 = entry_x87_r2;
            entry_x87_r5 - f6;
            param_3 = 1;

            if (!(*(&((entry_x87_r5 < f6 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f6) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                param_3 = 0;
            break;
        }
        case 8:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
            long double f7 = entry_x87_r2;
            entry_x87_r5 - f7;
            param_3 = 1;

            if (*(&((entry_x87_r5 < f7 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f7) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f7 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                param_3 = 0;
            break;
        }
        case 9:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
            long double f2 = entry_x87_r2;
            entry_x87_r5 - f2;
            param_3 = 1;

            if (*(&((entry_x87_r5 < f2 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f2) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                param_3 = 0;
            break;
        }
        case 0xa:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
            long double f3 = entry_x87_r2;
            entry_x87_r5 - f3;
            param_3 = 1;

            if (!(*(&((entry_x87_r5 < f3 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f3) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f3 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                param_3 = 0;
            break;
        }
        case 0xb:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
            long double f4 = entry_x87_r2;
            entry_x87_r5 - f4;
            param_3 = 1;

            if (*(&((entry_x87_r5 < f4 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f4) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f4 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                param_3 = 0;
            break;
        }
        case 0xc:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
            long double f5 = entry_x87_r2;
            entry_x87_r5 - f5;
            param_3 = 1;

            if (!(*(&((entry_x87_r5 < f5 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f5) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                param_3 = 0;
            break;
        }
        case 0xd:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x1c));
            long double f0 = 0.0;
            entry_x87_r2 - f0;
            param_3 = 1;

            if (!(*(&((entry_x87_r2 < f0 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, f0) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == f0 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                param_3 = 0;
            break;
        }
        case 0xe:
        {
            Sys_ReadFileBlock_24(*(param_3 + 0x18));
            param_3 = Sys_ReadFileBlock_24(*(param_3 + 0x1c));
            break;
        }
        case 0xf:
        {
            data_val = *(param_3 + 0x18);

            if (data_val)
            {
                char entity_16 = *data_val;

                if (entity_16 != 4)
                {
                    if (entity_16 != 5)
                    {
                        int32_t item_2c_28 = *(param_3 + 0x24);
                        Error_Show("Internal script error. Invalid assignment, line %d");

                        while (true)
                            /* nop */
                    }
                    else if (entity_16 != 4 && !*(data_val + 8))
                        *(*(param_3 + 0x18) + 8) = Sys_ExecuteBytecode_25(*(data_val + 0x10));
                }

                void* entity_18 = *(param_3 + 0x18);
                void* data_56 = *(entity_18 + 8);

                if (data_56)
                {
                    int32_t* data_57 = *(data_56 + 8);

                    if (data_57)
                    {
                        int32_t entity_19 = *data_57;

                        if (!entity_19)
                        {
                            Sys_OpenFileStream_24(entry_x87_r2, *(param_3 + 0x1c), data_57);
                            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
                            return;
                        }

                        if (entity_19 != 2)
                        {
                            int32_t item_2c_32 = *(param_3 + 0x24);
                            Sys_FreeMemory_22("Syntax error in assignment, line %d");
                            return;
                        }

                        int32_t item_2c_31 = *(param_3 + 0x24);
                        Sys_FreeMemory_22("Expression: Cannot assign to constant, line %d");
                        return;
                    }
                }

                int32_t item_2c_33 = *(param_3 + 0x24);
                int32_t item_30_15 = *(entity_18 + 0x10);
                Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
            }
            break;
        }
        case 0x10:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            long double f9 = 0.0;
            entry_x87_r2 - f9;
            long double f11_1;

            if (*(&((entry_x87_r2 < f9 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, f9) ? 1 : 0) << 0xa
                | (entry_x87_r2 == f9 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40)
            {
                Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
                f11_1 = 0.0;
                entry_x87_r5 - f11_1;
                param_3 = 0;
            }

            if (!(*(&((entry_x87_r2 < f9 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, f9) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == f9 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40) || !(*(&(
                    (entry_x87_r5 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f11_1) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                param_3 = 1;

🚫🚫            /* unimplemented  {fild fp0, dword [stack_ptr+0x2c]} */
            break;
        }
        case 0x11:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 0x18));
            long double f8 = 0.0;
            entry_x87_r2 - f8;
            long double f10_1;

            if (!(*(&((entry_x87_r2 < f8 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, f8) ? 1 : 0) << 0xa
                | (entry_x87_r2 == f8 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
            {
                Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
                f10_1 = 0.0;
                entry_x87_r5 - f10_1;
                param_3 = 1;
            }

            if (*(&((entry_x87_r2 < f8 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, f8) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == f8 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40 || *(&(
                    (entry_x87_r5 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f10_1) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                param_3 = 0;

🚫🚫            /* unimplemented  {fild fp0, dword [stack_ptr+0x2c]} */
            break;
        }
        case 0x12:
        {
            Sys_DispatchOpcode_24(context, param_2, *(param_3 + 8));

            if (!entry_x87_r2)
            {
                Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x1c));
                return;
            }

            Sys_DispatchOpcode_24(fpu3, fpu4, *(param_3 + 0x18));
            break;
        }
    }
}
