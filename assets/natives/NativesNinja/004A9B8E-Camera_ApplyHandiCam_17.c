#include "004A9B8E-Camera_ApplyHandiCam_17.h"
/* 0x004a9b8e Camera_ApplyHandiCam_17 full linked: callers=1 callees=1 */
void __fastcall sub_4a9b8e(int16_t a1, void* a2 @ ebp, long double a3 @ st0)

{
    long double x87_r7 = fabsl(a3);
    long double x87_r6 = g_54455e;
    x87_r6 - x87_r7;
    *(a2 - 0xa0) = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe;

    if (*(a2 - 0x9f) & 0x41)
    {
        long double temp1 = 0;
        a3 - temp1;
        *(a2 - 0xa0) = (a3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(a3, temp1) ? 1 : 0) << 0xa
            | (a3 == temp1 ? 1 : 0) << 0xe;

        if (*(a2 - 0x9f) & 1)
        {
            *(a2 - 0x90) = 4;
            /* tailcall */
            return sub_4a8bd6();
        }

        g_544540;
        *(&a1 + 1) = *(&a1 + 1);
        return;
    }

    long double x87_r7_2 = roundl(a3);
    long double temp2 = 0;
    x87_r7_2 - temp2;
    *(a2 - 0xa0) = (x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp2 ? 1 : 0) << 0xe | 0x3800;
    int32_t edx;
    edx = *(a2 - 0x9f);
    long double x87_r7_4 = a3 - x87_r7_2;
    long double temp3 = 0;
    x87_r7_4 - temp3;
    *(a2 - 0xa0) = (x87_r7_4 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp3 ? 1 : 0) << 0xe | 0x3800;
    long double st0;
    bool c1;
    st0 = __f2xm1(fabsl(x87_r7_4));
}
