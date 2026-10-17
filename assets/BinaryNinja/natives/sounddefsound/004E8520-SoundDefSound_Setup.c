// Original IGI.EXE function: SoundDefSound_Setup (VA 0x004E8520; static CFG gate PASS, CFG score 1.000).
#include "SoundDefSound_Setup.h"
int32_t* SoundDefSound_Setup(void* context, int32_t* param_2)

{
    if (*(context + 0xdd) && param_2[1])
        return param_2;

    if (*(context + 0x2c) & 2)
    {
        double* data_3 = SoundSysMicrophone_Action(*param_2);
        double item_8_1 = *(context + 0xd8) * 4096.0f;
        int32_t* data_1;
        long double fp0_1;
        fp0_1 = Sys_PushStack_11(data_3, context + 0x88);
        long double fpu_val_6_2 = item_8_1 * item_8_1;
        fpu_val_6_2 - fp0_1;
        data_1 = (fpu_val_6_2 < fp0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fp0_1) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fp0_1 ? 1 : 0) << 0xe;

        if (*(&data_1 + 1) & 1)
            return data_1;
    }

    int32_t data_4 = *(context + 0x12c);

    if (data_4 != *(context + 0x24))
    {
        int32_t temp_1 = *(context + 0x128);
        *(context + 0x24) = data_4;
        *(context + 0x20) = temp_1;
        *(context + 0x28) = 0;
        *(context + 0x120) = 0;
    }

    data_4 = *(context + 0xdc);
    char f0_1 = data_4;
    data_4 = -(data_4);
    *(context + 0x2c) = ((data_4 - data_4) & 0x10) | (*(context + 0x2c) & 0xffffffef);
    return SoundSys_Update3DPosition_8(context + 0x20);
}
