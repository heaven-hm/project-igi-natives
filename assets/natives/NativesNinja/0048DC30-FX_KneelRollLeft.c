#include "0048DC30-FX_KneelRollLeft.h"
/* 0x0048dc30 FX_KneelRollLeft full linked: callers=0 callees=3 */
bool sub_48dc30(void* a1)

{
    char* var_8 = "Kneel - Roll left";
    int32_t var_c = 0xffffffff;
    void* var_10 = a1;
    sub_48ef70(a1, 1, 1f);
    *(a1 + 0x3c7c) = 0x3f800000;
    *(a1 + 0x3df4) = 1;
    return sub_48efe0(a1, 1);
}
