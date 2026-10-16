#include "0041D6A0-Menu_MenuK01D.h"
/* 0x0041d6a0 Menu_MenuK01D full linked: callers=1 callees=2 */
int32_t Menu_MenuK01D(void* a1, int32_t a2, char a3)

{
    int32_t i = 0xffffffff;
    void* edi = a1 + 0x54;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    for (int32_t i_1 = ~i - 1; i_1 >= a2; i_1 -= 1)
        *(a1 + i_1 + 0x55) = *(a1 + i_1 + 0x54);

    *(a1 + a2 + 0x54) = a3;
    *(a1 + 0x1a0) = a2 + 1;
    int32_t eax_4;
    int32_t edx;
    edx = HIGHD(a3);
    eax_4 = LOWD(a3);
    int32_t var_4c = ((eax_4 ^ edx) - edx) % 7 + 1;
    void var_40;
    Game_DataSymbolLoad(&var_40, "menu_k0%.1d");
    return sub_4e7180(&var_40, 0, 0);
}
