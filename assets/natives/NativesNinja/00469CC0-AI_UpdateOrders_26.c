#include "00469CC0-AI_UpdateOrders_26.h"
/* 0x00469cc0 AI_UpdateOrders_26 full linked: callers=3 callees=1 */
double* sub_469cc0(void* a1, void* a2)

{
    int32_t ecx = 0;
    int32_t var_8 = 0;
    ecx = *(a2 + 0x1c);
    double var_58[0xa];
    (*((ecx << 2) + &g_a994e0))(a2, &var_58);
    return sub_469d00(a1, &var_58);
}
