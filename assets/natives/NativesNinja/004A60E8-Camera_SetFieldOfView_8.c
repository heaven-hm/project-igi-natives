#include "004A60E8-Camera_SetFieldOfView_8.h"
/* 0x004a60e8 Camera_SetFieldOfView_8 full linked: callers=1 callees=6 */
int32_t __fastcall sub_4a60e8(int32_t a1)

{
    int32_t var_8 = a1;
    int32_t var_c = a1;

    if (!g_c32548)
        sub_4aa562();

    GetModuleFileNameA(nullptr, &g_9360b4, 0x104);
    char* eax = g_c32554;
    g_93609c = &g_9360b4;
    char* edi = &g_9360b4;

    if (*eax)
        edi = eax;

    sub_4a6181(edi, nullptr, nullptr, &var_8, &var_c);
    int32_t* eax_3 = sub_4aa670(var_c + (var_8 << 2));

    if (!eax_3)
        sub_4a51eb(8);

    sub_4a6181(edi, eax_3, &eax_3[var_8], &var_8, &var_c);
    int32_t result = var_8 - 1;
    g_936084 = eax_3;
    g_936080 = result;
    return result;
}
