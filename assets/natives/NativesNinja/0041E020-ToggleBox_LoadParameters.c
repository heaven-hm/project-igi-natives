#include "0041E020-ToggleBox_LoadParameters.h"
/* 0x0041e020 ToggleBox_LoadParameters full linked: callers=0 callees=5 */
int32_t ToggleBox_LoadParameters(void* a1)

{
    void* esi = *(a1 + 0x94);
    void* ecx = *(a1 + 0x24);
    int32_t edx = *(a1 + 0x20);
    int32_t eax = *(a1 + 0x28);
    int32_t ebp = *(a1 + 0x2c);
    void* edi = *(a1 + 0x98);
    *(esi + 0x24) = ecx;
    int32_t ecx_2 = eax >> 1;
    *(esi + 0x20) = edx;
    *(esi + 0x28) = ecx_2;
    *(esi + 0x2c) = ebp;
    *(edi + 0x20) = edx + ecx_2;
    *(edi + 0x24) = ecx;
    *(edi + 0x28) = eax - ecx_2;
    *(edi + 0x2c) = ebp;
    Menu_UpdateLanguage_14(esi, *(esi + 0x20), *(esi + 0x24), *(esi + 0x28), *(esi + 0x2c),
        nullptr, nullptr);
    Menu_UpdateLanguage_14(edi, *(edi + 0x20), *(edi + 0x24), *(edi + 0x28), *(edi + 0x2c),
        nullptr, nullptr);

    if ((*(esi + 0x4b) || *(a1 + 0x50) == 0xffffffff) && !*(a1 + 0xa4))
    {
        sub_4e7180("menu_high", 0, 0);
        *(a1 + 0xa4) = 1;
    }
    else if ((*(edi + 0x4b) || *(a1 + 0x50) == 0xfffffffe) && *(a1 + 0xa4))
    {
        sub_4e7180("menu_high", 0, 0);
        *(a1 + 0xa4) = 0;
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
