#include "AI_UpdateOrders_26.h"
double* AI_UpdateOrders_26(void* a1, void* a2)

{
    int32_t objC = 0;
    int32_t v_8 = 0;
    objC = *(a2 + 0x1c);
    double v_58[0xa];
    (*((objC << 2) + &g_a994e0))(a2, &v_58);
    return AI_AlertAllies_26(a1, &v_58);
}
