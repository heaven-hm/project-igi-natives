#include "004F2310-Script_FormatString_12.h"
/* 0x004f2310 Script_FormatString_12 full linked: callers=6 callees=0 */
int32_t sub_4f2310(void* a1, int32_t a2, int32_t a3)

{
    int32_t var_8 = a2;
    int32_t eax_1 = 0;
    eax_1 = g_a76c09;
    int32_t ecx_1 = 0;
    ecx_1 = *(a1 + 0x1c);
    return (*(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0))(a1, &var_8, var_8, a3);
}
