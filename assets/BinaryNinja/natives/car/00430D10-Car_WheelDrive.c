// Original IGI.EXE function: Car_WheelDrive (VA 0x00430D10; static CFG gate PASS, CFG score 1.000).
#include "Car_WheelDrive.h"
void* Car_WheelDrive(float* context, float param_2, float param_3)

{
    float source_val = context;
    float dest_val = param_2;
    void* temp_val = *(source_val + 0x1b4);
    int32_t entity_val = dest_val * 5;
    void* flagP = *(temp_val + 0x2d4);
    void* context_val = flagP + (entity_val << 2);
    param_2 = *(flagP + (entity_val << 2) + 0x120) * 0.0174532924f * *(source_val + 0x72c);
    float flagP1;

    if (!*(context_val + 0x11d))
        flagP1 = param_3;
    else
    {
        int32_t data_3 = dest_val * 7;
        void* entity_1 = source_val + (data_3 << 2);
        int16_t data_4;
        data_4 = *(source_val + (data_3 << 2) + 0x75d);

        if (!data_4)
        {
        label_430d8b:
            data_4 = *(source_val + 0x6d9);

            if (data_4)
                goto label_430dac;

            flagP1 = param_3;
        }
        else
        {
            long double fpu_val_7_3 = *(source_val + 0x720);
            long double f1_1 = 0.0f;
            fpu_val_7_3 - f1_1;
            data_4 = (fpu_val_7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe;

            if (*(&data_4 + 1) & 0x40)
                goto label_430d8b;

        label_430dac:
            float temp_2 = *(source_val + 0xf8);
            int32_t item_34_1 = *(entity_1 + 0x76c);
            long double fpu_val_7_7 =
                *(*(temp_val + 0x2d4) + 0x1c) * *(source_val + 0x720) * 44.6008873f / *(source_val + 0x758);
            int32_t item_30_1 = *(entity_1 + 0x770);
            float temp_5 = *(source_val + 0x74);
            float temp_6 = *(source_val + 0x8c);
            int32_t item_2c_1 = *(entity_1 + 0x774);
            float data_8 = *(source_val + 0x80);
            long double fpu_val_6_1 = *(entity_1 + 0x760);
            long double f2_1 = temp_5;
            fpu_val_6_1 - f2_1;
            int16_t data_9 = (fpu_val_6_1 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_1, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800;
            float item_40;
            float item_3c;
            float item_38;

            if (!(*(&data_9 + 1) & 0x40))
            {
            label_430e43:
                long double fpu_val_6_6 = temp_6 * *(entity_1 + 0x764) - data_8 * *(entity_1 + 0x768);
                long double fpu_val_5_6 = -((temp_6 * *(entity_1 + 0x760) - temp_5 * *(entity_1 + 0x768)));
                long double fpu_val_4_5 = data_8 * *(entity_1 + 0x760) - temp_5 * *(entity_1 + 0x764);
                long double fpu_val_3_7 = fpu_val_6_6 * *(entity_1 + 0x768);
                long double fpu_val_3_9 = fpu_val_4_5 * *(entity_1 + 0x760);
                item_40 = fpu_val_5_6 * *(entity_1 + 0x768) - fpu_val_4_5 * *(entity_1 + 0x764);
                item_3c = -((fpu_val_3_7 - fpu_val_3_9));
                item_38 = fpu_val_6_6 * *(entity_1 + 0x764) - fpu_val_5_6 * *(entity_1 + 0x760);
            }
            else
            {
                long double fpu_val_6_2 = *(entity_1 + 0x764);
                long double f3_1 = data_8;
                fpu_val_6_2 - f3_1;
                data_9 = (fpu_val_6_2 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&data_9 + 1) & 0x40))
                    goto label_430e43;

                long double fpu_val_6_3 = *(entity_1 + 0x768);
                long double f4_1 = temp_6;
                fpu_val_6_3 - f4_1;
                data_9 = (fpu_val_6_3 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == f4_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&data_9 + 1) & 0x40))
                    goto label_430e43;
            }

            data_9 = *(flagP + 0x261);

            if (!data_9)
                flagP1 = param_3;
            else
            {
                flagP1 = param_3;
                fpu_val_7_7 = Vehicle_InitPlane(source_val, flagP1) * fpu_val_7_7;
            }

            long double fpu_val_7_10 = fpu_val_7_7 - temp_2;
            item_40 = fpu_val_7_10 * item_40;
            float item_3c_1 = fpu_val_7_10 * item_3c;
            long double fpu_val_7_11 = fpu_val_7_10 * item_38;
            float item_48_3 =
                item_3c_1 * *(source_val + 0x80) + item_40 * *(source_val + 0x74) + fpu_val_7_11 * *(source_val + 0x8c);
            long double fpu_val_6_23 = item_40 * *(source_val + 0x78);
            long double fpu_val_6_25 = fpu_val_7_11 * *(source_val + 0x90);
            item_40 = item_40 * *(source_val + 0x70) + fpu_val_7_11 * *(source_val + 0x88) + item_3c_1 * *(source_val + 0x7c);
            float item_68_2 = item_48_3;
            float item_44_3 = fpu_val_6_23 + fpu_val_6_25 + item_3c_1 * *(source_val + 0x84);
            float item_28;
            Sys_DispatchOpcode_12(&item_28, -(param_2));
            float item_1c;
            float item_18;
            float item_14;
            float item_48_4 = item_1c * item_40 + item_14 * item_44_3 + item_18 * item_48_3;
            float item_10;
            long double fpu_val_7_26 = item_10 * item_40;
            float item_24;
            float item_20;
            item_40 = item_28 * item_40 + item_20 * item_44_3 + item_24 * item_48_3;
            float item_3c_3 = item_48_4;
            float item_c;
            float item_8;
            float item_38_2 = fpu_val_7_26 + item_8 * item_44_3 + item_c * item_48_3;
            ForceAccumulator_Add(source_val + 0xf0, &item_40);
        }
    }

    void* result = dest_val * 7;
    void* entity_5 = source_val + (result << 2);
    result = *(source_val + (result << 2) + 0x75d);

    if (!result || flagP1 < 0)
        return result;

    float item_54_2;

    if (!*(context_val + 0x11c))
        item_54_2 = 0.0f;
    else
        item_54_2 = param_2;

    float dest_2 = *(source_val + flagP1 * 0x38 + 0x1d8);
    param_3 = *(source_val + flagP1 * 0x38 + 0x1dc);

    if (*(source_val + 0x744))
    {
        param_3 = dest_2;
        *(source_val + 0x720) = *(source_val + 0x720) * 0.949999988f;
    }

    int32_t item_68_4 = 0x42a3d70a;
    return Wheel_FrictionDrive(source_val + 0xf0, source_val + 0x70, entity_5 + 0x76c, entity_5 + 0x760, item_54_2,
        dest_2, param_3);
}
