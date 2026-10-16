#include "004CE910-DynObj_ParseConfigFile_12.h"
/* 0x004ce910 DynObj_ParseConfigFile_12 full linked: callers=2 callees=4 */
int32_t* sub_4ce910(int32_t a1, int32_t* a2, int32_t a3, int32_t a4)

{
    int32_t* esi = a2;
    int32_t i = 0;
    int32_t* var_1c = &esi[3];
    int32_t result_1;

    do
    {
        int32_t* edx_1 = *var_1c;

        if (edx_1)
        {
            int32_t eax_1 = *edx_1;
            double var_18;
            memcpy(&var_18, a4, 0x18);
            var_18 = ((i & 1) * 2 - 1) * eax_1 + var_18;
            double var_10 = ((i & 2) - 1) * eax_1 + var_10;
            result_1 = &var_18;
            double var_8 = ((i >> 1 & 2) - 1) * eax_1 + var_8;
            sub_4ce910(a1, edx_1, a3, result_1);
            esi = a2;
        }

        i += 1;
        var_1c = &var_1c[1];
    } while (i < 8);

    int32_t* result = esi[0xf];

    if (result)
    {
        result_1 = result;
        result = sub_4e54e0(result_1);
    }

    if (*esi == 0x100000)
    {
        result_1 = 0x49800000;
        result = sub_4e53c0(0x100, a1, a3, a4, result_1);
        esi[0xf] = result;
    }

    return result;
}
