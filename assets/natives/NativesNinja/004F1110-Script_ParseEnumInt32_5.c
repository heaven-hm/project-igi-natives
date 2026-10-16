#include "004F1110-Script_ParseEnumInt32_5.h"
/* 0x004f1110 Script_ParseEnumInt32_5 full linked: callers=2 callees=3 */
int32_t sub_4f1110(void* a1)

{
    int32_t result = sub_4f1050(a1);

    if (result >= 0)
        result = sub_4f10e0(result);

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        do
        {
            result = sub_4f1110(i);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}
