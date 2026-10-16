#include "gi_platform.h"
#include "004F16C0-Script_FormatString_6.h"
int32_t* Script_FormatString_6(int32_t* a1)

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
