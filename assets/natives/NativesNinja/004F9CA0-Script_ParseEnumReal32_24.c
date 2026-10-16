#include "004F9CA0-Script_ParseEnumReal32_24.h"
/* 0x004f9ca0 Script_ParseEnumReal32_24 full linked: callers=2 callees=0 */
int32_t sub_4f9ca0(void* a1, int32_t a2)

{
    int32_t i = 0;
    int32_t* ecx = a1 + 0x13c;

    do
    {
        if (*ecx == a2)
        {
            *(a1 + (i << 2) + 0x13c) = 0;
            return i;
        }

        i += 1;
        ecx = &ecx[1];
    } while (i < 0x40);

    return i;
}
