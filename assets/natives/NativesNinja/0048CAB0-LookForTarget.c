#include "0048CAB0-LookForTarget.h"
/* 0x0048cab0 LookForTarget full linked: callers=0 callees=6 */
int32_t* sub_48cab0(void* a1, int32_t* a2)

{
    char* var_28 = "Combat - LookForTarget";
    int32_t var_2c = 0xffffffff;
    void* var_30 = a1;
    void* edi_1 = a2[0xa] + 8;
    *(a1 + 0x3cdc) = 0x3f800000;
    sub_48a920(a1, edi_1);

    if (!*(a1 + 0x3de4))
        return sub_450ff0(a1, a2);

    void var_18;
    sub_451380(&var_18, a1);
    sub_4525b0(a1, &var_18, 0.0349065848f, 0);
    return sub_48ae70(a1, a2, a2[7], 0);
}
