// IGI native provenance: Train_ReceiveChannels - 0x0042B040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042B040-Train_ReceiveChannels.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Train_ReceiveChannels.h"
float Train_ReceiveChannels(void* context, int32_t* param_2) {
    int32_t* temp_val = *param_2[1];

    if (temp_val != 0xbf800000)
        *(context + 0x730) = temp_val;

    if (!*param_2)
    {
        *(param_2[1] + 4) = 0xc0000000;
        *(context + 0x768) = *(context + 0x76c);
        Script_ParseEnumReal32_28(context, nullptr);
        Script_CallNativeHandler_16(context);
        Script_ParseEnumInt32_17(context);
        CarGun_ConstructPath(context);
        Menu_LeaveMenus_21(context, 1);
        long double fpu_val_7_2 = *(context + 0x754) * *(context + 0x758) * 37.9259262f;
        *(context + 0x764) = fpu_val_7_2;
        *(context + 0x108) = fpu_val_7_2;
        *(context + 0x10c) = 0;
        *(context + 0x110) = 0;
        float result = SoundSys_InitSoundSys_17(context + 0xf0);
        long double fpu_val_7_3 = *(context + 0x758);
        *(context + 0x730) = fpu_val_7_3;
        *(context + 0x720) = fpu_val_7_3;
        return result;
    }

    long double fpu_val_7_4 = *(context + 0x720);
    long double f0 = *(context + 0x730);
    fpu_val_7_4 - f0;

    if (!(*(&((fpu_val_7_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_7 = *(context + 0x720);
        long double f1_1 = *(context + 0x730);
        fpu_val_7_7 - f1_1;

        if (!(*(&((fpu_val_7_7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_7 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double fpu_val_7_9 = *(context + 0x720) - *(context + 0x750);
            *(context + 0x720) = fpu_val_7_9;
            long double f3_1 = *(context + 0x730);
            fpu_val_7_9 - f3_1;

            if (*(&((fpu_val_7_9 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                *(context + 0x720) = *(context + 0x730);
        }
    }
    else
    {
        long double fpu_val_7_6 = *(context + 0x750) + *(context + 0x720);
        *(context + 0x720) = fpu_val_7_6;
        long double f2_1 = *(context + 0x730);
        fpu_val_7_6 - f2_1;

        if (!(*(&((fpu_val_7_6 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0x720) = *(context + 0x730);
    }

    long double fpu_val_7_13 = *(context + 0x754) * *(context + 0x720) * 4096000.0f * 9.25925906e-06.0f;
    *(context + 0x764) = fpu_val_7_13;
    *(context + 0x108) = fpu_val_7_13;
    *(context + 0x10c) = 0;
    *(context + 0x110) = 0;
    SoundSys_InitSoundSys_17(context + 0xf0);
    long double fpu_val_7_14 = *(context + 0x764);

    if (*(context + 0x880))
        fpu_val_7_14 = -(fpu_val_7_14);

    *(context + 0x768) = fpu_val_7_14 + *(context + 0x768);
    VehicleChild_Dispatch(context);
    return Menu_LeaveMenus_21(context, 0);
}
