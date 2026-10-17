// Original IGI.EXE function: MineField_LoadParameters (VA 0x0043ABC0; static CFG gate PASS, CFG score 1.000).
#include "MineField_LoadParameters.h"
int32_t MineField_LoadParameters(long double a1 @ fp0, void* a2)

{
    int32_t result = *(a2 + 0xcc);

    if (result != 0xffffffff)
    {
        if (result)
        {
            *(a2 + 0xcc) = result - 1;
            return result - 1;
        }

        result = Script_FormatString_6(a2 + 0x38);

        if (result)
        {
            result = Script_SpawnNewTask_7(a2 + 0x38, a2);
            long double f0_1 = 0.0;
            a1 - f0_1;
            result = (a1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f0_1) ? 1 : 0) << 0xa
                | (a1 == f0_1 ? 1 : 0) << 0xe | 0x800;

            if (!(*(&result + 1) & 0x40))
            {
                Vehicle_1009011_2(a2);
                result = *(a2 + 0xc4) * 30f;
                *(a2 + 0xcc) = result;
            }
        }
    }

    return result;
}
