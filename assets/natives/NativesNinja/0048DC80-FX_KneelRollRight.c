#include "0048DC80-FX_KneelRollRight.h"
/* 0x0048dc80 FX_KneelRollRight full linked: callers=0 callees=3 */
bool sub_48dc80(void* a1)

{
    char* var_8 = "Kneel - Roll right";
    int32_t var_c = 0xffffffff;
    void* var_10 = a1;
    sub_48ef70(a1, 1, 1f);
    *(a1 + 0x3c80) = 0x3f800000;
    *(a1 + 0x3df4) = 0xffffffff;
    return sub_48efe0(a1, 1);
}
