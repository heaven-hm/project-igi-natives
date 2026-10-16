#include "004F16C0-Script_FormatString_6.h"
/* 0x004f16c0 Script_FormatString_6 full linked: callers=93 callees=0 */
int32_t* sub_4f16c0(int32_t* a1)

{
    int32_t* result = a1;

    if (!*result)
    {
        result = 0;
        return result;
    }

    if (*result[1])
    {
        result = result[2];
        return result;
    }

    result = 0;
    return result;
}
