#include "004FA140-Script_FormatString_24.h"
/* 0x004fa140 Script_FormatString_24 full linked: callers=1 callees=0 */
int32_t* sub_4fa140(int32_t a1)

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
