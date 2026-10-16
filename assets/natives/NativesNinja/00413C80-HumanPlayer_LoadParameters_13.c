#include "00413C80-HumanPlayer_LoadParameters_13.h"
/* 0x00413c80 HumanPlayer_LoadParameters_13 full linked: callers=28 callees=0 */
struct collision_set* HumanPlayer_LoadParameters_13(void* a, int32_t b, int32_t c, void* d)

{
    int32_t entry_result;
    int32_t result = entry_result;
    int32_t ecx = 0;
    ecx = g_5391b1;
    int32_t esi = 0;
    esi = *(a + 0x1c);
    result = 0;
    int32_t ecx_4 = *(((ecx * 0x180 + esi) << 2) + &g_a96ae0);

    if (!ecx_4)
        return 0;

    ecx_4(a, &result);
    return result;
}
