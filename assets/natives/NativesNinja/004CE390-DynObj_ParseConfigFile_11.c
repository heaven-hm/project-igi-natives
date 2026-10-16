#include "004CE390-DynObj_ParseConfigFile_11.h"
/* 0x004ce390 DynObj_ParseConfigFile_11 full linked: callers=4 callees=1 */
uint32_t sub_4ce390(int32_t a1, char a2, int32_t a3, double* a4, int32_t a5)

{
    uint32_t result;

    for (int32_t i = 0; i < 6; i += 1)
        result = sub_4ce090(a1, a2, a3, a4, a5, i);

    return result;
}
