#include "gi_platform.h"
#include "00420500-MenuTextConditional_Action.h"
int32_t MenuTextConditional_Action(void* a1, int32_t a2)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x214));

    if (!result)
        return result;

    return ((int(*)())(uintptr_t)(*(((Menu_RequestScreen_15() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0)))(a1,
        a2);
}
