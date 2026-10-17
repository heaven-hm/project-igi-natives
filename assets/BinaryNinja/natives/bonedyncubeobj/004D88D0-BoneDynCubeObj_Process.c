// Original IGI.EXE function: BoneDynCubeObj_Process (VA 0x004D88D0; static CFG gate PASS, CFG score 0.889).
#include "BoneDynCubeObj_Process.h"
❓  int32_t* BoneDynCubeObj_Process(float context, float param_2, float param_3 , float param_4, float param_5 , float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    int32_t flagP;
    int32_t item_4_1 = flagP;
    Camera_UpdateTransform_5(0x100c0);
    int32_t* temp_val = param_2;
    float source_val = context;
    float arg_48 = *temp_val;
    void arg_40b8;
    int32_t* item_4 = &arg_40b8;
    int32_t* data_1 = *(source_val + 0x74);
    float arg_18 = temp_val[1];

    if (data_1)
    {
        void* data_2 = *data_1;
        data_1 = *(*(data_2 + 0xc) + 0xc);

        if (!data_1[0xa])
        {
            int32_t** entity_3 = data_1[0xb];
            int32_t** arg_5c = entity_3;

            if (entity_3)
            {
                int16_t data_3;
                data_3 = temp_val[2];
                void* context_1 = entity_3[5];
                int32_t dest_1 = entity_3[1];

                if (data_3 == 0xff)
                    goto label_4d8980;

                int32_t data_5 = 0;
                data_5 = *(source_val + 0x1c);
                int32_t data_6 = *(((data_3 * 0x180 + data_5) << 2) + &g_a96ae0);

                if (!data_6)
                    goto label_4d8980;

                data_6(source_val, *(param_2 + 0xc));
                data_1 = param_2;

                if (*data_1[3])
                {
                    entity_3 = arg_5c;
                label_4d8980:
                    int32_t temp_5 = 0xffffffff;
                    int32_t* arg_20;
                    float arg_38;
                    float return_addr_2;
                    float arg_58;
                    float arg_60;

                    if (dest_1 > 0)
                    {
                        int32_t item_8_1 = dest_1;
                        void arg_b8;
                        arg_20 = &arg_b8;
                        bool flag_2_1;

                        do
                        {
                            int32_t data_7 = *(context_1 + 0xc);

                            if (temp_5 != data_7)
                            {
                                temp_5 = data_7;
                                void* data_10 = *(context + 0x70) + data_7 * 0x84;
                                memcpy(&arg_60, data_10 + 0x24, 0x28);
                                source_val = context;
                                param_3 = *(data_10 + 0x18);
                                param_4 = *(data_10 + 0x1c);
                                entity_3 = arg_5c;
                                arg_38 = *(data_10 + 0x20);
                            }

                            long double fpu_val_7_2 = param_6 * *(context_1 + 8);
                            long double fpu_val_6_2 = param_5 * *(context_1 + 4);
                            context_1 += 0x10;
                            return_addr_2 = fpu_val_7_2 + fpu_val_6_2 + arg_60 * *(context_1 - 0x10);
                            return_addr = return_addr_2;
                            arg_58 = param_12 * *(context_1 - 8) + param_11 * *(context_1 - 0xc)
                                + param_10 * *(context_1 - 0x10);
                            long double fpu_val_7_16 = param_4 + param_9 * *(context_1 - 8)
                                + param_8 * *(context_1 - 0xc) + param_7 * *(context_1 - 0x10);
                            *item_4 = param_3 + return_addr_2;
                            context = fpu_val_7_16;
                            long double fpu_val_7_18 = arg_38 + arg_58;
                            item_4[1] = context;
                            item_4[2] = fpu_val_7_18;
                            *arg_20 = temp_5;
                            arg_20 = &arg_20[1];
                            flag_2_1 = item_8_1 != 1;
                            item_4 = &item_4[3];
                            item_8_1 -= 1;
                        } while (flag_2_1);
                    }

                    double* temp_6 = arg_48;
                    double* dest_7 = arg_18;
                    float return_addr_1 = *temp_6 - *(source_val + 0x20);
                    float arg_28 = temp_6[1] - *(source_val + 0x28);
                    float arg_2c = temp_6[2] - *(source_val + 0x30);
                    long double fpu_val_7_26 = *dest_7 - *(source_val + 0x20);
                    context = dest_7[1] - *(source_val + 0x28);
                    param_2 = dest_7[2] - *(source_val + 0x30);
                    long double fpu_val_6_17 = return_addr_1;
                    fpu_val_6_17 - fpu_val_7_26;
                    long double fpu_val_6_18;

                    fpu_val_6_18 = !(*(&((fpu_val_6_17 < fpu_val_7_26 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_17, fpu_val_7_26) ? 1 : 0) << 0xa
                        | (fpu_val_6_17 == fpu_val_7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? fpu_val_7_26
                        : return_addr_1;

                    double arg_90 = fpu_val_6_18 - 0.100000001f;
                    long double fpu_val_6_20 = arg_28;
                    long double f1_1 = context;
                    fpu_val_6_20 - f1_1;
                    long double fpu_val_6_21;

                    fpu_val_6_21 = !(*(&((fpu_val_6_20 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_20, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_20 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? context : arg_28;

                    double arg_98 = fpu_val_6_21 - 0.100000001f;
                    long double fpu_val_6_23 = arg_2c;
                    long double f3_1 = param_2;
                    fpu_val_6_23 - f3_1;
                    long double fpu_val_6_24;

                    fpu_val_6_24 = !(*(&((fpu_val_6_23 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_23, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_23 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? param_2 : arg_2c;

                    double arg_a0 = fpu_val_6_24 - 0.100000001f;
                    long double fpu_val_6_26 = return_addr_1;
                    fpu_val_6_26 - fpu_val_7_26;

                    if (!(*(&((fpu_val_6_26 < fpu_val_7_26 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_26, fpu_val_7_26) ? 1 : 0) << 0xa
                            | (fpu_val_6_26 == fpu_val_7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        fpu_val_7_26 = return_addr_1;

                    arg_60 = fpu_val_7_26 + 0.100000001f;
                    long double fpu_val_7_29 = arg_28;
                    long double f4_1 = context;
                    fpu_val_7_29 - f4_1;
                    long double fpu_val_7_30;

                    fpu_val_7_30 = *(&((fpu_val_7_29 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_29, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_29 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? context : arg_28;

                    param_6 = fpu_val_7_30 + 0.100000001f;
                    long double fpu_val_7_32 = arg_2c;
                    long double f5_1 = param_2;
                    fpu_val_7_32 - f5_1;
                    long double fpu_val_7_33;

                    fpu_val_7_33 = *(&((fpu_val_7_32 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_32, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_32 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? param_2 : arg_2c;

                    return_addr = return_addr_1;
                    data_1 = arg_2c;
                    param_8 = fpu_val_7_33 + 0.100000001f;
                    float arg_3c = *dest_7 - *temp_6;
                    float arg_40 = dest_7[1] - temp_6[1];
                    float arg_44 = dest_7[2] - temp_6[2];
                    float temp_7 = *(source_val + 0xa0);
                    return_addr = -(return_addr_1);
                    context = -(arg_28);
                    long double fpu_val_7_46 = -(data_1);
                    param_2 = fpu_val_7_46;
                    long double fpu_val_6_27 = context;
                    long double fpu_val_5_1 = return_addr;
                    arg_18 = arg_44;
                    arg_48 = arg_40;
                    double arg_88 = arg_3c;
                    item_4 = param_2 * arg_44 + context * arg_40 + return_addr * arg_3c;
                    long double fpu_val_7_50 = fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_27 * fpu_val_6_27
                        + fpu_val_7_46 * fpu_val_7_46 - 1.0f
                        / (arg_88 * arg_88 + arg_48 * arg_48 + arg_18 * arg_18) * item_4 * item_4;
                    long double fpu_val_6_38 = temp_7 * temp_7;
                    fpu_val_6_38 - fpu_val_7_50;
                    data_1 = (fpu_val_6_38 < fpu_val_7_50 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_38, fpu_val_7_50) ? 1 : 0) << 0xa
                        | (fpu_val_6_38 == fpu_val_7_50 ? 1 : 0) << 0xe;

                    if (!(*(&data_1 + 1) & 1))
                    {
                        long double fpu_val_7_51 = temp_7;
                        long double f6_1 = arg_90;
                        fpu_val_7_51 - f6_1;
                        data_1 = (fpu_val_7_51 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_51, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_51 == f6_1 ? 1 : 0) << 0xe;

                        if (!(*(&data_1 + 1) & 1))
                        {
                            long double fpu_val_7_52 = temp_7;
                            long double f7_1 = arg_98;
                            fpu_val_7_52 - f7_1;
                            data_1 = (fpu_val_7_52 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_52, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_52 == f7_1 ? 1 : 0) << 0xe;

                            if (!(*(&data_1 + 1) & 1))
                            {
                                long double fpu_val_7_53 = temp_7;
                                long double f8_1 = arg_a0;
                                fpu_val_7_53 - f8_1;
                                data_1 = (fpu_val_7_53 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_53, f8_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_53 == f8_1 ? 1 : 0) << 0xe;

                                if (!(*(&data_1 + 1) & 1))
                                {
                                    long double fpu_val_7_55 = -(temp_7);
                                    item_4 = fpu_val_7_55;
                                    long double f9_1 = arg_60;
                                    fpu_val_7_55 - f9_1;
                                    data_1 = (fpu_val_7_55 < f9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_55, f9_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_55 == f9_1 ? 1 : 0) << 0xe;

                                    if (*(&data_1 + 1) & 0x41)
                                    {
                                        long double fpu_val_7_56 = item_4;
                                        long double f10_1 = param_6;
                                        fpu_val_7_56 - f10_1;
                                        data_1 = (fpu_val_7_56 < f10_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_56, f10_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_56 == f10_1 ? 1 : 0) << 0xe;

                                        if (*(&data_1 + 1) & 0x41)
                                        {
                                            long double fpu_val_7_57 = item_4;
                                            long double f11_1 = param_8;
                                            fpu_val_7_57 - f11_1;
                                            data_1 = (fpu_val_7_57 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_57, f11_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_57 == f11_1 ? 1 : 0) << 0xe;

                                            if (*(&data_1 + 1) & 0x41)
                                            {
                                                long double fpu_val_7_58 = arg_40;
                                                long double f12_1 = 0.0f;
                                                fpu_val_7_58 - f12_1;

                                                arg_48 = !(*(&((fpu_val_7_58 < f12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_58, f12_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_58 == f12_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                    ? arg_40 : -(arg_40);

                                                long double fpu_val_7_61 = arg_3c;
                                                long double f13_1 = 0.0f;
                                                fpu_val_7_61 - f13_1;

                                                arg_48 = !(*(&((fpu_val_7_61 < f13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_61, f13_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_61 == f13_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                    ? arg_3c : -(arg_3c);

                                                data_1 = *entity_3;
                                                int16_t* source_2 = entity_3[4];
                                                arg_48 = 0.0f;

                                                if (data_1 > 0)
                                                {
                                                    float dest_8 = param_2;

                                                    while (true)
                                                    {
                                                        int32_t data_24 = 0;
                                                        data_24 = *source_2;
                                                        int32_t entity_11 = data_24 * 3;
                                                        int32_t data_25 = 0;
                                                        data_25 = source_2[1];
                                                        long double fpu_val_7_64 =
                                                            *(&arg_40b8 + (entity_11 << 2));
                                                        long double f14_1 = arg_90;
                                                        fpu_val_7_64 - f14_1;
                                                        int32_t data_26 = 0;
                                                        data_26 = source_2[2];
                                                        int32_t saved_target;

                                                        if (!(*(&(
                                                            (fpu_val_7_64 < f14_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_64, f14_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_7_64 == f14_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1))
                                                        {
                                                        label_4d8e28:
                                                            long double fpu_val_7_67 =
                                                                (&saved_target)[entity_11 + 0x1034];
                                                            long double f15_1 = arg_98;
                                                            fpu_val_7_67 - f15_1;

                                                            if (!(*(&(
                                                                (fpu_val_7_67 < f15_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_67, f15_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_67 == f15_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            {
                                                            label_4d8e5f:
                                                                long double fpu_val_7_70 =
                                                                    (&saved_target)[entity_11 + 0x1035];
                                                                long double f17_1 = arg_a0;
                                                                fpu_val_7_70 - f17_1;

                                                                if (!(*(&(
                                                                    (fpu_val_7_70 < f17_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(fpu_val_7_70, f17_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (fpu_val_7_70 == f17_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1))
                                                                {
                                                                label_4d8e96:
                                                                    long double fpu_val_7_73 =
                                                                        (&saved_target)[entity_11 + 0x1033];
                                                                    long double f20_1 = arg_60;
                                                                    fpu_val_7_73 - f20_1;

                                                                    if (*(&(
                                                                        (fpu_val_7_73 < f20_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(fpu_val_7_73, f20_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (fpu_val_7_73 == f20_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    {
                                                                    label_4d8ec1:
                                                                        long double fpu_val_7_76 =
                                                                            (&saved_target)[entity_11 + 0x1034];
                                                                        long double f23_1 = param_6;
                                                                        fpu_val_7_76 - f23_1;

                                                                        if (*(&(
                                                                            (fpu_val_7_76 < f23_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(fpu_val_7_76, f23_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (fpu_val_7_76 == f23_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                        label_4d8eef:
                                                                            long double fpu_val_7_79 =
                                                                                (&saved_target)[entity_11 + 0x1035];
                                                                            long double f26_1 = param_8;
                                                                            fpu_val_7_79 - f26_1;

                                                                            if (*(&(
                                                                                (fpu_val_7_79 < f26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_79, f26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_79 == f26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                            label_4d8f2a:
                                                                                float arg_c =
                                                                                    (&saved_target)[data_26 * 3 + 0x1033]
                                                                                    - (&saved_target)[entity_11 + 0x1033];
                                                                                float arg_10 =
                                                                                    (&saved_target)[data_26 * 3 + 0x1034]
                                                                                    - (&saved_target)[entity_11 + 0x1034];
                                                                                float arg_14 =
                                                                                    (&saved_target)[data_26 * 3 + 0x1035]
                                                                                    - (&saved_target)[entity_11 + 0x1035];
                                                                                return_addr =
                                                                                    (&saved_target)[data_25 * 3 + 0x1033]
                                                                                    - (&saved_target)[entity_11 + 0x1033];
                                                                                context =
                                                                                    (&saved_target)[data_25 * 3 + 0x1034]
                                                                                    - (&saved_target)[entity_11 + 0x1034];
                                                                                long double fpu_val_7_93 =
                                                                                    (&saved_target)[data_25 * 3 + 0x1035]
                                                                                    - (&saved_target)[entity_11 + 0x1035];
                                                                                param_2 = fpu_val_7_93;
                                                                                item_4 =
                                                                                    fpu_val_7_93 * arg_10 - context * arg_14;
                                                                                param_3 = item_4;
                                                                                long double fpu_val_7_98 =
                                                                                    param_2 * arg_c - return_addr * arg_14;
                                                                                param_4 = -(fpu_val_7_98);
                                                                                arg_18 =
                                                                                    context * arg_c - return_addr * arg_10;
                                                                                arg_38 = arg_18;
                                                                                long double fpu_val_7_106 = arg_38 * arg_44
                                                                                    + param_4 * arg_40 + param_3 * arg_3c;
                                                                                long double f29_1 = 0.0;
                                                                                fpu_val_7_106 - f29_1;
                                                                                arg_88 = fpu_val_7_106;
                                                                                bool c1_1 = /* bool c1_1 =
                                                                                    unknown  {fst dword [stack_ptr+0x9c], fp0} */;

                                                                                if (!(*(&(
                                                                                    (fpu_val_7_106 < f29_1 ? 1 : 0) << 8
                                                                                    | (c1_1 ? 1 : 0) << 9 | (
                                                                                    FCMP_UO(fpu_val_7_106, f29_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_106 == f29_1 ? 1 : 0)
                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                {
                                                                                    long double fpu_val_7_108 = ((
                                                                                        (&saved_target)[entity_11 + 0x1034]
                                                                                        - arg_28) * param_4 + (
                                                                                        (&saved_target)[entity_11 + 0x1033]
                                                                                        - return_addr_1) * param_3 + (
                                                                                        (&saved_target)[entity_11 + 0x1035]
                                                                                        - arg_2c) * arg_38) / fpu_val_7_106;
                                                                                    float item_8_3 = fpu_val_7_108;
                                                                                    long double f32_1 = 0.0f;
                                                                                    fpu_val_7_108 - f32_1;

                                                                                    if (!(*(&(
                                                                                        (fpu_val_7_108 < f32_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_108, f32_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_108 == f32_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1))
                                                                                    {
                                                                                        long double fpu_val_7_109 = item_8_3;
                                                                                        long double f34_1 = 1.0f;
                                                                                        fpu_val_7_109 - f34_1;

                                                                                        if (*(&(
                                                                                            (fpu_val_7_109 < f34_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_7_109, f34_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_7_109 == f34_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 0x41)
                                                                                        {
                                                                                            return_addr_2 =
                                                                                                item_8_3 * arg_3c + return_addr_1;
                                                                                            float arg_54 =
                                                                                                item_8_3 * arg_40 + arg_28;
                                                                                            arg_58 = item_8_3 * arg_44 + arg_2c;
                                                                                            long double fpu_val_7_119 = param_3;
                                                                                            long double f35_1 = 0.0f;
                                                                                            fpu_val_7_119 - f35_1;
                                                                                            float arg_ac;

                                                                                            arg_ac = !(*(&(
                                                                                                (fpu_val_7_119 < f35_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_7_119, f35_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_7_119 == f35_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1) ? param_3 : -(param_3);

                                                                                            long double fpu_val_7_122 = param_4;
                                                                                            long double f36_1 = 0.0f;
                                                                                            fpu_val_7_122 - f36_1;
                                                                                            long double fpu_val_7_123 = param_4;

                                                                                            if (*(&(
                                                                                                    (fpu_val_7_122 < f36_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_7_122, f36_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_122 == f36_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                fpu_val_7_123 = -(fpu_val_7_123);

                                                                                            long double fpu_val_6_55 = arg_38;
                                                                                            long double f37_1 = 0.0f;
                                                                                            fpu_val_6_55 - f37_1;
                                                                                            long double fpu_val_6_56 = arg_38;

                                                                                            if (*(&(
                                                                                                    (fpu_val_6_55 < f37_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_6_55, f37_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_6_55 == f37_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                fpu_val_6_56 = -(fpu_val_6_56);

                                                                                            long double fpu_val_5_15 = arg_ac;
                                                                                            fpu_val_5_15 - fpu_val_7_123;
                                                                                            long double fpu_val_5_16;

                                                                                            if (!(*(&(
                                                                                                (fpu_val_5_15 < fpu_val_7_123 ? 1 : 0) << 8
                                                                                                | (FCMP_UO(fpu_val_5_15, fpu_val_7_123) ? 1
                                                                                                : 0) << 0xa
                                                                                                | (fpu_val_5_15 == fpu_val_7_123 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41))
                                                                                            {
                                                                                                fpu_val_5_16 = arg_ac;
                                                                                                fpu_val_5_16 - fpu_val_6_56;
                                                                                            }

                                                                                            float item_8_4;

                                                                                            if (*(&(
                                                                                                (fpu_val_5_15 < fpu_val_7_123 ? 1 : 0) << 8
                                                                                                | (FCMP_UO(fpu_val_5_15, fpu_val_7_123) ? 1
                                                                                                : 0) << 0xa
                                                                                                | (fpu_val_5_15 == fpu_val_7_123 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41 || *(&(
                                                                                                (fpu_val_5_16 < fpu_val_6_56 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_5_16, fpu_val_6_56) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_5_16 == fpu_val_6_56 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41)
                                                                                            {
                                                                                                fpu_val_7_123 - fpu_val_6_56;

                                                                                                if (*(&(
                                                                                                    (fpu_val_7_123 < fpu_val_6_56 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(fpu_val_7_123, fpu_val_6_56) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (fpu_val_7_123 == fpu_val_6_56 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                {
                                                                                                    fpu_val_7_106 = arg_18;
                                                                                                    long double f38_1 = 0.0;
                                                                                                    fpu_val_7_106 - f38_1;

                                                                                                    if (!(*(&(
                                                                                                        (fpu_val_7_106 < f38_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_7_106, f38_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_7_106 == f38_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                    {
                                                                                                        item_4 = arg_54
                                                                                                            - (&saved_target)[entity_11 + 0x1034];
                                                                                                        arg_20 = return_addr_2
                                                                                                            - (&saved_target)[entity_11 + 0x1033];
                                                                                                        arg_18 = (item_4 * arg_c
                                                                                                            - arg_20 * arg_10) / fpu_val_7_106;
                                                                                                        long double fpu_val_7_150 = arg_18;
                                                                                                        long double f41_1 = 0.0;
                                                                                                        fpu_val_7_150 - f41_1;

                                                                                                        if (!(*(&(
                                                                                                            (fpu_val_7_150 < f41_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(fpu_val_7_150, f41_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (fpu_val_7_150 == f41_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 1))
                                                                                                        {
                                                                                                            long double fpu_val_7_151 = arg_18;
                                                                                                            long double f44_1 = 1.0;
                                                                                                            fpu_val_7_151 - f44_1;

                                                                                                            if (*(&(
                                                                                                                (fpu_val_7_151 < f44_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(fpu_val_7_151, f44_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (fpu_val_7_151 == f44_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                            {
                                                                                                                long double fpu_val_7_152 = arg_c;
                                                                                                                long double f47_1 = 0.0f;
                                                                                                                fpu_val_7_152 - f47_1;
                                                                                                                long double fpu_val_7_153 = arg_c;

                                                                                                                if (*(&(
                                                                                                                        (fpu_val_7_152 < f47_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_7_152, f47_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_7_152 == f47_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                    fpu_val_7_153 = -(fpu_val_7_153);

                                                                                                                long double fpu_val_6_97 = arg_10;
                                                                                                                long double f50_1 = 0.0f;
                                                                                                                fpu_val_6_97 - f50_1;
                                                                                                                long double fpu_val_6_98 = arg_10;

                                                                                                                if (*(&(
                                                                                                                        (fpu_val_6_97 < f50_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_6_97, f50_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_6_97 == f50_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                    fpu_val_6_98 = -(fpu_val_6_98);

                                                                                                                fpu_val_7_153 - fpu_val_6_98;

                                                                                                                if (*(&(
                                                                                                                    (fpu_val_7_153 < fpu_val_6_98 ? 1 : 0) << 8
                                                                                                                    | (FCMP_UO(fpu_val_7_153, fpu_val_6_98) ? 1
                                                                                                                    : 0) << 0xa
                                                                                                                    | (fpu_val_7_153 == fpu_val_6_98 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                {
                                                                                                                    long double fpu_val_7_158 = arg_10;
                                                                                                                    long double f53_1 = 0.0f;
                                                                                                                    fpu_val_7_158 - f53_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (fpu_val_7_158 < f53_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_7_158, f53_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_7_158 == f53_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        fpu_val_7_106 =
                                                                                                                            (item_4 - context * arg_18) / arg_10;
                                                                                                                        goto label_4d93ca;
                                                                                                                    }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    fpu_val_7_106 = (arg_20
                                                                                                                        - return_addr * arg_18) / arg_c;
                                                                                                                label_4d93ca:
                                                                                                                    long double f55_1 = 0.0;
                                                                                                                    fpu_val_7_106 - f55_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (fpu_val_7_106 < f55_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_7_106, f55_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_7_106 == f55_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                                    {
                                                                                                                        long double fpu_val_6_105 =
                                                                                                                            fpu_val_7_106 + arg_18;
                                                                                                                        long double f57_1 = 1.0;
                                                                                                                        fpu_val_6_105 - f57_1;

                                                                                                                        if (*(&(
                                                                                                                                (fpu_val_6_105 < f57_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_6_105, f57_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_6_105 == f57_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                            goto label_4d93fd;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    fpu_val_7_106 = fpu_val_7_98;
                                                                                                    long double f39_1 = 0.0;
                                                                                                    fpu_val_7_106 - f39_1;

                                                                                                    if (!(*(&(
                                                                                                        (fpu_val_7_106 < f39_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_7_106, f39_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_7_106 == f39_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                    {
                                                                                                        item_8_4 = arg_58
                                                                                                            - (&saved_target)[entity_11 + 0x1035];
                                                                                                        arg_20 = return_addr_2
                                                                                                            - (&saved_target)[entity_11 + 0x1033];
                                                                                                        arg_18 = (item_8_4 * arg_c
                                                                                                            - arg_20 * arg_14) / fpu_val_7_106;
                                                                                                        long double fpu_val_7_141 = arg_18;
                                                                                                        long double f42_1 = 0.0;
                                                                                                        fpu_val_7_141 - f42_1;

                                                                                                        if (!(*(&(
                                                                                                            (fpu_val_7_141 < f42_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(fpu_val_7_141, f42_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (fpu_val_7_141 == f42_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 1))
                                                                                                        {
                                                                                                            long double fpu_val_7_142 = arg_18;
                                                                                                            long double f45_1 = 1.0;
                                                                                                            fpu_val_7_142 - f45_1;

                                                                                                            if (*(&(
                                                                                                                (fpu_val_7_142 < f45_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(fpu_val_7_142, f45_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (fpu_val_7_142 == f45_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                            {
                                                                                                                long double fpu_val_7_143 = arg_c;
                                                                                                                long double f48_1 = 0.0f;
                                                                                                                fpu_val_7_143 - f48_1;
                                                                                                                long double fpu_val_7_144 = arg_c;

                                                                                                                if (*(&(
                                                                                                                        (fpu_val_7_143 < f48_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_7_143, f48_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_7_143 == f48_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                    fpu_val_7_144 = -(fpu_val_7_144);

                                                                                                                long double fpu_val_6_84 = arg_14;
                                                                                                                long double f51_1 = 0.0f;
                                                                                                                fpu_val_6_84 - f51_1;
                                                                                                                long double fpu_val_6_85 = arg_14;

                                                                                                                if (*(&(
                                                                                                                        (fpu_val_6_84 < f51_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_6_84, f51_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_6_84 == f51_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                    fpu_val_6_85 = -(fpu_val_6_85);

                                                                                                                fpu_val_7_144 - fpu_val_6_85;

                                                                                                                if (*(&(
                                                                                                                        (fpu_val_7_144 < fpu_val_6_85 ? 1 : 0) << 8
                                                                                                                        | (FCMP_UO(fpu_val_7_144, fpu_val_6_85) ? 1
                                                                                                                        : 0) << 0xa
                                                                                                                        | (fpu_val_7_144 == fpu_val_6_85 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                    goto label_4d91ab;

                                                                                                                fpu_val_7_106 = (arg_20
                                                                                                                    - return_addr * arg_18) / arg_c;
                                                                                                                goto label_4d91ce;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                fpu_val_7_106 = item_4;
                                                                                                long double f40_1 = 0.0;
                                                                                                fpu_val_7_106 - f40_1;

                                                                                                if (!(*(&(
                                                                                                    (fpu_val_7_106 < f40_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_7_106, f40_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_106 == f40_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                                {
                                                                                                    item_8_4 = arg_58
                                                                                                        - (&saved_target)[entity_11 + 0x1035];
                                                                                                    item_4 = arg_54
                                                                                                        - (&saved_target)[entity_11 + 0x1034];
                                                                                                    arg_18 = (item_8_4 * arg_10
                                                                                                        - item_4 * arg_14) / fpu_val_7_106;
                                                                                                    long double fpu_val_7_126 = arg_18;
                                                                                                    long double f43_1 = 0.0;
                                                                                                    fpu_val_7_126 - f43_1;

                                                                                                    if (!(*(&(
                                                                                                        (fpu_val_7_126 < f43_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_7_126, f43_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_7_126 == f43_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1))
                                                                                                    {
                                                                                                        long double fpu_val_7_127 = arg_18;
                                                                                                        long double f46_1 = 1.0;
                                                                                                        fpu_val_7_127 - f46_1;

                                                                                                        if (*(&(
                                                                                                            (fpu_val_7_127 < f46_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(fpu_val_7_127, f46_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (fpu_val_7_127 == f46_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 0x41)
                                                                                                        {
                                                                                                            long double fpu_val_7_128 = arg_10;
                                                                                                            long double f49_1 = 0.0f;
                                                                                                            fpu_val_7_128 - f49_1;
                                                                                                            long double fpu_val_7_129 = arg_10;

                                                                                                            if (*(&(
                                                                                                                    (fpu_val_7_128 < f49_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_7_128, f49_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_7_128 == f49_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                                fpu_val_7_129 = -(fpu_val_7_129);

                                                                                                            long double fpu_val_6_66 = arg_14;
                                                                                                            long double f52_1 = 0.0f;
                                                                                                            fpu_val_6_66 - f52_1;
                                                                                                            long double fpu_val_6_67 = arg_14;

                                                                                                            if (*(&(
                                                                                                                    (fpu_val_6_66 < f52_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_6_66, f52_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_6_66 == f52_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                                fpu_val_6_67 = -(fpu_val_6_67);

                                                                                                            fpu_val_7_129 - fpu_val_6_67;

                                                                                                            if (*(&(
                                                                                                                (fpu_val_7_129 < fpu_val_6_67 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(fpu_val_7_129, fpu_val_6_67) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (fpu_val_7_129 == fpu_val_6_67 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                            {
                                                                                                            label_4d91ab:
                                                                                                                long double fpu_val_7_134 = arg_14;
                                                                                                                long double f54_1 = 0.0f;
                                                                                                                fpu_val_7_134 - f54_1;

                                                                                                                if (!(*(&(
                                                                                                                    (fpu_val_7_134 < f54_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_7_134, f54_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_7_134 == f54_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 0x40))
                                                                                                                {
                                                                                                                    fpu_val_7_106 =
                                                                                                                        (item_8_4 - param_2 * arg_18) / arg_14;
                                                                                                                    goto label_4d91ce;
                                                                                                                }
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                fpu_val_7_106 =
                                                                                                                    (item_4 - context * arg_18) / arg_10;
                                                                                                            label_4d91ce:
                                                                                                                long double f56_1 = 0.0;
                                                                                                                fpu_val_7_106 - f56_1;

                                                                                                                if (!(*(&(
                                                                                                                    (fpu_val_7_106 < f56_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_7_106, f56_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_7_106 == f56_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1))
                                                                                                                {
                                                                                                                    long double fpu_val_6_74 =
                                                                                                                        fpu_val_7_106 + arg_18;
                                                                                                                    long double f58_1 = 1.0;
                                                                                                                    fpu_val_6_74 - f58_1;

                                                                                                                    if (*(&(
                                                                                                                        (fpu_val_6_74 < f58_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_6_74, f58_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_6_74 == f58_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                    {
                                                                                                                    label_4d93fd:
                                                                                                                        float* item_18_2 =
                                                                                                                            &(&saved_target)[entity_11 + 0x1033];
                                                                                                                        float item_18_3 = arg_18;
                                                                                                                        float* item_1c_2 =
                                                                                                                            &(&saved_target)[entity_11 + 0x1033];
                                                                                                                        float item_1c_3 = fpu_val_7_106;
                                                                                                                        int16_t* item_20_1 = source_2;
                                                                                                                        void* item_24_1 = data_2;
                                                                                                                        int32_t data_34 = Sys_PopStack_28();
                                                                                                                        *(dest_8 + 0x14) = 1;
                                                                                                                        data_34 = source_2[3];
                                                                                                                        data_1 = nullptr;
                                                                                                                        data_1 = arg_5c[6 + 2][data_34 * 3];

                                                                                                                        if (data_1 == 0xffff)
                                                                                                                            break;

                                                                                                                        long double fpu_val_7_161 = arg_88;
                                                                                                                        long double f59_1 = 0.0f;
                                                                                                                        fpu_val_7_161 - f59_1;
                                                                                                                        float* entity_16 = *(*(dest_8 + 0x10)
                                                                                                                            + (data_1 << 2) + 0xd3c);
                                                                                                                        data_1 =
                                                                                                                            (fpu_val_7_161 < f59_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(fpu_val_7_161, f59_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (fpu_val_7_161 == f59_1 ? 1 : 0)
                                                                                                                            << 0xe;

                                                                                                                        if (*(&data_1 + 1) & 1)
                                                                                                                            *(dest_8 + 0x18) =
                                                                                                                                *entity_16 * *(dest_8 + 0x18);

                                                                                                                        long double fpu_val_7_164 = *entity_16;
                                                                                                                        long double f60_1 = 0.0f;
                                                                                                                        fpu_val_7_164 - f60_1;
                                                                                                                        data_1 =
                                                                                                                            (fpu_val_7_164 < f60_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(fpu_val_7_164, f60_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (fpu_val_7_164 == f60_1 ? 1 : 0)
                                                                                                                            << 0xe;

                                                                                                                        if (*(&data_1 + 1) & 0x40)
                                                                                                                            break;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                long double fpu_val_7_80 =
                                                                                    (&saved_target)[data_25 * 3 + 0x1035];
                                                                                long double f30_1 = param_8;
                                                                                fpu_val_7_80 - f30_1;

                                                                                if (*(&(
                                                                                        (fpu_val_7_80 < f30_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_80, f30_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_80 == f30_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    goto label_4d8f2a;

                                                                                long double fpu_val_7_81 =
                                                                                    (&saved_target)[data_26 * 3 + 0x1035];
                                                                                long double f33_1 = param_8;
                                                                                fpu_val_7_81 - f33_1;

                                                                                if (*(&(
                                                                                        (fpu_val_7_81 < f33_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_81, f33_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_81 == f33_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    goto label_4d8f2a;
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            long double fpu_val_7_77 =
                                                                                (&saved_target)[data_25 * 3 + 0x1034];
                                                                            long double f27_1 = param_6;
                                                                            fpu_val_7_77 - f27_1;

                                                                            if (*(&(
                                                                                    (fpu_val_7_77 < f27_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_77, f27_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_77 == f27_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                goto label_4d8eef;

                                                                            long double fpu_val_7_78 =
                                                                                (&saved_target)[data_26 * 3 + 0x1034];
                                                                            long double f31_1 = param_6;
                                                                            fpu_val_7_78 - f31_1;

                                                                            if (*(&(
                                                                                    (fpu_val_7_78 < f31_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_78, f31_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_78 == f31_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                goto label_4d8eef;
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        long double fpu_val_7_74 =
                                                                            (&saved_target)[data_25 * 3 + 0x1033];
                                                                        long double f24_1 = arg_60;
                                                                        fpu_val_7_74 - f24_1;

                                                                        if (*(&(
                                                                                (fpu_val_7_74 < f24_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_74, f24_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_74 == f24_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_4d8ec1;

                                                                        long double fpu_val_7_75 =
                                                                            (&saved_target)[data_26 * 3 + 0x1033];
                                                                        long double f28_1 = arg_60;
                                                                        fpu_val_7_75 - f28_1;

                                                                        if (*(&(
                                                                                (fpu_val_7_75 < f28_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_75, f28_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_75 == f28_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_4d8ec1;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    long double fpu_val_7_71 =
                                                                        (&saved_target)[data_25 * 3 + 0x1035];
                                                                    long double f21_1 = arg_a0;
                                                                    fpu_val_7_71 - f21_1;

                                                                    if (!(*(&(
                                                                            (fpu_val_7_71 < f21_1 ? 1 : 0) << 8 | (
