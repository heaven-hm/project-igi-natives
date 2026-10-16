#include "00483A00-FX_FragmentSimulate_4.h"
/* 0x00483a00 FX_FragmentSimulate_4 full linked: callers=2 callees=5 */
int32_t* sub_483a00(void* a1 @ 0x8, double* a2)

{
    void* var_7c = a1;
    int32_t var_140 = 0x60000000;
    int32_t var_13c = 0xc0866666;
    int32_t var_138 = 0x60000000;
    int32_t var_134 = 0x40866666;
    int32_t var_130 = 0;
    int32_t var_12c = 0;
    int32_t var_128 = 0x60000000;
    int32_t var_124 = 0x40866666;
    int32_t var_120 = 0x60000000;
    int32_t var_11c = 0x40866666;
    int32_t var_118 = 0;
    int32_t var_114 = 0;
    int32_t var_110 = 0x60000000;
    int32_t var_10c = 0xc0866666;
    int32_t var_108 = 0x60000000;
    int32_t var_104 = 0xc0866666;
    int32_t var_100 = 0;
    int32_t var_fc = 0;
    int32_t var_f8 = 0x60000000;
    int32_t var_f4 = 0x40866666;
    int32_t var_f0 = 0x60000000;
    int32_t var_ec = 0xc0866666;
    int32_t var_e8 = 0;
    int32_t var_e4 = 0;
    int32_t var_e0;
    memcpy(&var_e0,
        "\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\xc0\xcc\xcc\xa4\x"
    "40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40",
        0x60);
    int32_t* result = &var_138;
    int32_t i_1 = 8;
    int32_t i;

    do
    {
        long double x87_r7_2 = *(result - 8) + *(a1 + 0x20);
        result = &result[6];
        i = i_1;
        i_1 -= 1;
        *(result - 0x20) = x87_r7_2;
        *(result - 0x18) = *(result - 0x18) + *(a1 + 0x28);
        *(result - 0x10) = *(result - 0x10) + *(a1 + 0x30);
    } while (i != 1);
    int32_t ebx = 0;
    int32_t* esi = &var_140;
label_483c1a:

    if (ebx < 8)
    {
        while (true)
        {
            char eax = Level_LoadObjects_4();
            void var_80;
            void var_78;
            sub_4cc2a0(Level_StartMission_4(), &var_78, esi, a2, 1, eax, &var_80, 0xffffffff);
            int32_t* result_3;
            result = result_3;

            if (!result)
            {
                if (ebx >= 8)
                    break;

                result = 0;
                return result;
            }

            int32_t* result_2;
            result = result_2;

            if (result)
            {
                int32_t* result_1;
                result = result_1;

                if (result)
                {
                    long double x87_r7_7 = *result;
                    long double temp1_1 = 0f;
                    x87_r7_7 - temp1_1;
                    result = (x87_r7_7 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x41))
                    {
                        double var_70;
                        double var_158 = var_70 - *esi;
                        double var_68;
                        double var_150_1 = var_68 - *(esi + 8);
                        double var_60;
                        double var_148_1 = var_60 - *(esi + 0x10);
                        sub_4b3100(&var_158);
                        var_158 = var_158 * 20.48;
                        double var_150_2 = var_150_1 * 20.48;
                        double var_148_2 = var_148_1 * 20.48;
                        *esi = var_158 + var_70;
                        *(esi + 8) = var_150_2 + var_68;
                        *(esi + 0x10) = var_148_2 + var_60;
                        continue;
                    }
                }
            }

            ebx += 1;
            esi = &esi[6];
            goto label_483c1a;
        }
    }

    result = 1;
    return result;
}
