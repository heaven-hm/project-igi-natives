#include "AI_SelectTarget_19.h"
int32_t AI_SelectTarget_19(void* a1)

{
    void v_18;
    memcpy(&v_18, a1 + 0x20, 0x18);
    int32_t v_24;
    int32_t* v_3c = &v_24;
    v_24 = 0;
    int32_t v_20 = 0;
    int32_t v_1c = 0;
    Human_GroundQuery(a1, &v_18, &v_18, a1 + 0x2f4, 4096000f);
    AI_UpdateOrders_19(a1, &v_18);
    return 0;
}
