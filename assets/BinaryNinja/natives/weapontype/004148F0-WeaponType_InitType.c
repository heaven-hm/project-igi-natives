#include "WeaponType_InitType.h"
int32_t WeaponType_InitType(int32_t a1 @ 0xc, int32_t a2, double a3)

{
    int32_t arg_4 = 0;
    int32_t arg_8 = 0;
    char result = Sys_PopStack_11(&arg_4);

    if (result)
        return result;

    Sys_FreeMemory_11(&arg_4);
    int32_t v_8 = a2;
    Sys_ResolveSymbol_9(a1);
    long double x87_r7_1 = a3;
    long double f0 = 0.0;
    x87_r7_1 - f0;
    return (x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe;
}
