#include "Script_FormatString_24.h"
int32_t* Script_FormatString_24(int32_t a1)

{
    int32_t* result = g_a774a0;

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[2] == a1)
            return result;

        result = i;
    }

    return nullptr;
}
