#include "gi_platform.h"
#include "004F1BC0-Script_ParseEnumString_9.h"
int32_t Script_ParseEnumString_9(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* i = &g_a758e4;
    int32_t dstD = 0;
    (*(int32_t*)(uintptr_t)(((a1 * 0x13 + a2) << 2) + &g_a758e8)) = a3;
    int32_t result;

    do
    {
        result = i[0x11];

        if (result && *i == a1)
            result = Script_ParseEnumString_9(dstD, a2, a3);

        i = &i[0x13];
        dstD += 1;
    } while (i < &g_a76be4);

    return result;
}
