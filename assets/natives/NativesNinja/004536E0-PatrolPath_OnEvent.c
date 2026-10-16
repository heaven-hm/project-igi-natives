#include "004536E0-PatrolPath_OnEvent.h"
/* 0x004536e0 PatrolPath_OnEvent full linked: callers=1 callees=0 */
int32_t sub_4536e0(void* a1)

{
    int32_t* eax = *(a1 + 8);
    int32_t ecx = *eax;
    int32_t ecx_1 = -(ecx);
    int32_t* i = (ecx_1 - ecx_1) & eax;
    int32_t result = 0;

    while (i)
    {
        i = *i;
        result += 1;

        if (!i)
            break;

        if (!*i)
            break;
    }

    return result;
}
