// Original IGI.EXE function: AI_UpdateOrders_10 (VA 0x004588C0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders_10.h"
int32_t AI_UpdateOrders_10(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45b820;
    return result;
}
