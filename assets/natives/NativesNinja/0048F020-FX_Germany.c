#include "0048F020-FX_Germany.h"
/* 0x0048f020 FX_Germany full linked: callers=1 callees=4 */
int32_t sub_48f020()

{
    if (!g_5c8c20)
    {
        int32_t eax;
        int32_t ecx_1;
        int32_t edx_1;
        eax = GetLocaleInfoA(0x400, 0x1002, &g_5c8c20, 0x100);

        if (!sub_4a5980(eax, edx_1, ecx_1, &g_5c8c20, "Germany"))
            sub_48f2b0(1);
    }

    return sub_48f180(0, 0);
}
