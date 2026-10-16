#include "004F4940-Script_SpawnNewTask_18.h"
/* 0x004f4940 Script_SpawnNewTask_18 full linked: callers=1 callees=0 */
void* sub_4f4940(float a1, void* a2)

{
    int32_t* ecx = a1;
    void* eax = *ecx;
    a1 = *(eax + 0x3c);
    float var_8 = *(eax + 0x40);
    float var_4 = *(eax + 0x44);
    void* result = a2;

    if (result > 1)
    {
        int32_t* ecx_1 = &ecx[2];
        void* i_1 = result - 1;
        void* i;

        do
        {
            void* eax_2 = *ecx_1;
            long double x87_r7_2 = *(eax_2 + 0x3c) - a1;
            float* edx_2 = eax_2 + 0x3c;
            long double temp0_1 = 3.1415926535897944;
            x87_r7_2 - temp0_1;

            if (!(*(&((x87_r7_2 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_6;
                long double temp2_1;

                do
                {
                    *edx_2 = *edx_2 - 6.28318548f;
                    void* eax_4 = *ecx_1;
                    x87_r7_6 = *(eax_4 + 0x3c) - a1;
                    edx_2 = eax_4 + 0x3c;
                    temp2_1 = 3.1415926535897944;
                    x87_r7_6 - temp2_1;
                } while (!(*(&((x87_r7_6 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* eax_6 = *ecx_1;
            long double x87_r7_8 = *(eax_6 + 0x3c) - a1;
            float* edx_3 = eax_6 + 0x3c;
            long double temp1_1 = -3.1415926535897944;
            x87_r7_8 - temp1_1;

            if (*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_12;
                long double temp4_1;

                do
                {
                    *edx_3 = *edx_3 + 6.28318548f;
                    void* eax_8 = *ecx_1;
                    x87_r7_12 = *(eax_8 + 0x3c) - a1;
                    edx_3 = eax_8 + 0x3c;
                    temp4_1 = -3.1415926535897944;
                    x87_r7_12 - temp4_1;
                } while (*(&((x87_r7_12 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_12, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            void* eax_10 = *ecx_1;
            long double x87_r7_14 = *(eax_10 + 0x40) - var_8;
            a1 = *(eax_10 + 0x3c);
            float* edx_5 = eax_10 + 0x40;
            long double temp3_1 = 3.1415926535897944;
            x87_r7_14 - temp3_1;

            if (!(*(&((x87_r7_14 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_14, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_18;
                long double temp6_1;

                do
                {
                    *edx_5 = *edx_5 - 6.28318548f;
                    void* eax_12 = *ecx_1;
                    x87_r7_18 = *(eax_12 + 0x40) - var_8;
                    edx_5 = eax_12 + 0x40;
                    temp6_1 = 3.1415926535897944;
                    x87_r7_18 - temp6_1;
                } while (!(*(&((x87_r7_18 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* eax_14 = *ecx_1;
            long double x87_r7_20 = *(eax_14 + 0x40) - var_8;
            float* edx_6 = eax_14 + 0x40;
            long double temp5_1 = -3.1415926535897944;
            x87_r7_20 - temp5_1;

            if (*(&((x87_r7_20 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_20, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_24;
                long double temp8_1;

                do
                {
                    *edx_6 = *edx_6 + 6.28318548f;
                    void* eax_16 = *ecx_1;
                    x87_r7_24 = *(eax_16 + 0x40) - var_8;
                    edx_6 = eax_16 + 0x40;
                    temp8_1 = -3.1415926535897944;
                    x87_r7_24 - temp8_1;
                } while (*(&((x87_r7_24 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_24 == temp8_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            void* eax_18 = *ecx_1;
            long double x87_r7_26 = *(eax_18 + 0x44) - var_4;
            var_8 = *(eax_18 + 0x40);
            float* edx_8 = eax_18 + 0x44;
            long double temp7_1 = 3.1415926535897944;
            x87_r7_26 - temp7_1;

            if (!(*(&((x87_r7_26 < temp7_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_26, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_26 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_30;
                long double temp10_1;

                do
                {
                    *edx_8 = *edx_8 - 6.28318548f;
                    void* eax_20 = *ecx_1;
                    x87_r7_30 = *(eax_20 + 0x44) - var_4;
                    edx_8 = eax_20 + 0x44;
                    temp10_1 = 3.1415926535897944;
                    x87_r7_30 - temp10_1;
                } while (!(*(&((x87_r7_30 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_30, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r7_30 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* eax_22 = *ecx_1;
            long double x87_r7_32 = *(eax_22 + 0x44) - var_4;
            float* edx_9 = eax_22 + 0x44;
            long double temp9_1 = -3.1415926535897944;
            x87_r7_32 - temp9_1;

            if (*(&((x87_r7_32 < temp9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_32, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_32 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_36;
                long double temp12_1;

                do
                {
                    *edx_9 = *edx_9 + 6.28318548f;
                    void* eax_24 = *ecx_1;
                    x87_r7_36 = *(eax_24 + 0x44) - var_4;
                    edx_9 = eax_24 + 0x44;
                    temp12_1 = -3.1415926535897944;
                    x87_r7_36 - temp12_1;
                } while (*(&((x87_r7_36 < temp12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_36, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r7_36 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            result = *ecx_1;
            ecx_1 = &ecx_1[2];
            i = i_1;
            i_1 -= 1;
            var_4 = *(result + 0x44);
        } while (i != 1);
    }

    return result;
}
