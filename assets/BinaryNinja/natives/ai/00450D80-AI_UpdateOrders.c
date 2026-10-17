// Original IGI.EXE function: AI_UpdateOrders (VA 0x00450D80; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders.h"
int32_t AI_UpdateOrders(void* a1, int32_t a2, int32_t a3)

{
    int32_t v_1c = a2;
    int32_t v_4 = 0;
    int32_t v_8 = 0;
    int32_t v_c = 0;
    int32_t v_14 = a3;
    return AI_TakeCover(a1, &v_1c);
}
