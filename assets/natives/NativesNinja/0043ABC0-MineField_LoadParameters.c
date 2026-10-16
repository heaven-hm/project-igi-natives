#include "0043ABC0-MineField_LoadParameters.h"
/* 0x0043abc0 MineField_LoadParameters full linked: callers=0 callees=3 */
int32_t MineField_LoadParameters(long double a1 @ st0, void* a2)

{
    int32_t result = *(a2 + 0xcc);

    if (result != 0xffffffff)
    {
        if (result)
        {
            *(a2 + 0xcc) = result - 1;
            return result - 1;
        }

        result = sub_4f16c0(a2 + 0x38);

        if (result)
        {
            result = sub_4f16e0(a2 + 0x38, a2);
            long double temp0_1 = 0.0;
            a1 - temp0_1;
            result = (a1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp0_1) ? 1 : 0) << 0xa
                | (a1 == temp0_1 ? 1 : 0) << 0xe | 0x800;

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
