// IGI native provenance: MenuUI_Invoke14_424C40 - 0x00424C40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424C40-MenuUI_Invoke14_424C40.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke14_424C40.h"

int32_t MenuUI_Invoke14_424C40(int32_t arg1)

{
    int32_t* context_val = *(arg1 + 0x34);

    if (!context_val)
        return arg1;

    int32_t* var_20_1 = context_val;
    int32_t* var_24_1 = context_val;
    return Sys_ResolveSymbol_14(context_val, *(arg1 + 0x2c) + *(arg1 + 0x24),
        *(arg1 + 0x30) + *(arg1 + 0x28), 128f, 128f, 128f, 0, 0, 0);
}
