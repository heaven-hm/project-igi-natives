#include "004658D0-AI_AlertAllies_23.h"
/* 0x004658d0 AI_AlertAllies_23 full linked: callers=1 callees=2 */
void* sub_4658d0(void* a1, int32_t a2, int32_t a3)

{
    *(a1 + 0x13a) = 1;
    memcpy(a1 + 0x140, a2, 0x18);
    memcpy(a1 + 0x158, a3, 0x28);
    return a1;
}
