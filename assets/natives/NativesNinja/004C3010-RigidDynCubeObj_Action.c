#include "004C3010-RigidDynCubeObj_Action.h"
/* 0x004c3010 RigidDynCubeObj_Action full linked: callers=0 callees=8 */
void sub_4c3010(int32_t* a1, float a2)

{
    int32_t* esi = a2;

    if (!esi)
        return;

    void* eax_2 = sub_4cec10(*esi);

    if (!eax_2)
    {
        int32_t __saved_ebx_2 = *esi;
        Error_Show("VirModel "%s" not available");

        while (true)
            /* nop */

        return;
    }

    sub_4c5710(esi[1], a1, eax_2);
    long double x87_r7_1 = a1[0x27];
    long double x87_r6_1 = a1[0x28];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_2;

    if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_2 = a1[0x28];
    else
        x87_r7_2 = a1[0x27];

    long double x87_r6_2 = a1[0x26];
    x87_r6_2 - x87_r7_2;
    long double x87_r7_4;

    if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_5 = a1[0x27];
        long double x87_r6_3 = a1[0x28];
        x87_r6_3 - x87_r7_5;

        if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_4 = a1[0x28];
        else
            x87_r7_4 = a1[0x27];
    }
    else
        x87_r7_4 = a1[0x26];

    int32_t eax_5 = a1[0x35];
    long double x87_r7_7 = sub_4d0950(a1[0x1b]) * x87_r7_4;
    sub_4c7140(esi[1], a1, &esi[2], x87_r7_7, eax_5);
    memcpy(&a1[0x1c], &esi[0xe], 0x28);
    sub_4c4950(a1, a1, a1);
    __builtin_memset(&a1[0x30], 0, 0x14);
}
