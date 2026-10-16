#include "004F1D80-Script_ParseEnumInt32_10.h"
/* 0x004f1d80 Script_ParseEnumInt32_10 full linked: callers=9 callees=2 */
int32_t* sub_4f1d80(int32_t* a1)

{
    int32_t* result = a1;
    int32_t* i_1 = *result;

    for (int32_t* i = *i_1; i; i = *i)
    {
        sub_4af960(i_1);
        result = sub_4b0d10(i_1);
        i_1 = i;
    }

    return result;
}
