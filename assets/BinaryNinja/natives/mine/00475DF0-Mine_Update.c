// Original IGI.EXE function: Mine_Update (VA 0x00475DF0; static CFG gate PASS, CFG score 0.933).
#include "Mine_Update.h"
struct status_msg* Mine_Update(void* context, void* param_2)

{
    struct status_msg* result;
    result = *(context + 0x249);

    if (!result)
    {
        double item_30;
        double* saved_edi_1 = &item_30;
        item_30 = *(param_2 + 8) - *(context + 0x20);
        double item_28_1 = *(param_2 + 0x10) - *(context + 0x28);
        double item_20_1 = *(param_2 + 0x18) - *(context + 0x30);
        long double fp0_1;
        fp0_1 = Sys_OpenFileStream_11(saved_edi_1);
        long double fpu_val_6_2 = fp0_1 - *(param_2 + 0x20);
        long double fpu_val_5_2 = *(context + 0x244) * 4096.0f;
        fpu_val_5_2 - fpu_val_6_2;
        result = (fpu_val_5_2 < fpu_val_6_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_2, fpu_val_6_2) ? 1 : 0) << 0xa
            | (fpu_val_5_2 == fpu_val_6_2 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            double item_18 =
                *(context + 0x88) * item_20_1 + *(context + 0x7c) * item_28_1 + *(context + 0x70) * item_30;
            long double fpu_val_7_16 =
                *(context + 0x8c) * item_20_1 + *(context + 0x80) * item_28_1 + *(context + 0x74) * item_30;
            double item_10_1 = fpu_val_7_16;
            double item_8_1 =
                *(context + 0x90) * item_20_1 + *(context + 0x84) * item_28_1 + *(context + 0x78) * item_30;
            memcpy(&item_30, &item_18, 0x18);
            long double f0_1 = 0.0;
            fpu_val_7_16 - f0_1;
            result = (fpu_val_7_16 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_16, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                result = *(context + 0x238);

                if (!result)
                {
                    result = *(context + 0x248);

                    if (!result)
                    {
                        result = SoundSys_SetMasterVolume_7(Script_FormatString(), "proxy_arm");

                        if (result)
                            result = SoundSys_StopSoundSample_7(result, context + 0x20);

                        *(context + 0x248) = 1;
                    }
                }
            }
        }
    }

    return result;
}
