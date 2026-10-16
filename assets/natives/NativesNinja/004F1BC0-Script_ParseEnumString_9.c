#include "004F1BC0-Script_ParseEnumString_9.h"
/* 0x004f1bc0 Script_ParseEnumString_9 full linked: callers=108 callees=1 */
int32_t sub_4f1bc0(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* i = &g_a758e4;
    int32_t edi = 0;
    *(((a1 * 0x13 + a2) << 2) + &g_a758e8) = a3;
    int32_t result;

    do
    {
        result = i[0x11];

        if (result && *i == a1)
            result = sub_4f1bc0(edi, a2, a3);

        i = &i[0x13];
        edi += 1;
    } while (i < &g_a76be4);

    return result;
}
