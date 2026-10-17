// Original IGI.EXE function: Script_SpawnNewTask_18 (VA 0x004F4940; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_18.h"
void* Script_SpawnNewTask_18(float a1, void* a2)

{
    int32_t* objC = a1;
    void* valA = *objC;
    a1 = *(valA + 0x3c);
    float v_8 = *(valA + 0x40);
    float v_4 = *(valA + 0x44);
    void* result = a2;

    if (result > 1)
    {
        int32_t* objC1 = &objC[2];
        void* i_1 = result - 1;
        void* i;

        do
        {
            void* valA2 = *objC1;
            long double x87_r7_2 = *(valA2 + 0x3c) - a1;
            float* tmpD2 = valA2 + 0x3c;
            long double f0_1 = 3.1415926535897944;
            x87_r7_2 - f0_1;

            if (!(*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_6;
                long double f2_1;

                do
                {
                    *tmpD2 = *tmpD2 - 6.28318548f;
                    void* valA4 = *objC1;
                    x87_r7_6 = *(valA4 + 0x3c) - a1;
                    tmpD2 = valA4 + 0x3c;
                    f2_1 = 3.1415926535897944;
                    x87_r7_6 - f2_1;
                } while (!(*(&((x87_r7_6 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* valA6 = *objC1;
            long double x87_r7_8 = *(valA6 + 0x3c) - a1;
            float* tmpD3 = valA6 + 0x3c;
            long double f1_1 = -3.1415926535897944;
            x87_r7_8 - f1_1;

            if (*(&((x87_r7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_12;
                long double f4_1;

                do
                {
                    *tmpD3 = *tmpD3 + 6.28318548f;
                    void* valA8 = *objC1;
                    x87_r7_12 = *(valA8 + 0x3c) - a1;
                    tmpD3 = valA8 + 0x3c;
                    f4_1 = -3.1415926535897944;
                    x87_r7_12 - f4_1;
                } while (*(&((x87_r7_12 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_12, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == f4_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            void* valA10 = *objC1;
            long double x87_r7_14 = *(valA10 + 0x40) - v_8;
            a1 = *(valA10 + 0x3c);
            float* tmpD5 = valA10 + 0x40;
            long double f3_1 = 3.1415926535897944;
            x87_r7_14 - f3_1;

            if (!(*(&((x87_r7_14 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_14, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_18;
                long double f6_1;

                do
                {
                    *tmpD5 = *tmpD5 - 6.28318548f;
                    void* valA12 = *objC1;
                    x87_r7_18 = *(valA12 + 0x40) - v_8;
                    tmpD5 = valA12 + 0x40;
                    f6_1 = 3.1415926535897944;
                    x87_r7_18 - f6_1;
                } while (!(*(&((x87_r7_18 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* valA14 = *objC1;
            long double x87_r7_20 = *(valA14 + 0x40) - v_8;
            float* tmpD6 = valA14 + 0x40;
            long double f5_1 = -3.1415926535897944;
            x87_r7_20 - f5_1;

            if (*(&((x87_r7_20 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_20, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_24;
                long double f8_1;

                do
                {
                    *tmpD6 = *tmpD6 + 6.28318548f;
                    void* valA16 = *objC1;
                    x87_r7_24 = *(valA16 + 0x40) - v_8;
                    tmpD6 = valA16 + 0x40;
                    f8_1 = -3.1415926535897944;
                    x87_r7_24 - f8_1;
                } while (*(&((x87_r7_24 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_24 == f8_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            void* valA18 = *objC1;
            long double x87_r7_26 = *(valA18 + 0x44) - v_4;
            v_8 = *(valA18 + 0x40);
            float* tmpD8 = valA18 + 0x44;
            long double f7_1 = 3.1415926535897944;
            x87_r7_26 - f7_1;

            if (!(*(&((x87_r7_26 < f7_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_26, f7_1) ? 1 : 0) << 0xa
                | (x87_r7_26 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_30;
                long double f10_1;

                do
                {
                    *tmpD8 = *tmpD8 - 6.28318548f;
                    void* valA20 = *objC1;
                    x87_r7_30 = *(valA20 + 0x44) - v_4;
                    tmpD8 = valA20 + 0x44;
                    f10_1 = 3.1415926535897944;
                    x87_r7_30 - f10_1;
                } while (!(*(&((x87_r7_30 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_30, f10_1) ? 1 : 0) << 0xa
                    | (x87_r7_30 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* valA22 = *objC1;
            long double x87_r7_32 = *(valA22 + 0x44) - v_4;
            float* tmpD9 = valA22 + 0x44;
            long double f9_1 = -3.1415926535897944;
            x87_r7_32 - f9_1;

            if (*(&((x87_r7_32 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_32, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_32 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_36;
                long double f12_1;

                do
                {
                    *tmpD9 = *tmpD9 + 6.28318548f;
                    void* valA24 = *objC1;
                    x87_r7_36 = *(valA24 + 0x44) - v_4;
                    tmpD9 = valA24 + 0x44;
                    f12_1 = -3.1415926535897944;
                    x87_r7_36 - f12_1;
                } while (*(&((x87_r7_36 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_36, f12_1) ? 1 : 0) << 0xa
                    | (x87_r7_36 == f12_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            result = *objC1;
            objC1 = &objC1[2];
            i = i_1;
            i_1 -= 1;
            v_4 = *(result + 0x44);
        } while (i != 1);
    }

    return result;
}
