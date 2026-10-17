// IGI native provenance: MineField_LoadParameters - 0x0043ABC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043ABC0-MineField_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MineField_LoadParameters.h"
int32_t MineField_LoadParameters(long double context , void* param_2)

{
    int32_t result = *(param_2 + 0xcc);

    if (result != 0xffffffff)
    {
        if (result)
        {
            *(param_2 + 0xcc) = result - 1;
            return result - 1;
        }

        result = Script_FormatString_6(param_2 + 0x38);

        if (result)
        {
            result = Script_SpawnNewTask_7(param_2 + 0x38, param_2);
            long double f0_1 = 0.0;
            context - f0_1;
            result = (context < f0_1 ? 1 : 0) << 8 | (FCMP_UO(context, f0_1) ? 1 : 0) << 0xa
                | (context == f0_1 ? 1 : 0) << 0xe | 0x800;

            if (!(*(&result + 1) & 0x40))
            {
                Vehicle_1009011_2(param_2);
                result = *(param_2 + 0xc4) * 30.0f;
                *(param_2 + 0xcc) = result;
            }
        }
    }

    return result;
}
