#include "0048D870-FX_StandRollRight.h"
/* 0x0048d870 FX_StandRollRight full linked: callers=0 callees=2 */
bool sub_48d870(void* a1)

{
    char* var_8 = "Stand - Roll right";
    int32_t var_c = 0xffffffff;
    void* var_10 = a1;
    *(a1 + 0x3c80) = 0x3f800000;
    *(a1 + 0x3df4) = 0xffffffff;
    return sub_48efe0(a1, 1);
}
