// Original IGI.EXE function: MenuFrame_Update (VA 0x004225F0; static CFG gate FAIL, CFG score 0.833).
#include "MenuFrame_Update.h"
int32_t MenuFrame_Update(void* a1, int32_t a2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(a1, a2);
    __builtin_memset(a1 + 0x94, 0, 0x20);
    *(a1 + 0x54) = 0;
    *(a1 + 0x20) = 0xdc;
    *(a1 + 0x24) = 0xdc;
    *(a1 + 0x28) = 0xc8;
    *(a1 + 0x2c) = 0x28;
    return 0xdc;
}
