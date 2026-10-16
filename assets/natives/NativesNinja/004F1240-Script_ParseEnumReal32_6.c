#include "004F1240-Script_ParseEnumReal32_6.h"
/* 0x004f1240 Script_ParseEnumReal32_6 full linked: callers=1 callees=2 */
int32_t sub_4f1240()

{
    int32_t result = 0;

    if (sub_4f1030(0))
    {
        int32_t i;

        do
        {
            result += 1;
            i = sub_4f1030(result);
        } while (i);
    }

    return result;
}
