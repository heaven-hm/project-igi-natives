// Original IGI.EXE function: Display_RestoreDevice_3 (VA 0x00491860; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice_3.h"
int32_t* Display_RestoreDevice_3()

{
    int32_t* i = &g_c28a44;
    g_bcadec = 0;
    g_bcae00 = 0;
    g_bcadfc = 0;

    do
    {
        *i = 0;
        i = &i[2];
    } while (i < &g_c28b44);

    return i;
}
