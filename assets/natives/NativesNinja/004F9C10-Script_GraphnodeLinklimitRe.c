#include "004F9C10-Script_GraphnodeLinklimitRe.h"
/* 0x004f9c10 Script_GraphnodeLinklimitRe full linked: callers=2 callees=1 */
int32_t sub_4f9c10(void* a1, int32_t a2)

{
    int32_t i = 0;
    int32_t* ecx = a1 + 0x13c;

    do
    {
        if (!*ecx)
        {
            *(a1 + (i << 2) + 0x13c) = a2;
            return i;
        }

        i += 1;
        ecx = &ecx[1];
    } while (i < 0x40);

    return Warning_Show("GRAPHNODE - LINKLIMIT REACHED");
}
