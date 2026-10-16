#include "gi_platform.h"
#include "004083C0-HumanPlayer_HandleInput.h"
int32_t HumanPlayer_HandleInput(int16_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5)

{
    int32_t v_18 = a3;
    int32_t valA3 = 0;
    valA3 = g_53851a;
    return ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(((valA3 * 0x180 + a1) << 2) + &g_a96ae0))))(0, &v_18, v_18, a2, *a5,
        a5[1], a5[2], a4);
}
