#include "gi_platform.h"
#include "004F9C10-Script_GraphnodeLinklimitRe.h"
int32_t Script_GraphnodeLinklimitRe(void* a1, int32_t a2)

{
    int32_t i = 0;
    int32_t* objC = a1 + 0x13c;

    do
    {
        if (!*objC)
        {
            (*(int32_t*)(uintptr_t)(a1 + (i << 2) + 0x13c)) = a2;
            return i;
        }

        i += 1;
        objC = &objC[1];
    } while (i < 0x40);

    return Warning_Show("GRAPHNODE - LINKLIMIT REACHED");
}
