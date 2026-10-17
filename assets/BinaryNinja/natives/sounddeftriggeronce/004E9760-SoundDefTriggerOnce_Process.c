// Original IGI.EXE function: SoundDefTriggerOnce_Process (VA 0x004E9760; static CFG gate PASS, CFG score 1.000).
#include "SoundDefTriggerOnce_Process.h"
int32_t* SoundDefTriggerOnce_Process(void* context, int32_t* param_2)

{
    int32_t* result = param_2;

    if ((!*(context + 0xe2) || !result[1]) && *(context + 0x123))
    {
        if (!(*(context + 0x2c) & 2))
        {
        label_4e97ce:
            int32_t data_3 = *(context + 0x134);

            if (data_3 != *(context + 0x24))
            {
                int32_t temp_1 = *(context + 0x130);
                *(context + 0x24) = data_3;
                *(context + 0x20) = temp_1;
                *(context + 0x28) = 0;
                *(context + 0x128) = 0;
            }

            data_3 = *(context + 0xe0);
            char f0_1 = data_3;
            data_3 = -(data_3);
            *(context + 0x2c) = ((data_3 - data_3) & 0x10) | (*(context + 0x2c) & 0xffffffef);
            return SoundSys_Update3DPosition_8(context + 0x20);
        }

        double* data_2 = SoundSysMicrophone_Action(*result);
        double item_8_1 = *(context + 0xcc) * 4096.0f;
        long double fp0_1;
        fp0_1 = Sys_PushStack_11(data_2, context + 0x88);
        long double fpu_val_6_2 = item_8_1 * item_8_1;
        fpu_val_6_2 - fp0_1;
        result = (fpu_val_6_2 < fp0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fp0_1) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
            goto label_4e97ce;
    }

    return result;
}
