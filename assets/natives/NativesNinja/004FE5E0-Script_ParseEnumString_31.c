#include "004FE5E0-Script_ParseEnumString_31.h"
/* 0x004fe5e0 Script_ParseEnumString_31 full linked: callers=1 callees=0 */
int32_t sub_4fe5e0(void* a1, int32_t a2)

{
    int32_t i = 0;

    if (*(a1 + 0xf0) > 0)
    {
        do
        {
            void* edx_2 = *(*(a1 + 0x6c) + (i << 2));
            i += 1;
            *(edx_2 + 0x30) = a2;
        } while (i < *(a1 + 0xf0));
    }

    return i;
}
