#include "0048D830-FX_StandRollLeft.h"
/* 0x0048d830 FX_StandRollLeft full linked: callers=0 callees=2 */
bool sub_48d830(void* a1)

{
    char* var_8 = "Stand - Roll left";
    int32_t var_c = 0xffffffff;
    void* var_10 = a1;
    *(a1 + 0x3c7c) = 0x3f800000;
    *(a1 + 0x3df4) = 1;
    return sub_48efe0(a1, 1);
}
