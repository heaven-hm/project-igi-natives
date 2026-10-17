// Original IGI.EXE function: QTask_Update (VA 0x004011B0; static CFG gate PASS, CFG score 1.000).
#include "QTask_Update.h"
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
