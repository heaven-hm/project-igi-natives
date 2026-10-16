#include "gi_platform.h"
#include "00414950-WeaponType_GetConfig.h"
int32_t WeaponType_GetConfig(int32_t a1 , int32_t a2)

{
    int32_t arg_14 = 0;
    int32_t arg_18 = 0;
    double arg_4;
    char result = Sys_PopStack_11(&arg_4);

    if (result)
        return result;

    Sys_FreeMemory_11(&arg_4);
    int32_t v_8 = a2;
    Sys_ResolveSymbol_9(a1);
    long double x87_r7_1 = arg_4;
    long double f0 = 0.0;
    x87_r7_1 - f0;
    return (x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe;
}
