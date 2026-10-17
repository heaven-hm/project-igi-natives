// Original IGI.EXE function: AI_UpdateOrders_23 (VA 0x004658A0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders_23.h"
int32_t AI_UpdateOrders_23(int32_t* a1, void* a2)

{
    *a1 = *(a2 + 0xfc);
    a1[1] = *(a2 + 0x108);
    int32_t result = *(a2 + 0x114);
    a1[2] = result;
    return result;
}
