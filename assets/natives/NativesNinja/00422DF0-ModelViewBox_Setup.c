#include "00422DF0-ModelViewBox_Setup.h"
/* 0x00422df0 ModelViewBox_Setup full linked: callers=0 callees=4 */
int32_t ModelViewBox_Setup(void* a1)

{
    QTask_FindType(*(a1 + 0xc4));
    QTask_FindType(*(a1 + 0x5c));
    sub_4c5ce0(*(a1 + 0x58));
    int32_t eax_1 = sub_4f1220();
    int32_t ecx_1 = 0;
    ecx_1 = *(a1 + 0x1c);
    return (*(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0))(a1);
}
