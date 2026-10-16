#include "00447D70-Env_CheckAmbientArea_9.h"
/* 0x00447d70 Env_CheckAmbientArea_9 full linked: callers=1 callees=0 */
int32_t sub_447d70(void* a1)

{
    void* eax_2 = a1;

    if (*(eax_2 + 0x199))
        return 0;

    if (*(eax_2 + 0x19a))
        return 1;

    eax_2 = *(eax_2 + 0x290);
    char temp0 = eax_2;
    eax_2 = -(eax_2);
    return eax_2 - eax_2 + 3;
}
