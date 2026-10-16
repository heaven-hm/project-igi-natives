#include "gi_platform.h"
#include "004225F0-MenuFrame_Update.h"
int32_t MenuFrame_Update(void* a1, int32_t a2)

{
    ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a96ae0)))(a1, a2);
    __builtin_memset(a1 + 0x94, 0, 0x20);
    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0xdc;
    (*(int32_t*)(uintptr_t)(a1 + 0x24)) = 0xdc;
    (*(int32_t*)(uintptr_t)(a1 + 0x28)) = 0xc8;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = 0x28;
    return 0xdc;
}
