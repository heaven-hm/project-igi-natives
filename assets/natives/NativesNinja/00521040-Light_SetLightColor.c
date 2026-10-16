#include "00521040-Light_SetLightColor.h"
/* 0x00521040 Light_SetLightColor full linked: callers=1 callees=4 */
void* sub_521040()

{
    void* eax_2 = g_a839d0;

    if (eax_2)
    {
        sub_4b0d10(eax_2);
        g_a839d0 = 0;
    }

    void* eax = g_a839f0;

    if (eax)
    {
        sub_4b0d10(eax);
        g_a839f0 = 0;
    }

    void* eax_1 = g_a83c54;

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        g_a83c54 = 0;
    }

    void* result = g_a839cc;

    if (result)
    {
        result = sub_4b0d10(result);
        g_a839cc = 0;
    }

    g_a83d24 = 0;
    g_a83d28 = 0;
    return result;
}
