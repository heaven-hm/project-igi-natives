#include "004226D0-MenuFrame_Setup.h"
/* 0x004226d0 MenuFrame_Setup full linked: callers=0 callees=8 */
int32_t MenuFrame_Setup(void* a1)

{
    int32_t ebx = (g_c28b44 >> 1) + *(a1 + 0x20) - 0x140;
    void* ecx_1 = *(a1 + 0x28);
    int32_t edi = (g_c28b48 >> 1) + *(a1 + 0x24) - 0xf0;
    int32_t edx_2 = *(a1 + 0x2c);
    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(a1);
    int32_t eax_8 = Menu_PlayMusic_11(a1, ebx, edi, ecx_1, 0f, 1, 2, 0);
    int32_t edi_1 = edi + eax_8;
    int32_t ebp_5 = edx_2
        - (Menu_PlayMusic_11(a1, ebx, edi + edx_2, ecx_1, 8.40779079e-45f, 5, 4, 1) + eax_8);
    Menu_DrawWidget_11(a1, ebx, edi_1, ebp_5, 7, 0);
    return Menu_DrawWidget_11(a1, ecx_1 + ebx, edi_1, ebp_5, 3, 1);
}
