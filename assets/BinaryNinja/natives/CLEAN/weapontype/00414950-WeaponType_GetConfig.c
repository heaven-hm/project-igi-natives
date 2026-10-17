// IGI native provenance: WeaponType_GetConfig - 0x00414950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00414950-WeaponType_GetConfig.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponType_GetConfig.h"
int32_t WeaponType_GetConfig(int32_t context , int32_t param_2)

{
    int32_t arg_14 = 0;
    int32_t arg_18 = 0;
    double arg_4;
    char result = Sys_PopStack_11(&arg_4);

    if (result)
        return result;

    Sys_FreeMemory_11(&arg_4);
    int32_t item_8 = param_2;
    Sys_ResolveSymbol_9(context);
    long double fpu_val_7_1 = arg_4;
    long double f0 = 0.0;
    fpu_val_7_1 - f0;
    return (fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe;
}
