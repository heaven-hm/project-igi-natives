#include "004FC620-Script_ParseEnumInt32_29.h"
/* 0x004fc620 Script_ParseEnumInt32_29 full linked: callers=1 callees=1 */
int32_t sub_4fc620(void* a1, int32_t a2, char a3, double* a4)

{
    int32_t i = 0;
    int32_t* var_cd4 = nullptr;
    int32_t i_1 = 0;
    double var_c68[0x16];
    double (* edx)[0x16] = &var_c68;
    int32_t var_cc0[0x16];
    int32_t (* edi)[0x16] = &var_cc0;
    void var_bb0;
    void* ecx = &var_bb0;
    float* eax = a1 + 0x1d0;

    do
    {
        if (*(eax + 5) && eax[1])
        {
            long double x87_r7_2 = *(a1 + 0x78) * *eax;
            long double x87_r6_2 = *(a1 + 0x74) * eax[-1];
            *edi = i;
            *edx = 0;
            long double x87_r6_4 = *(a1 + 0x70) * eax[-2];
            *(edx + 4) = 0x40d40000;
            var_cd4 += 1;
            i = i_1;
            ecx += 0x18;
            edi = &(*edi)[1];
            edx = &(*edx)[1];
            long double x87_r6_8 =
                *(a1 + 0x84) * *eax + *(a1 + 0x80) * eax[-1] + *(a1 + 0x7c) * eax[-2];
            long double x87_r6_12 =
                *(a1 + 0x90) * *eax + *(a1 + 0x8c) * eax[-1] + *(a1 + 0x88) * eax[-2];
            *(ecx - 0x20) = x87_r7_2 + x87_r6_2 + x87_r6_4;
            *(ecx - 0x18) = x87_r6_8;
            *(ecx - 0x10) = x87_r6_12;
            *(ecx - 0x20) = *(a1 + 0x20) + *(ecx - 0x20);
            *(ecx - 0x18) = *(a1 + 0x28) + *(ecx - 0x18);
            *(ecx - 0x10) = *(a1 + 0x30) + *(ecx - 0x10);
        }

        i += 1;
        eax = &eax[0xe];
        i_1 = i;
    } while (i < 0x16);

    if (var_cd4)
    {
        double var_bb8;
        void var_9a8;
        sub_4cb9f0(a2, &var_9a8, &var_bb8, var_cd4, &var_c68, a3, a4, 0xffffffff);
        int32_t eax_2 = 0;

        if (var_cd4 > 0)
        {
            void var_958;
            int32_t* ecx_2 = &var_958;

            do
            {
                if (ecx_2[2] && *ecx_2)
                {
                    *(a1 + var_cc0[eax_2] * 0x38 + 0x1d6) = 1;
                    *(a1 + 0x1b8) += 1;
                    return 0;
                }

                eax_2 += 1;
                ecx_2 = &ecx_2[0x1c];
            } while (eax_2 < var_cd4);
        }
    }

    return 1;
}
