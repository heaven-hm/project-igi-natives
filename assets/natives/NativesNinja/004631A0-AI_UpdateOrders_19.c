#include "004631A0-AI_UpdateOrders_19.h"
/* 0x004631a0 AI_UpdateOrders_19 full linked: callers=15 callees=4 */
int32_t sub_4631a0(void* a1, int32_t* a2)

{
    sub_4c6940(Level_StartMission_4(), a1, a2, *(a1 + 0xa0));
    void* var_1c = a1;
    sub_465730(*(a1 + 0x4ec));
    *(a1 + 0x7d0) = *a2;
    *(a1 + 0x7d4) = a2[1];
    *(a1 + 0x7d8) = a2[2];
    *(a1 + 0x7dc) = a2[3];
    __builtin_memset(a1 + 0x670, 0, 0x18);
    return 0;
}
