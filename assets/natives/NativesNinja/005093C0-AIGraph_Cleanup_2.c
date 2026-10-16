#include "005093C0-AIGraph_Cleanup_2.h"
/* 0x005093c0 AIGraph_Cleanup_2 full linked: callers=0 callees=4 */
int32_t sub_5093c0(void* a1, int32_t a2)

{
    if (sub_4f1050(a1) == 0xffffffff)
        sub_4f1090(sub_4f1240(), a1);

    long double x87_r7 = *(a1 + 0x80);
    long double temp0 = 100.0;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(a1 + 0x80) = *(a1 + 0x80) * 0.000244140625;

    long double x87_r7_3 = *(a1 + 0x88);
    long double temp1 = 100.0;
    x87_r7_3 - temp1;

    if (!(*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(a1 + 0x88) = *(a1 + 0x88) * 0.000244140625;

    int32_t var_8_2 = a2;
    return sub_4f9180(a1);
}
