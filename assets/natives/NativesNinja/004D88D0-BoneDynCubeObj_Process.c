#include "004D88D0-BoneDynCubeObj_Process.h"
/* 0x004d88d0 BoneDynCubeObj_Process full linked: callers=0 callees=3 */
❓  int32_t* sub_4d88d0(float a1, float a2, float a3 @ 0x30, float a4, float a5 @ 0x64, float a6, float a7, float a8, float a9, float a10, float a11, float a12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    int32_t ebp;
    int32_t var_4_1 = ebp;
    sub_4a54a0(0x100c0);
    int32_t* edx = a2;
    float esi = a1;
    float arg_48 = *edx;
    void arg_40b8;
    int32_t* var_4 = &arg_40b8;
    int32_t* eax_1 = *(esi + 0x74);
    float arg_18 = edx[1];

    if (eax_1)
    {
        void* eax_2 = *eax_1;
        eax_1 = *(*(eax_2 + 0xc) + 0xc);

        if (!eax_1[0xa])
        {
            int32_t** ecx_3 = eax_1[0xb];
            int32_t** arg_5c = ecx_3;

            if (ecx_3)
            {
                int16_t eax_3;
                eax_3 = edx[2];
                void* ebx_1 = ecx_3[5];
                int32_t edi_1 = ecx_3[1];

                if (eax_3 == 0xff)
                    goto label_4d8980;

                int32_t eax_5 = 0;
                eax_5 = *(esi + 0x1c);
                int32_t eax_6 = *(((eax_3 * 0x180 + eax_5) << 2) + &g_a96ae0);

                if (!eax_6)
                    goto label_4d8980;

                eax_6(esi, *(a2 + 0xc));
                eax_1 = a2;

                if (*eax_1[3])
                {
                    ecx_3 = arg_5c;
                label_4d8980:
                    int32_t edx_5 = 0xffffffff;
                    int32_t* arg_20;
                    float arg_38;
                    float __return_addr_2;
                    float arg_58;
                    float arg_60;

                    if (edi_1 > 0)
                    {
                        int32_t var_8_1 = edi_1;
                        void arg_b8;
                        arg_20 = &arg_b8;
                        bool cond:2_1;

                        do
                        {
                            int32_t eax_7 = *(ebx_1 + 0xc);

                            if (edx_5 != eax_7)
                            {
                                edx_5 = eax_7;
                                void* eax_10 = *(a1 + 0x70) + eax_7 * 0x84;
                                memcpy(&arg_60, eax_10 + 0x24, 0x28);
                                esi = a1;
                                a3 = *(eax_10 + 0x18);
                                a4 = *(eax_10 + 0x1c);
                                ecx_3 = arg_5c;
                                arg_38 = *(eax_10 + 0x20);
                            }

                            long double x87_r7_2 = a6 * *(ebx_1 + 8);
                            long double x87_r6_2 = a5 * *(ebx_1 + 4);
                            ebx_1 += 0x10;
                            __return_addr_2 = x87_r7_2 + x87_r6_2 + arg_60 * *(ebx_1 - 0x10);
                            __return_addr = __return_addr_2;
                            arg_58 = a12 * *(ebx_1 - 8) + a11 * *(ebx_1 - 0xc)
                                + a10 * *(ebx_1 - 0x10);
                            long double x87_r7_16 = a4 + a9 * *(ebx_1 - 8)
                                + a8 * *(ebx_1 - 0xc) + a7 * *(ebx_1 - 0x10);
                            *var_4 = a3 + __return_addr_2;
                            a1 = x87_r7_16;
                            long double x87_r7_18 = arg_38 + arg_58;
                            var_4[1] = a1;
                            var_4[2] = x87_r7_18;
                            *arg_20 = edx_5;
                            arg_20 = &arg_20[1];
                            cond:2_1 = var_8_1 != 1;
                            var_4 = &var_4[3];
                            var_8_1 -= 1;
                        } while (cond:2_1);
                    }

                    double* edx_6 = arg_48;
                    double* edi_7 = arg_18;
                    float __return_addr_1 = *edx_6 - *(esi + 0x20);
                    float arg_28 = edx_6[1] - *(esi + 0x28);
                    float arg_2c = edx_6[2] - *(esi + 0x30);
                    long double x87_r7_26 = *edi_7 - *(esi + 0x20);
                    a1 = edi_7[1] - *(esi + 0x28);
                    a2 = edi_7[2] - *(esi + 0x30);
                    long double x87_r6_17 = __return_addr_1;
                    x87_r6_17 - x87_r7_26;
                    long double x87_r6_18;

                    x87_r6_18 = !(*(&((x87_r6_17 < x87_r7_26 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_17, x87_r7_26) ? 1 : 0) << 0xa
                        | (x87_r6_17 == x87_r7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? x87_r7_26
                        : __return_addr_1;

                    double arg_90 = x87_r6_18 - 0.100000001f;
                    long double x87_r6_20 = arg_28;
                    long double temp1_1 = a1;
                    x87_r6_20 - temp1_1;
                    long double x87_r6_21;

                    x87_r6_21 = !(*(&((x87_r6_20 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_20, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r6_20 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? a1 : arg_28;

                    double arg_98 = x87_r6_21 - 0.100000001f;
                    long double x87_r6_23 = arg_2c;
                    long double temp3_1 = a2;
                    x87_r6_23 - temp3_1;
                    long double x87_r6_24;

                    x87_r6_24 = !(*(&((x87_r6_23 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_23, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r6_23 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? a2 : arg_2c;

                    double arg_a0 = x87_r6_24 - 0.100000001f;
                    long double x87_r6_26 = __return_addr_1;
                    x87_r6_26 - x87_r7_26;

                    if (!(*(&((x87_r6_26 < x87_r7_26 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_26, x87_r7_26) ? 1 : 0) << 0xa
                            | (x87_r6_26 == x87_r7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        x87_r7_26 = __return_addr_1;

                    arg_60 = x87_r7_26 + 0.100000001f;
                    long double x87_r7_29 = arg_28;
                    long double temp4_1 = a1;
                    x87_r7_29 - temp4_1;
                    long double x87_r7_30;

                    x87_r7_30 = *(&((x87_r7_29 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_29, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_29 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? a1 : arg_28;

                    a6 = x87_r7_30 + 0.100000001f;
                    long double x87_r7_32 = arg_2c;
                    long double temp5_1 = a2;
                    x87_r7_32 - temp5_1;
                    long double x87_r7_33;

                    x87_r7_33 = *(&((x87_r7_32 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_32, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_32 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? a2 : arg_2c;

                    __return_addr = __return_addr_1;
                    eax_1 = arg_2c;
                    a8 = x87_r7_33 + 0.100000001f;
                    float arg_3c = *edi_7 - *edx_6;
                    float arg_40 = edi_7[1] - edx_6[1];
                    float arg_44 = edi_7[2] - edx_6[2];
                    float edx_7 = *(esi + 0xa0);
                    __return_addr = -(__return_addr_1);
                    a1 = -(arg_28);
                    long double x87_r7_46 = -(eax_1);
                    a2 = x87_r7_46;
                    long double x87_r6_27 = a1;
                    long double x87_r5_1 = __return_addr;
                    arg_18 = arg_44;
                    arg_48 = arg_40;
                    double arg_88 = arg_3c;
                    var_4 = a2 * arg_44 + a1 * arg_40 + __return_addr * arg_3c;
                    long double x87_r7_50 = x87_r5_1 * x87_r5_1 + x87_r6_27 * x87_r6_27
                        + x87_r7_46 * x87_r7_46 - 1f
                        / (arg_88 * arg_88 + arg_48 * arg_48 + arg_18 * arg_18) * var_4 * var_4;
                    long double x87_r6_38 = edx_7 * edx_7;
                    x87_r6_38 - x87_r7_50;
                    eax_1 = (x87_r6_38 < x87_r7_50 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_38, x87_r7_50) ? 1 : 0) << 0xa
                        | (x87_r6_38 == x87_r7_50 ? 1 : 0) << 0xe;

                    if (!(*(&eax_1 + 1) & 1))
                    {
                        long double x87_r7_51 = edx_7;
                        long double temp6_1 = arg_90;
                        x87_r7_51 - temp6_1;
                        eax_1 = (x87_r7_51 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_51, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_51 == temp6_1 ? 1 : 0) << 0xe;

                        if (!(*(&eax_1 + 1) & 1))
                        {
                            long double x87_r7_52 = edx_7;
                            long double temp7_1 = arg_98;
                            x87_r7_52 - temp7_1;
                            eax_1 = (x87_r7_52 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_52, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_52 == temp7_1 ? 1 : 0) << 0xe;

                            if (!(*(&eax_1 + 1) & 1))
                            {
                                long double x87_r7_53 = edx_7;
                                long double temp8_1 = arg_a0;
                                x87_r7_53 - temp8_1;
                                eax_1 = (x87_r7_53 < temp8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_53, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_53 == temp8_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_1 + 1) & 1))
                                {
                                    long double x87_r7_55 = -(edx_7);
                                    var_4 = x87_r7_55;
                                    long double temp9_1 = arg_60;
                                    x87_r7_55 - temp9_1;
                                    eax_1 = (x87_r7_55 < temp9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_55, temp9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_55 == temp9_1 ? 1 : 0) << 0xe;

                                    if (*(&eax_1 + 1) & 0x41)
                                    {
                                        long double x87_r7_56 = var_4;
                                        long double temp10_1 = a6;
                                        x87_r7_56 - temp10_1;
                                        eax_1 = (x87_r7_56 < temp10_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_56, temp10_1) ? 1 : 0) << 0xa
                                            | (x87_r7_56 == temp10_1 ? 1 : 0) << 0xe;

                                        if (*(&eax_1 + 1) & 0x41)
                                        {
                                            long double x87_r7_57 = var_4;
                                            long double temp11_1 = a8;
                                            x87_r7_57 - temp11_1;
                                            eax_1 = (x87_r7_57 < temp11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_57, temp11_1) ? 1 : 0) << 0xa
                                                | (x87_r7_57 == temp11_1 ? 1 : 0) << 0xe;

                                            if (*(&eax_1 + 1) & 0x41)
                                            {
                                                long double x87_r7_58 = arg_40;
                                                long double temp12_1 = 0f;
                                                x87_r7_58 - temp12_1;

                                                arg_48 = !(*(&((x87_r7_58 < temp12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_58, temp12_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_58 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                    ? arg_40 : -(arg_40);

                                                long double x87_r7_61 = arg_3c;
                                                long double temp13_1 = 0f;
                                                x87_r7_61 - temp13_1;

                                                arg_48 = !(*(&((x87_r7_61 < temp13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_61, temp13_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_61 == temp13_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                    ? arg_3c : -(arg_3c);

                                                eax_1 = *ecx_3;
                                                int16_t* esi_2 = ecx_3[4];
                                                arg_48 = 0f;

                                                if (eax_1 > 0)
                                                {
                                                    float edi_8 = a2;

                                                    while (true)
                                                    {
                                                        int32_t eax_24 = 0;
                                                        eax_24 = *esi_2;
                                                        int32_t ecx_11 = eax_24 * 3;
                                                        int32_t eax_25 = 0;
                                                        eax_25 = esi_2[1];
                                                        long double x87_r7_64 =
                                                            *(&arg_40b8 + (ecx_11 << 2));
                                                        long double temp14_1 = arg_90;
                                                        x87_r7_64 - temp14_1;
                                                        int32_t eax_26 = 0;
                                                        eax_26 = esi_2[2];
                                                        int32_t __saved_edi;

                                                        if (!(*(&(
                                                            (x87_r7_64 < temp14_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_64, temp14_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_64 == temp14_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1))
                                                        {
                                                        label_4d8e28:
                                                            long double x87_r7_67 =
                                                                (&__saved_edi)[ecx_11 + 0x1034];
                                                            long double temp15_1 = arg_98;
                                                            x87_r7_67 - temp15_1;

                                                            if (!(*(&(
                                                                (x87_r7_67 < temp15_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_67, temp15_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_67 == temp15_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            {
                                                            label_4d8e5f:
                                                                long double x87_r7_70 =
                                                                    (&__saved_edi)[ecx_11 + 0x1035];
                                                                long double temp17_1 = arg_a0;
                                                                x87_r7_70 - temp17_1;

                                                                if (!(*(&(
                                                                    (x87_r7_70 < temp17_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_70, temp17_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_70 == temp17_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1))
                                                                {
                                                                label_4d8e96:
                                                                    long double x87_r7_73 =
                                                                        (&__saved_edi)[ecx_11 + 0x1033];
                                                                    long double temp20_1 = arg_60;
                                                                    x87_r7_73 - temp20_1;

                                                                    if (*(&(
                                                                        (x87_r7_73 < temp20_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_73, temp20_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_73 == temp20_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    {
                                                                    label_4d8ec1:
                                                                        long double x87_r7_76 =
                                                                            (&__saved_edi)[ecx_11 + 0x1034];
                                                                        long double temp23_1 = a6;
                                                                        x87_r7_76 - temp23_1;

                                                                        if (*(&(
                                                                            (x87_r7_76 < temp23_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_76, temp23_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_76 == temp23_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                        label_4d8eef:
                                                                            long double x87_r7_79 =
                                                                                (&__saved_edi)[ecx_11 + 0x1035];
                                                                            long double temp26_1 = a8;
                                                                            x87_r7_79 - temp26_1;

                                                                            if (*(&(
                                                                                (x87_r7_79 < temp26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_79, temp26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_79 == temp26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                            label_4d8f2a:
                                                                                float arg_c =
                                                                                    (&__saved_edi)[eax_26 * 3 + 0x1033]
                                                                                    - (&__saved_edi)[ecx_11 + 0x1033];
                                                                                float arg_10 =
                                                                                    (&__saved_edi)[eax_26 * 3 + 0x1034]
                                                                                    - (&__saved_edi)[ecx_11 + 0x1034];
                                                                                float arg_14 =
                                                                                    (&__saved_edi)[eax_26 * 3 + 0x1035]
                                                                                    - (&__saved_edi)[ecx_11 + 0x1035];
                                                                                __return_addr =
                                                                                    (&__saved_edi)[eax_25 * 3 + 0x1033]
                                                                                    - (&__saved_edi)[ecx_11 + 0x1033];
                                                                                a1 =
                                                                                    (&__saved_edi)[eax_25 * 3 + 0x1034]
                                                                                    - (&__saved_edi)[ecx_11 + 0x1034];
                                                                                long double x87_r7_93 =
                                                                                    (&__saved_edi)[eax_25 * 3 + 0x1035]
                                                                                    - (&__saved_edi)[ecx_11 + 0x1035];
                                                                                a2 = x87_r7_93;
                                                                                var_4 =
                                                                                    x87_r7_93 * arg_10 - a1 * arg_14;
                                                                                a3 = var_4;
                                                                                long double x87_r7_98 =
                                                                                    a2 * arg_c - __return_addr * arg_14;
                                                                                a4 = -(x87_r7_98);
                                                                                arg_18 =
                                                                                    a1 * arg_c - __return_addr * arg_10;
                                                                                arg_38 = arg_18;
                                                                                long double x87_r7_106 = arg_38 * arg_44
                                                                                    + a4 * arg_40 + a3 * arg_3c;
                                                                                long double temp29_1 = 0.0;
                                                                                x87_r7_106 - temp29_1;
                                                                                arg_88 = x87_r7_106;
                                                                                bool c1_1 = /* bool c1_1 =
                                                                                    unknown  {fst dword [esp+0x9c], st0} */;

                                                                                if (!(*(&(
                                                                                    (x87_r7_106 < temp29_1 ? 1 : 0) << 8
                                                                                    | (c1_1 ? 1 : 0) << 9 | (
                                                                                    FCMP_UO(x87_r7_106, temp29_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_106 == temp29_1 ? 1 : 0)
                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                {
                                                                                    long double x87_r7_108 = ((
                                                                                        (&__saved_edi)[ecx_11 + 0x1034]
                                                                                        - arg_28) * a4 + (
                                                                                        (&__saved_edi)[ecx_11 + 0x1033]
                                                                                        - __return_addr_1) * a3 + (
                                                                                        (&__saved_edi)[ecx_11 + 0x1035]
                                                                                        - arg_2c) * arg_38) / x87_r7_106;
                                                                                    float var_8_3 = x87_r7_108;
                                                                                    long double temp32_1 = 0f;
                                                                                    x87_r7_108 - temp32_1;

                                                                                    if (!(*(&(
                                                                                        (x87_r7_108 < temp32_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_108, temp32_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_108 == temp32_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1))
                                                                                    {
                                                                                        long double x87_r7_109 = var_8_3;
                                                                                        long double temp34_1 = 1f;
                                                                                        x87_r7_109 - temp34_1;

                                                                                        if (*(&(
                                                                                            (x87_r7_109 < temp34_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_109, temp34_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_109 == temp34_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 0x41)
                                                                                        {
                                                                                            __return_addr_2 =
                                                                                                var_8_3 * arg_3c + __return_addr_1;
                                                                                            float arg_54 =
                                                                                                var_8_3 * arg_40 + arg_28;
                                                                                            arg_58 = var_8_3 * arg_44 + arg_2c;
                                                                                            long double x87_r7_119 = a3;
                                                                                            long double temp35_1 = 0f;
                                                                                            x87_r7_119 - temp35_1;
                                                                                            float arg_ac;

                                                                                            arg_ac = !(*(&(
                                                                                                (x87_r7_119 < temp35_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_119, temp35_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_119 == temp35_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1) ? a3 : -(a3);

                                                                                            long double x87_r7_122 = a4;
                                                                                            long double temp36_1 = 0f;
                                                                                            x87_r7_122 - temp36_1;
                                                                                            long double x87_r7_123 = a4;

                                                                                            if (*(&(
                                                                                                    (x87_r7_122 < temp36_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_122, temp36_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_122 == temp36_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                x87_r7_123 = -(x87_r7_123);

                                                                                            long double x87_r6_55 = arg_38;
                                                                                            long double temp37_1 = 0f;
                                                                                            x87_r6_55 - temp37_1;
                                                                                            long double x87_r6_56 = arg_38;

                                                                                            if (*(&(
                                                                                                    (x87_r6_55 < temp37_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r6_55, temp37_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r6_55 == temp37_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                x87_r6_56 = -(x87_r6_56);

                                                                                            long double x87_r5_15 = arg_ac;
                                                                                            x87_r5_15 - x87_r7_123;
                                                                                            long double x87_r5_16;

                                                                                            if (!(*(&(
                                                                                                (x87_r5_15 < x87_r7_123 ? 1 : 0) << 8
                                                                                                | (FCMP_UO(x87_r5_15, x87_r7_123) ? 1
                                                                                                : 0) << 0xa
                                                                                                | (x87_r5_15 == x87_r7_123 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41))
                                                                                            {
                                                                                                x87_r5_16 = arg_ac;
                                                                                                x87_r5_16 - x87_r6_56;
                                                                                            }

                                                                                            float var_8_4;

                                                                                            if (*(&(
                                                                                                (x87_r5_15 < x87_r7_123 ? 1 : 0) << 8
                                                                                                | (FCMP_UO(x87_r5_15, x87_r7_123) ? 1
                                                                                                : 0) << 0xa
                                                                                                | (x87_r5_15 == x87_r7_123 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41 || *(&(
                                                                                                (x87_r5_16 < x87_r6_56 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r5_16, x87_r6_56) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r5_16 == x87_r6_56 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41)
                                                                                            {
                                                                                                x87_r7_123 - x87_r6_56;

                                                                                                if (*(&(
                                                                                                    (x87_r7_123 < x87_r6_56 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(x87_r7_123, x87_r6_56) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (x87_r7_123 == x87_r6_56 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                {
                                                                                                    x87_r7_106 = arg_18;
                                                                                                    long double temp38_1 = 0.0;
                                                                                                    x87_r7_106 - temp38_1;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r7_106 < temp38_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_106, temp38_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_106 == temp38_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                    {
                                                                                                        var_4 = arg_54
                                                                                                            - (&__saved_edi)[ecx_11 + 0x1034];
                                                                                                        arg_20 = __return_addr_2
                                                                                                            - (&__saved_edi)[ecx_11 + 0x1033];
                                                                                                        arg_18 = (var_4 * arg_c
                                                                                                            - arg_20 * arg_10) / x87_r7_106;
                                                                                                        long double x87_r7_150 = arg_18;
                                                                                                        long double temp41_1 = 0.0;
                                                                                                        x87_r7_150 - temp41_1;

                                                                                                        if (!(*(&(
                                                                                                            (x87_r7_150 < temp41_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_150, temp41_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_150 == temp41_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 1))
                                                                                                        {
                                                                                                            long double x87_r7_151 = arg_18;
                                                                                                            long double temp44_1 = 1.0;
                                                                                                            x87_r7_151 - temp44_1;

                                                                                                            if (*(&(
                                                                                                                (x87_r7_151 < temp44_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_151, temp44_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_151 == temp44_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                            {
                                                                                                                long double x87_r7_152 = arg_c;
                                                                                                                long double temp47_1 = 0f;
                                                                                                                x87_r7_152 - temp47_1;
                                                                                                                long double x87_r7_153 = arg_c;

                                                                                                                if (*(&(
                                                                                                                        (x87_r7_152 < temp47_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_152, temp47_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_152 == temp47_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                    x87_r7_153 = -(x87_r7_153);

                                                                                                                long double x87_r6_97 = arg_10;
                                                                                                                long double temp50_1 = 0f;
                                                                                                                x87_r6_97 - temp50_1;
                                                                                                                long double x87_r6_98 = arg_10;

                                                                                                                if (*(&(
                                                                                                                        (x87_r6_97 < temp50_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r6_97, temp50_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r6_97 == temp50_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                    x87_r6_98 = -(x87_r6_98);

                                                                                                                x87_r7_153 - x87_r6_98;

                                                                                                                if (*(&(
                                                                                                                    (x87_r7_153 < x87_r6_98 ? 1 : 0) << 8
                                                                                                                    | (FCMP_UO(x87_r7_153, x87_r6_98) ? 1
                                                                                                                    : 0) << 0xa
                                                                                                                    | (x87_r7_153 == x87_r6_98 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                {
                                                                                                                    long double x87_r7_158 = arg_10;
                                                                                                                    long double temp53_1 = 0f;
                                                                                                                    x87_r7_158 - temp53_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (x87_r7_158 < temp53_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_158, temp53_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_158 == temp53_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        x87_r7_106 =
                                                                                                                            (var_4 - a1 * arg_18) / arg_10;
                                                                                                                        goto label_4d93ca;
                                                                                                                    }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    x87_r7_106 = (arg_20
                                                                                                                        - __return_addr * arg_18) / arg_c;
                                                                                                                label_4d93ca:
                                                                                                                    long double temp55_1 = 0.0;
                                                                                                                    x87_r7_106 - temp55_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (x87_r7_106 < temp55_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_106, temp55_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_106 == temp55_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                                    {
                                                                                                                        long double x87_r6_105 =
                                                                                                                            x87_r7_106 + arg_18;
                                                                                                                        long double temp57_1 = 1.0;
                                                                                                                        x87_r6_105 - temp57_1;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r6_105 < temp57_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r6_105, temp57_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r6_105 == temp57_1 ? 1 : 0)
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
                                                                                                    x87_r7_106 = x87_r7_98;
                                                                                                    long double temp39_1 = 0.0;
                                                                                                    x87_r7_106 - temp39_1;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r7_106 < temp39_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_106, temp39_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_106 == temp39_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                    {
                                                                                                        var_8_4 = arg_58
                                                                                                            - (&__saved_edi)[ecx_11 + 0x1035];
                                                                                                        arg_20 = __return_addr_2
                                                                                                            - (&__saved_edi)[ecx_11 + 0x1033];
                                                                                                        arg_18 = (var_8_4 * arg_c
                                                                                                            - arg_20 * arg_14) / x87_r7_106;
                                                                                                        long double x87_r7_141 = arg_18;
                                                                                                        long double temp42_1 = 0.0;
                                                                                                        x87_r7_141 - temp42_1;

                                                                                                        if (!(*(&(
                                                                                                            (x87_r7_141 < temp42_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_141, temp42_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_141 == temp42_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 1))
                                                                                                        {
                                                                                                            long double x87_r7_142 = arg_18;
                                                                                                            long double temp45_1 = 1.0;
                                                                                                            x87_r7_142 - temp45_1;

                                                                                                            if (*(&(
                                                                                                                (x87_r7_142 < temp45_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_142, temp45_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_142 == temp45_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                            {
                                                                                                                long double x87_r7_143 = arg_c;
                                                                                                                long double temp48_1 = 0f;
                                                                                                                x87_r7_143 - temp48_1;
                                                                                                                long double x87_r7_144 = arg_c;

                                                                                                                if (*(&(
                                                                                                                        (x87_r7_143 < temp48_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_143, temp48_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_143 == temp48_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                    x87_r7_144 = -(x87_r7_144);

                                                                                                                long double x87_r6_84 = arg_14;
                                                                                                                long double temp51_1 = 0f;
                                                                                                                x87_r6_84 - temp51_1;
                                                                                                                long double x87_r6_85 = arg_14;

                                                                                                                if (*(&(
                                                                                                                        (x87_r6_84 < temp51_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r6_84, temp51_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r6_84 == temp51_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                    x87_r6_85 = -(x87_r6_85);

                                                                                                                x87_r7_144 - x87_r6_85;

                                                                                                                if (*(&(
                                                                                                                        (x87_r7_144 < x87_r6_85 ? 1 : 0) << 8
                                                                                                                        | (FCMP_UO(x87_r7_144, x87_r6_85) ? 1
                                                                                                                        : 0) << 0xa
                                                                                                                        | (x87_r7_144 == x87_r6_85 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                    goto label_4d91ab;

                                                                                                                x87_r7_106 = (arg_20
                                                                                                                    - __return_addr * arg_18) / arg_c;
                                                                                                                goto label_4d91ce;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                x87_r7_106 = var_4;
                                                                                                long double temp40_1 = 0.0;
                                                                                                x87_r7_106 - temp40_1;

                                                                                                if (!(*(&(
                                                                                                    (x87_r7_106 < temp40_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_106, temp40_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_106 == temp40_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                                {
                                                                                                    var_8_4 = arg_58
                                                                                                        - (&__saved_edi)[ecx_11 + 0x1035];
                                                                                                    var_4 = arg_54
                                                                                                        - (&__saved_edi)[ecx_11 + 0x1034];
                                                                                                    arg_18 = (var_8_4 * arg_10
                                                                                                        - var_4 * arg_14) / x87_r7_106;
                                                                                                    long double x87_r7_126 = arg_18;
                                                                                                    long double temp43_1 = 0.0;
                                                                                                    x87_r7_126 - temp43_1;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r7_126 < temp43_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_126, temp43_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_126 == temp43_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1))
                                                                                                    {
                                                                                                        long double x87_r7_127 = arg_18;
                                                                                                        long double temp46_1 = 1.0;
                                                                                                        x87_r7_127 - temp46_1;

                                                                                                        if (*(&(
                                                                                                            (x87_r7_127 < temp46_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_127, temp46_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_127 == temp46_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 0x41)
                                                                                                        {
                                                                                                            long double x87_r7_128 = arg_10;
                                                                                                            long double temp49_1 = 0f;
                                                                                                            x87_r7_128 - temp49_1;
                                                                                                            long double x87_r7_129 = arg_10;

                                                                                                            if (*(&(
                                                                                                                    (x87_r7_128 < temp49_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_128, temp49_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_128 == temp49_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                                x87_r7_129 = -(x87_r7_129);

                                                                                                            long double x87_r6_66 = arg_14;
                                                                                                            long double temp52_1 = 0f;
                                                                                                            x87_r6_66 - temp52_1;
                                                                                                            long double x87_r6_67 = arg_14;

                                                                                                            if (*(&(
                                                                                                                    (x87_r6_66 < temp52_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r6_66, temp52_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r6_66 == temp52_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                                x87_r6_67 = -(x87_r6_67);

                                                                                                            x87_r7_129 - x87_r6_67;

                                                                                                            if (*(&(
                                                                                                                (x87_r7_129 < x87_r6_67 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(x87_r7_129, x87_r6_67) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (x87_r7_129 == x87_r6_67 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                            {
                                                                                                            label_4d91ab:
                                                                                                                long double x87_r7_134 = arg_14;
                                                                                                                long double temp54_1 = 0f;
                                                                                                                x87_r7_134 - temp54_1;

                                                                                                                if (!(*(&(
                                                                                                                    (x87_r7_134 < temp54_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_134, temp54_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_134 == temp54_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 0x40))
                                                                                                                {
                                                                                                                    x87_r7_106 =
                                                                                                                        (var_8_4 - a2 * arg_18) / arg_14;
                                                                                                                    goto label_4d91ce;
                                                                                                                }
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                x87_r7_106 =
                                                                                                                    (var_4 - a1 * arg_18) / arg_10;
                                                                                                            label_4d91ce:
                                                                                                                long double temp56_1 = 0.0;
                                                                                                                x87_r7_106 - temp56_1;

                                                                                                                if (!(*(&(
                                                                                                                    (x87_r7_106 < temp56_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_106, temp56_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_106 == temp56_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1))
                                                                                                                {
                                                                                                                    long double x87_r6_74 =
                                                                                                                        x87_r7_106 + arg_18;
                                                                                                                    long double temp58_1 = 1.0;
                                                                                                                    x87_r6_74 - temp58_1;

                                                                                                                    if (*(&(
                                                                                                                        (x87_r6_74 < temp58_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r6_74, temp58_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r6_74 == temp58_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                    {
                                                                                                                    label_4d93fd:
                                                                                                                        float* var_18_2 =
                                                                                                                            &(&__saved_edi)[ecx_11 + 0x1033];
                                                                                                                        float var_18_3 = arg_18;
                                                                                                                        float* var_1c_2 =
                                                                                                                            &(&__saved_edi)[ecx_11 + 0x1033];
                                                                                                                        float var_1c_3 = x87_r7_106;
                                                                                                                        int16_t* var_20_1 = esi_2;
                                                                                                                        void* var_24_1 = eax_2;
                                                                                                                        int32_t eax_34 = sub_4bd070();
                                                                                                                        *(edi_8 + 0x14) = 1;
                                                                                                                        eax_34 = esi_2[3];
                                                                                                                        eax_1 = nullptr;
                                                                                                                        eax_1 = arg_5c[6 + 2][eax_34 * 3];

                                                                                                                        if (eax_1 == 0xffff)
                                                                                                                            break;

                                                                                                                        long double x87_r7_161 = arg_88;
                                                                                                                        long double temp59_1 = 0f;
                                                                                                                        x87_r7_161 - temp59_1;
                                                                                                                        float* ecx_16 = *(*(edi_8 + 0x10)
                                                                                                                            + (eax_1 << 2) + 0xd3c);
                                                                                                                        eax_1 =
                                                                                                                            (x87_r7_161 < temp59_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_161, temp59_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_161 == temp59_1 ? 1 : 0)
                                                                                                                            << 0xe;

                                                                                                                        if (*(&eax_1 + 1) & 1)
                                                                                                                            *(edi_8 + 0x18) =
                                                                                                                                *ecx_16 * *(edi_8 + 0x18);

                                                                                                                        long double x87_r7_164 = *ecx_16;
                                                                                                                        long double temp60_1 = 0f;
                                                                                                                        x87_r7_164 - temp60_1;
                                                                                                                        eax_1 =
                                                                                                                            (x87_r7_164 < temp60_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_164, temp60_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_164 == temp60_1 ? 1 : 0)
                                                                                                                            << 0xe;

                                                                                                                        if (*(&eax_1 + 1) & 0x40)
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
                                                                                long double x87_r7_80 =
                                                                                    (&__saved_edi)[eax_25 * 3 + 0x1035];
                                                                                long double temp30_1 = a8;
                                                                                x87_r7_80 - temp30_1;

                                                                                if (*(&(
                                                                                        (x87_r7_80 < temp30_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_80, temp30_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_80 == temp30_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    goto label_4d8f2a;

                                                                                long double x87_r7_81 =
                                                                                    (&__saved_edi)[eax_26 * 3 + 0x1035];
                                                                                long double temp33_1 = a8;
                                                                                x87_r7_81 - temp33_1;

                                                                                if (*(&(
                                                                                        (x87_r7_81 < temp33_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_81, temp33_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_81 == temp33_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    goto label_4d8f2a;
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            long double x87_r7_77 =
                                                                                (&__saved_edi)[eax_25 * 3 + 0x1034];
                                                                            long double temp27_1 = a6;
                                                                            x87_r7_77 - temp27_1;

                                                                            if (*(&(
                                                                                    (x87_r7_77 < temp27_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_77, temp27_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_77 == temp27_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                goto label_4d8eef;

                                                                            long double x87_r7_78 =
                                                                                (&__saved_edi)[eax_26 * 3 + 0x1034];
                                                                            long double temp31_1 = a6;
                                                                            x87_r7_78 - temp31_1;

                                                                            if (*(&(
                                                                                    (x87_r7_78 < temp31_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_78, temp31_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_78 == temp31_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                goto label_4d8eef;
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        long double x87_r7_74 =
                                                                            (&__saved_edi)[eax_25 * 3 + 0x1033];
                                                                        long double temp24_1 = arg_60;
                                                                        x87_r7_74 - temp24_1;

                                                                        if (*(&(
                                                                                (x87_r7_74 < temp24_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_74, temp24_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_74 == temp24_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_4d8ec1;

                                                                        long double x87_r7_75 =
                                                                            (&__saved_edi)[eax_26 * 3 + 0x1033];
                                                                        long double temp28_1 = arg_60;
                                                                        x87_r7_75 - temp28_1;

                                                                        if (*(&(
                                                                                (x87_r7_75 < temp28_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_75, temp28_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_75 == temp28_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_4d8ec1;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    long double x87_r7_71 =
                                                                        (&__saved_edi)[eax_25 * 3 + 0x1035];
                                                                    long double temp21_1 = arg_a0;
                                                                    x87_r7_71 - temp21_1;

                                                                    if (!(*(&(
                                                                            (x87_r7_71 < temp21_1 ? 1 : 0) << 8 | (
