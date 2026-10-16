#include "004EE1B0-SoundSys_AttachLipsync_18.h"
/* 0x004ee1b0 SoundSys_AttachLipsync_18 full linked: callers=3 callees=1 */
void* sub_4ee1b0(void* a1)

{
    long double x87_r7 = *(a1 + 0xc);
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40)
        sub_4ee200(a1);
    else
    {
        long double x87_r7_1 = *(a1 + 0x10);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;

        if (*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            sub_4ee200(a1);
        else
        {
            long double x87_r7_2 = *(a1 + 0x14);
            long double temp2_1 = 0f;
            x87_r7_2 - temp2_1;

            if (*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                sub_4ee200(a1);
        }
    }

    return a1 + 0xc;
}
