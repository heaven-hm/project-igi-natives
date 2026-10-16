#include "gi_platform.h"
#include "004B9660-Sys_DispatchOpcode_24.h"
void Sys_DispatchOpcode_24(long double a1 , long double a2 , int32_t a3)

{
    if (!a3)
        return;

    int32_t valA = (*(int32_t*)(uintptr_t)(a3 + 1));

    if (valA > 0x1d)
        return;

    int32_t objC1 = 0;
    objC1 = lookup_table_4b9ba4[valA];
    long double entry_x87_r2;
    long double fpu3;
    long double fpu4;
    long double entry_x87_r5;

    switch (objC1)
    {
        case 0:
        {
            switch (*a3 - 1)
            {
                case 0:
                {
                    (*(int32_t*)(uintptr_t)(a3 + 8));
                    break;
                }
                case 2:
                {
                    (*(int32_t*)(uintptr_t)(a3 + 8));
                    break;
                }
                case 3:
                case 4:
                {
                    if (!(*(int32_t*)(uintptr_t)(a3 + 8)))
                        (*(int32_t*)(uintptr_t)(a3 + 8)) = Sys_ExecuteBytecode_25((*(int32_t*)(uintptr_t)(a3 + 0x10)));

                    void* valA5 = (*(int32_t*)(uintptr_t)(a3 + 8));

                    if (valA5)
                    {
                        void* valA6 = *(valA5 + 8);

                        if (valA6)
                        {
                            char v_18;
                            (*(int32_t*)(uintptr_t)(((int(*)())(uintptr_t)(*(valA6 + 0x10)))(&v_18, *(valA6 + 0x18), *(a3 + 0xc)) + 8));
                            return;
                        }
                    }

                    void* valA8 = (*(int32_t*)(uintptr_t)(a3 + 0x18));

                    if (!valA8)
                    {
                        int32_t v_2c_5 = (*(int32_t*)(uintptr_t)(a3 + 0x24));
                        int32_t v_30_4 = (*(int32_t*)(uintptr_t)(a3 + 0x10));
                    }
                    else
                    {
                        int32_t v_2c_4 = (*(int32_t*)(uintptr_t)(a3 + 0x24));
                        int32_t v_30_3 = *(valA8 + 0x10);
                    }

                    Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                    break;
                }
                case 5:
                {
                    Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 8)));
                    break;
                }
            }
            break;
        }
        case 1:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            double v_20_1 = entry_x87_r2;
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            break;
        }
        case 2:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            double v_20_2 = entry_x87_r2;
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            break;
        }
        case 3:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            break;
        }
        case 4:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            break;
        }
        case 5:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            double v_20_3 = entry_x87_r2;
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            break;
        }
        case 6:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            double v_20_4 = entry_x87_r2;
            long double f1 = 0.0;
            entry_x87_r2 - f1;

            if (*(&((entry_x87_r2 < f1 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, f1) ? 1 : 0) << 0xa
                | (entry_x87_r2 == f1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40)
            {
                g_a965a8 = 1;
                return;
            }

            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            break;
        }
        case 7:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            long double f6 = entry_x87_r2;
            entry_x87_r5 - f6;
            a3 = 1;

            if (!(*(&((entry_x87_r5 < f6 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f6) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                a3 = 0;
            break;
        }
        case 8:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            long double f7 = entry_x87_r2;
            entry_x87_r5 - f7;
            a3 = 1;

            if (*(&((entry_x87_r5 < f7 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f7) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f7 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                a3 = 0;
            break;
        }
        case 9:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            long double f2 = entry_x87_r2;
            entry_x87_r5 - f2;
            a3 = 1;

            if (*(&((entry_x87_r5 < f2 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f2) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                a3 = 0;
            break;
        }
        case 0xa:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            long double f3 = entry_x87_r2;
            entry_x87_r5 - f3;
            a3 = 1;

            if (!(*(&((entry_x87_r5 < f3 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f3) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f3 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                a3 = 0;
            break;
        }
        case 0xb:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            long double f4 = entry_x87_r2;
            entry_x87_r5 - f4;
            a3 = 1;

            if (*(&((entry_x87_r5 < f4 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f4) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f4 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                a3 = 0;
            break;
        }
        case 0xc:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            long double f5 = entry_x87_r2;
            entry_x87_r5 - f5;
            a3 = 1;

            if (!(*(&((entry_x87_r5 < f5 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f5) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                a3 = 0;
            break;
        }
        case 0xd:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            long double f0 = 0.0;
            entry_x87_r2 - f0;
            a3 = 1;

            if (!(*(&((entry_x87_r2 < f0 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, f0) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == f0 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                a3 = 0;
            break;
        }
        case 0xe:
        {
            Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a3 + 0x18)));
            a3 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a3 + 0x1c)));
            break;
        }
        case 0xf:
        {
            valA = (*(int32_t*)(uintptr_t)(a3 + 0x18));

            if (valA)
            {
                char objC16 = *valA;

                if (objC16 != 4)
                {
                    if (objC16 != 5)
                    {
                        int32_t v_2c_28 = (*(int32_t*)(uintptr_t)(a3 + 0x24));
                        Error_Show("Internal script error. Invalid assignment, line %d");

                        while (true)
                            /* nop */
                    }
                    else if (objC16 != 4 && !(*(int32_t*)(uintptr_t)(valA + 8)))
                        (*(int32_t*)(uintptr_t)(*(a3 + 0x18) + 8)) = Sys_ExecuteBytecode_25((*(int32_t*)(uintptr_t)(valA + 0x10)));
                }

                void* objC18 = (*(int32_t*)(uintptr_t)(a3 + 0x18));
                void* valA56 = *(objC18 + 8);

                if (valA56)
                {
                    int32_t* valA57 = *(valA56 + 8);

                    if (valA57)
                    {
                        int32_t objC19 = *valA57;

                        if (!objC19)
                        {
                            Sys_OpenFileStream_24(entry_x87_r2, (*(int32_t*)(uintptr_t)(a3 + 0x1c)), valA57);
                            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
                            return;
                        }

                        if (objC19 != 2)
                        {
                            int32_t v_2c_32 = (*(int32_t*)(uintptr_t)(a3 + 0x24));
                            Sys_FreeMemory_22("Syntax error in assignment, line %d");
                            return;
                        }

                        int32_t v_2c_31 = (*(int32_t*)(uintptr_t)(a3 + 0x24));
                        Sys_FreeMemory_22("Expression: Cannot assign to constant, line %d");
                        return;
                    }
                }

                int32_t v_2c_33 = (*(int32_t*)(uintptr_t)(a3 + 0x24));
                int32_t v_30_15 = *(objC18 + 0x10);
                Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
            }
            break;
        }
        case 0x10:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            long double f9 = 0.0;
            entry_x87_r2 - f9;
            long double f11_1;

            if (*(&((entry_x87_r2 < f9 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, f9) ? 1 : 0) << 0xa
                | (entry_x87_r2 == f9 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40)
            {
                Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
                f11_1 = 0.0;
                entry_x87_r5 - f11_1;
                a3 = 0;
            }

            if (!(*(&((entry_x87_r2 < f9 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, f9) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == f9 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40) || !(*(&(
                    (entry_x87_r5 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f11_1) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                a3 = 1;

🚫🚫            /* unimplemented  {fild fp0, dword [esp+0x2c]} */
            break;
        }
        case 0x11:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            long double f8 = 0.0;
            entry_x87_r2 - f8;
            long double f10_1;

            if (!(*(&((entry_x87_r2 < f8 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, f8) ? 1 : 0) << 0xa
                | (entry_x87_r2 == f8 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
            {
                Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
                f10_1 = 0.0;
                entry_x87_r5 - f10_1;
                a3 = 1;
            }

            if (*(&((entry_x87_r2 < f8 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, f8) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == f8 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40 || *(&(
                    (entry_x87_r5 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, f10_1) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                a3 = 0;

🚫🚫            /* unimplemented  {fild fp0, dword [esp+0x2c]} */
            break;
        }
        case 0x12:
        {
            Sys_DispatchOpcode_24(a1, a2, (*(int32_t*)(uintptr_t)(a3 + 8)));

            if (!entry_x87_r2)
            {
                Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x1c)));
                return;
            }

            Sys_DispatchOpcode_24(fpu3, fpu4, (*(int32_t*)(uintptr_t)(a3 + 0x18)));
            break;
        }
    }
}
