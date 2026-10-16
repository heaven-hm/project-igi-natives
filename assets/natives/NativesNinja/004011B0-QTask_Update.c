#include "004011B0-QTask_Update.h"
/* 0x004011b0 QTask_Update full linked: callers=1 callees=0 */
int32_t* QTask_Update()

{
    int32_t* i;

    for (i = &g_af5ee0; i < &g_afa6e0; i = &i[0xc])
    {
        *(i + 0x25) = 0;
        *i = 0;
    }

    return i;
}
