#include "gi_platform.h"
#include "00475DF0-Mine_Update.h"
struct status_msg* Mine_Update(void* a1, void* a2)

{
    struct status_msg* result;
    result = (*(int32_t*)(uintptr_t)(a1 + 0x249));

    if (!result)
    {
        double v_30;
        double* __saved_edi_1 = &v_30;
        v_30 = (*(int32_t*)(uintptr_t)(a2 + 8)) - (*(int32_t*)(uintptr_t)(a1 + 0x20));
        double v_28_1 = (*(int32_t*)(uintptr_t)(a2 + 0x10)) - (*(int32_t*)(uintptr_t)(a1 + 0x28));
        double v_20_1 = (*(int32_t*)(uintptr_t)(a2 + 0x18)) - (*(int32_t*)(uintptr_t)(a1 + 0x30));
        long double fp0_1;
        fp0_1 = Sys_OpenFileStream_11(__saved_edi_1);
        long double x87_r6_2 = fp0_1 - (*(int32_t*)(uintptr_t)(a2 + 0x20));
        long double x87_r5_2 = (*(int32_t*)(uintptr_t)(a1 + 0x244)) * 4096.0f;
        x87_r5_2 - x87_r6_2;
        result = (x87_r5_2 < x87_r6_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_2, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            double v_18 =
                (*(int32_t*)(uintptr_t)(a1 + 0x88)) * v_20_1 + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * v_28_1 + (*(int32_t*)(uintptr_t)(a1 + 0x70)) * v_30;
            long double x87_r7_16 =
                (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * v_20_1 + (*(int32_t*)(uintptr_t)(a1 + 0x80)) * v_28_1 + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * v_30;
            double v_10_1 = x87_r7_16;
            double v_8_1 =
                (*(int32_t*)(uintptr_t)(a1 + 0x90)) * v_20_1 + (*(int32_t*)(uintptr_t)(a1 + 0x84)) * v_28_1 + (*(int32_t*)(uintptr_t)(a1 + 0x78)) * v_30;
            memcpy(&v_30, &v_18, 0x18);
            long double f0_1 = 0.0;
            x87_r7_16 - f0_1;
            result = (x87_r7_16 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                result = (*(int32_t*)(uintptr_t)(a1 + 0x238));

                if (!result)
                {
                    result = (*(int32_t*)(uintptr_t)(a1 + 0x248));

                    if (!result)
                    {
                        result = SoundSys_SetMasterVolume_7(Script_FormatString(), "proxy_arm");

                        if (result)
                            result = SoundSys_StopSoundSample_7(result, a1 + 0x20);

                        (*(int32_t*)(uintptr_t)(a1 + 0x248)) = 1;
                    }
                }
            }
        }
    }

    return result;
}
