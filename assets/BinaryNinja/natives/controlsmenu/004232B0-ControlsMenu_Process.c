#include "ControlsMenu_Process.h"
int32_t* ControlsMenu_Process(void* a1, int32_t a2)

{
    int32_t i_1 = 0x1b;
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(a1, a2);
    *(a1 + 0x20) = 0x12c;
    *(a1 + 0x24) = 0xe6;
    *(a1 + 0x28) = 0x168;
    *(a1 + 0x2c) = 0xc8;
    *(a1 + 0x3c) = 1;
    *(a1 + 0x40) = 1;
    int32_t* valA3 = a1 + 0x154;
    int32_t i;

    do
    {
        valA3[-0x40] = 0;
        *valA3 = 0;
        valA3 = &valA3[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(a1 + 0x354) = 0;
    *(a1 + 0x358) = 0;
    *(a1 + 0x35c) = 0xffffffff;
    *(a1 + 0x359) = 0;
    *(a1 + 0x35a) = 0;
    return Sys_ResolveSymbol_13(0x57bc48);
}
