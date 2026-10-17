// IGI native provenance: WeaponType_InitType - 0x004148F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004148F0-WeaponType_InitType.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponType_InitType.h"
int32_t WeaponType_InitType(int32_t context , int32_t param_2, double param_3)

{
    int32_t arg_4 = 0;
    int32_t arg_8 = 0;
    char result = Sys_PopStack_11(&arg_4);

    if (result)
        return result;

    Sys_FreeMemory_11(&arg_4);
    int32_t item_8 = param_2;
    Sys_ResolveSymbol_9(context);
    long double fpu_val_7_1 = param_3;
    long double f0 = 0.0;
    fpu_val_7_1 - f0;
    return (fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe;
}
