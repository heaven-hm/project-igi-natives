#include "0048E020-FX_MoveToEventD.h"
/* 0x0048e020 FX_MoveToEventD full linked: callers=0 callees=5 */
int32_t sub_48e020(int32_t a1, int32_t* a2)

{
    double* esi_1 = a2[0xa] + 8;

    if (!*(esi_1 + 0x1c))
        sub_4525e0(a1);
    else
        sub_452660(a1);

    int32_t var_10_1 = esi_1[3];
    char* var_14 = "Move to event %d";
    int32_t var_18 = 0xffffffff;
    int32_t var_1c = a1;
    char result = sub_4522a0(a1, esi_1[3], esi_1, 1);

    if (!result)
        return result;

    return sub_450ff0(a1, a2);
}
