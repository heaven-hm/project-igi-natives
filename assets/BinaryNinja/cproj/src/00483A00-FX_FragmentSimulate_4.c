#include "gi_platform.h"
#include "00483A00-FX_FragmentSimulate_4.h"
int32_t* FX_FragmentSimulate_4(void* a1 , double* a2)

{
    void* v_7c = a1;
    int32_t v_140 = 0x60000000;
    int32_t v_13c = 0xc0866666;
    int32_t v_138 = 0x60000000;
    int32_t v_134 = 0x40866666;
    int32_t v_130 = 0;
    int32_t v_12c = 0;
    int32_t v_128 = 0x60000000;
    int32_t v_124 = 0x40866666;
    int32_t v_120 = 0x60000000;
    int32_t v_11c = 0x40866666;
    int32_t v_118 = 0;
    int32_t v_114 = 0;
    int32_t v_110 = 0x60000000;
    int32_t v_10c = 0xc0866666;
    int32_t v_108 = 0x60000000;
    int32_t v_104 = 0xc0866666;
    int32_t v_100 = 0;
    int32_t v_fc = 0;
    int32_t v_f8 = 0x60000000;
    int32_t v_f4 = 0x40866666;
    int32_t v_f0 = 0x60000000;
    int32_t v_ec = 0xc0866666;
    int32_t v_e8 = 0;
    int32_t v_e4 = 0;
    int32_t v_e0;
    memcpy(&v_e0,
        "\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\xc0\xcc\xcc\xa4\x"
    "40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40\x00\x00\x00\x60\x66\x66\x86\x40\x00\x00\x00\x60\x66\x66\x86\xc0\x00\x00\x00\xc0\xcc\xcc\xa4"
    "40",
        0x60);
    int32_t* result = &v_138;
    int32_t i_1 = 8;
    int32_t i;

    do
    {
        long double x87_r7_2 = *(result - 8) + (*(int32_t*)(uintptr_t)(a1 + 0x20));
        result = &result[6];
        i = i_1;
        i_1 -= 1;
        *(result - 0x20) = x87_r7_2;
        *(result - 0x18) = *(result - 0x18) + (*(int32_t*)(uintptr_t)(a1 + 0x28));
        *(result - 0x10) = *(result - 0x10) + (*(int32_t*)(uintptr_t)(a1 + 0x30));
    } while (i != 1);
    int32_t ctxB = 0;
    int32_t* srcS = &v_140;
    label_483c1a: ;
    if (ctxB < 8)
    {
        while (true)
        {
            char valA = Level_LoadObjects_4();
            char v_80;
            char v_78;
            DynObj_FindSymbol_11(Level_StartMission_4(), &v_78, srcS, a2, 1, valA, &v_80, 0xffffffff);
            int32_t* result_3;
            result = result_3;

            if (!result)
            {
                if (ctxB >= 8)
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
                    long double f1_1 = 0.0f;
                    x87_r7_7 - f1_1;
                    result = (x87_r7_7 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == f1_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x41))
                    {
                        double v_70;
                        double v_158 = v_70 - *srcS;
                        double v_68;
                        double v_150_1 = v_68 - (*(int32_t*)(uintptr_t)(srcS + 8));
                        double v_60;
                        double v_148_1 = v_60 - (*(int32_t*)(uintptr_t)(srcS + 0x10));
                        Sys_FreeMemory_11(&v_158);
                        v_158 = v_158 * 20.48;
                        double v_150_2 = v_150_1 * 20.48;
                        double v_148_2 = v_148_1 * 20.48;
                        *srcS = v_158 + v_70;
                        (*(int32_t*)(uintptr_t)(srcS + 8)) = v_150_2 + v_68;
                        (*(int32_t*)(uintptr_t)(srcS + 0x10)) = v_148_2 + v_60;
                        continue;
                    }
                }
            }

            ctxB += 1;
            srcS = &srcS[6];
            goto label_483c1a;
        }
    }

    result = 1;
    return result;
}
