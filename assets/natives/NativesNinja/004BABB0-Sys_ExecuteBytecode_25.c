#include "004BABB0-Sys_ExecuteBytecode_25.h"
/* 0x004babb0 Sys_ExecuteBytecode_25 full linked: callers=7 callees=4 */
void** sub_4babb0(char* a1)

{
    if (!sub_4bab80(a1, &a1))
        return 0;

    if (g_a43eb0 == &g_a43eb4)
        sub_4bac30(0x400);

    void** result = sub_4af930(&g_a43eb0);
    result[2] = a1;
    sub_4af910(&g_a43e90, result);
    int32_t eax_2 = g_a43e8c + 1;
    bool cond:0 = eax_2 <= g_a43eac;
    g_a43e8c = eax_2;

    if (!cond:0)
        g_a43eac = eax_2;

    return result;
}
