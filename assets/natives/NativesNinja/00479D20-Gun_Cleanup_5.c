#include "00479D20-Gun_Cleanup_5.h"
/* 0x00479d20 Gun_Cleanup_5 full linked: callers=0 callees=26 */
int32_t sub_479d20(int32_t* a1, int32_t* a2)

{
    int32_t esi = *a2;
    int32_t* ebx = a1[0x4a];
    int32_t ecx = g_c28b44;
    int32_t edx = g_c28b48;
    float var_180 = 0f;
    float var_17c = 0f;

    switch (ebx[0x186] - 1)
    {
        case 0:
        case 4:
        {
            sub_47a260(a1, esi);
            break;
        }
        case 1:
        {
            sub_47a360(a1, esi);
            break;
        }
        case 2:
        {
            sub_47a540(a1, esi);
            break;
        }
        case 3:
        {
            sub_47a750(a1, esi);
            break;
        }
    }

    if (ebx[0x186])
    {
        int32_t* var_190_5 = &ebx[0x44];
        void var_104;
        Game_DataSymbolLoad(&var_104, "weapons/strings/%s");
        int32_t eax_4;
        void* ecx_1;
        eax_4 = sub_4b64e0(&var_104);
        int32_t* eax_5;

        if (!eax_4)
            eax_5 = &ebx[0x44];
        else
        {
            void* var_194_5 = &var_104;
            eax_5 = Resource_Load(eax_4, &var_104, ecx_1, nullptr);
        }

        sub_4b6e90(*(esi + 0x4e0), eax_5);
        int32_t eax_7 = sub_4b7df0(*(esi + 0x4e0));
        long double x87_r7_8 = sub_4b7e00(*(esi + 0x4e0));
        *(*(esi + 0x4e0) + 4) = ecx * 0.984375f - eax_7;
        *(*(esi + 0x4e0) + 8) = edx * 0.895833313f - 2f - x87_r7_8;
        sub_4b6f50(*(esi + 0x4e0));
        var_180 = sub_4b7df0(*(esi + 0x4e0));
    }

    int32_t eax_13 = *ebx - 1;

    if (eax_13 <= 0x29)
    {
        int32_t edx_4 = 0;
        edx_4 = lookup_table_47a234[eax_13];
        int32_t* edi_2;

        switch (edx_4)
        {
            case 0:
            {
                edi_2 = esi + 0x254;
                goto label_479f3c;
            }
            case 1:
            {
                edi_2 = esi + 0x20c;
                goto label_479f3c;
            }
            case 2:
            {
                edi_2 = esi + 0x2cc;
                goto label_479f3c;
            }
            case 3:
            {
                edi_2 = esi + 0x1c4;
            label_479f3c:

                if (edi_2)
                {
                    sub_4b4e00(edi_2, ecx * 0.984375f - sub_4b6ce0(edi_2),
                        edx * 0.895833313f - 2f - 2f - sub_4b6d00(edi_2)
                            - sub_4b7e00(*(esi + 0x4e0)),
                        128f, 128f, 128f, 0, 0, 0);
                    var_17c = sub_4b6ce0(edi_2);
                }
                break;
            }
            case 4:
            {
                edi_2 = esi + 0x374;
                goto label_479f3c;
            }
            case 5:
            {
                edi_2 = esi + 0x2e4;
                goto label_479f3c;
            }
            case 6:
            {
                edi_2 = esi + 0x32c;
                goto label_479f3c;
            }
            case 7:
            {
                edi_2 = esi + 0x284;
                goto label_479f3c;
            }
            case 8:
            {
                edi_2 = esi + 0x314;
                goto label_479f3c;
            }
            case 9:
            {
                edi_2 = esi + 0x224;
                goto label_479f3c;
            }
            case 0xa:
            {
                edi_2 = esi + 0x2b4;
                goto label_479f3c;
            }
            case 0xb:
            {
                edi_2 = esi + 0x344;
                goto label_479f3c;
            }
            case 0xc:
            {
                edi_2 = esi + 0x23c;
                goto label_479f3c;
            }
            case 0xd:
            {
                edi_2 = esi + 0x2fc;
                goto label_479f3c;
            }
            case 0xe:
            {
                edi_2 = esi + 0x1dc;
                goto label_479f3c;
            }
            case 0xf:
            {
                edi_2 = esi + 0x26c;
                goto label_479f3c;
            }
            case 0x10:
            {
                edi_2 = esi + 0x1f4;
                goto label_479f3c;
            }
            case 0x11:
            {
                edi_2 = esi + 0x35c;
                goto label_479f3c;
            }
        }
    }

    int32_t result = ebx[0x186];

    if (result)
    {
        g_a84a50 = 0;
        float var_14c;
        float* var_150_1 = &var_14c;
        g_a84a58 = 0;
        int32_t var_134_1 = 0;
        int32_t var_130;
        __builtin_strncpy(&var_130, "fff?", 8);
        int32_t var_138_1 = 0x3f000000;
        int32_t var_140_1 = 0;
        int32_t var_13c_1 = 0;
        var_14c = ecx * 0.984375f;
        int32_t var_144_1 = 0x3f800000;
        int32_t var_110_1 = 0;
        int32_t var_10c;
        __builtin_strncpy(&var_10c, "fff?", 8);
        long double x87_r7_27 = edx * 0.895833313f;
        int32_t var_114_1 = 0x3f000000;
        int32_t var_11c_1 = 0;
        int32_t var_118_1 = 0;
        int32_t var_120_1 = 0x3f800000;
        int32_t var_160 = 1;
        int32_t var_158_1 = 0xffffffff;
        float var_148_1 = x87_r7_27;
        long double x87_r6_1 = var_180;
        long double temp0_1 = var_17c;
        x87_r6_1 - temp0_1;
        int32_t var_154_1 = 2;
        int32_t var_15c_1 = 0x80000;
        long double x87_r6_3;

        x87_r6_3 = *(&((x87_r6_1 < temp0_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_1, temp0_1) ? 1 : 0) << 0xa | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe
            | 0x3800) + 1) & 0x41 ? var_17c : var_180 + 3f;

        float var_128_1 = var_14c - x87_r6_3;
        float var_124_1 = x87_r7_27;
        result = (*((g_a84a54 << 2) + &g_a94e84))(&var_160);
    }

    if (ebx[0x185] != 1)
        return result;

    float var_168_1 = g_c28b44 * 0.5f;
    float var_164_1 = g_c28b48 * 0.5f;
    float var_180_4 = sub_4b6ce0(esi + 0x74) * 0.5f;
    int32_t eax_22;
    int32_t ecx_6;
    eax_22 = sub_4b6d00(esi + 0x74);
    int32_t var_17c_6 = eax_22;
    int32_t var_1ac_1 = ecx_6;
    var_17c_6 = var_17c_6 * 0.5f;
    int32_t var_17c_7 = var_17c_6;
    float var_1ac_2 = var_164_1 - var_17c_7;
    var_17c_7 = var_180_4;
    int32_t var_1b0_1 = var_17c_7;
    return sub_4b4f40(esi + 0x74, var_168_1 - var_17c_7, var_1ac_2, 128f, 128f, 128f, 0, 0, 0,
        0x3f800000);
}
