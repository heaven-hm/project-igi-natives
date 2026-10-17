// IGI native provenance: FX_FragmentSimulate_4 - 0x00483A00 - CFG score 93.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00483A00-FX_FragmentSimulate_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FragmentSimulate_4.h"
int32_t* FX_FragmentSimulate_4(void* context , double* param_2)

{
    void* item_7c = context;
    int32_t item_140 = 0x60000000;
    int32_t item_13c = 0xc0866666;
    int32_t item_138 = 0x60000000;
    int32_t item_134 = 0x40866666;
    int32_t item_130 = 0;
    int32_t item_12c = 0;
    int32_t item_128 = 0x60000000;
    int32_t item_124 = 0x40866666;
    int32_t item_120 = 0x60000000;
    int32_t item_11c = 0x40866666;
    int32_t item_118 = 0;
    int32_t item_114 = 0;
    int32_t item_110 = 0x60000000;
    int32_t item_10c = 0xc0866666;
    int32_t item_108 = 0x60000000;
    int32_t item_104 = 0xc0866666;
    int32_t item_100 = 0;
    int32_t item_fc = 0;
    int32_t item_f8 = 0x60000000;
    int32_t item_f4 = 0x40866666;
    int32_t item_f0 = 0x60000000;
    int32_t item_ec = 0xc0866666;
    int32_t item_e8 = 0;
    int32_t item_e4 = 0;
    int32_t item_e0;
    memcpy(&item_e0,
        "\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\xc0\xcc\xcc\xa4\x"
    "40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40",
        0x60);
    int32_t* result = &item_138;
    int32_t i_1 = 8;
    int32_t i;

    do
    {
        long double fpu_val_7_2 = *(result - 8) + *(context + 0x20);
        result = &result[6];
        i = i_1;
        i_1 -= 1;
        *(result - 0x20) = fpu_val_7_2;
        *(result - 0x18) = *(result - 0x18) + *(context + 0x28);
        *(result - 0x10) = *(result - 0x10) + *(context + 0x30);
    } while (i != 1);
    int32_t context_val = 0;
    int32_t* source_val = &item_140;
label_483c1a:

    if (context_val < 8)
    {
        while (true)
        {
            char data_val = Level_LoadObjects_4();
            void item_80;
            void item_78;
            DynObj_FindSymbol_11(Level_StartMission_4(), &item_78, source_val, param_2, 1, data_val, &item_80, 0xffffffff);
            int32_t* result_3;
            result = result_3;

            if (!result)
            {
                if (context_val >= 8)
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
                    long double fpu_val_7_7 = *result;
                    long double f1_1 = 0.0f;
                    fpu_val_7_7 - f1_1;
                    result = (fpu_val_7_7 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_7, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_7 == f1_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x41))
                    {
                        double item_70;
                        double item_158 = item_70 - *source_val;
                        double item_68;
                        double item_150_1 = item_68 - *(source_val + 8);
                        double item_60;
                        double item_148_1 = item_60 - *(source_val + 0x10);
                        Sys_FreeMemory_11(&item_158);
                        item_158 = item_158 * 20.48;
                        double item_150_2 = item_150_1 * 20.48;
                        double item_148_2 = item_148_1 * 20.48;
                        *source_val = item_158 + item_70;
                        *(source_val + 8) = item_150_2 + item_68;
                        *(source_val + 0x10) = item_148_2 + item_60;
                        continue;
                    }
                }
            }

            context_val += 1;
            source_val = &source_val[6];
            goto label_483c1a;
        }
    }

    result = 1;
    return result;
}
