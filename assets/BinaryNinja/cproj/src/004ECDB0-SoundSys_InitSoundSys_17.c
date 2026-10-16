#include "gi_platform.h"
#include "004ECDB0-SoundSys_InitSoundSys_17.h"
float SoundSys_InitSoundSys_17(void* a1) __location("valA")

{
    float v_c = (*(int32_t*)(uintptr_t)(a1 + 0x18));
    float result = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    float v_4 = (*(int32_t*)(uintptr_t)(a1 + 0x20));
    long double fp0 = Sys_DispatchOpcode_10(&v_c);
    (*(int32_t*)(uintptr_t)(a1 + 8)) = fp0;
    long double f0 = 0.0f;
    fp0 - f0;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        v_c = 0.0f;
        result = 0.0f;
        v_4 = 0.0f;
    }
    else
    {
        long double x87_r7_1 = v_c;
        long double f1_1 = 0.0f;
        x87_r7_1 - f1_1;

        if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
    label_4ece20: ;
            long double x87_r7_4 = v_4;
            long double x87_r6_1 = result;
            long double x87_r5_1 = v_c;
            long double x87_r7_6 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_4 * x87_r7_4);
            v_c = v_c * x87_r7_6;
            result = result * x87_r7_6;
            v_4 = v_4 * x87_r7_6;
        }
        else
        {
            long double x87_r7_2 = result;
            long double f2_1 = 0.0f;
            x87_r7_2 - f2_1;

            if (!(*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4ece20;

            long double x87_r7_3 = v_4;
            long double f3_1 = 0.0f;
            x87_r7_3 - f3_1;

            if (!(*(&((x87_r7_3 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4ece20;
        }
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x24)) = v_c;
    (*(int32_t*)(uintptr_t)(a1 + 0x28)) = result;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = v_4;
    return result;
}
