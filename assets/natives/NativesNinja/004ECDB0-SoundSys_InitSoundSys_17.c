#include "004ECDB0-SoundSys_InitSoundSys_17.h"
/* 0x004ecdb0 SoundSys_InitSoundSys_17 full linked: callers=15 callees=1 */
float sub_4ecdb0(void* a1) __location("eax")

{
    float var_c = *(a1 + 0x18);
    float result = *(a1 + 0x1c);
    float var_4 = *(a1 + 0x20);
    long double st0 = sub_4b2a10(&var_c);
    *(a1 + 8) = st0;
    long double temp0 = 0f;
    st0 - temp0;

    if (*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
        | (st0 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        var_c = 0f;
        result = 0f;
        var_4 = 0f;
    }
    else
    {
        long double x87_r7_1 = var_c;
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;

        if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4ece20:
            long double x87_r7_4 = var_4;
            long double x87_r6_1 = result;
            long double x87_r5_1 = var_c;
            long double x87_r7_6 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_4 * x87_r7_4);
            var_c = var_c * x87_r7_6;
            result = result * x87_r7_6;
            var_4 = var_4 * x87_r7_6;
        }
        else
        {
            long double x87_r7_2 = result;
            long double temp2_1 = 0f;
            x87_r7_2 - temp2_1;

            if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4ece20;

            long double x87_r7_3 = var_4;
            long double temp3_1 = 0f;
            x87_r7_3 - temp3_1;

            if (!(*(&((x87_r7_3 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4ece20;
        }
    }

    *(a1 + 0x24) = var_c;
    *(a1 + 0x28) = result;
    *(a1 + 0x2c) = var_4;
    return result;
}
