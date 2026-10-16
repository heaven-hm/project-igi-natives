#include "00419540-Menu_HandleInput_5.h"
/* 0x00419540 Menu_HandleInput_5 full linked: callers=1 callees=0 */
int32_t Menu_HandleInput_5(int32_t* a1, float* a2)

{
    void var_2c;
    int32_t* eax = &var_2c;
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        eax[-1] = 0;
        *eax = 0x3f800000;
        eax[1] = 0;
        eax[-2] = 0x3d99999a;
        eax[-4] = 0;
        eax[-3] = 0;
        eax[-5] = 0x3f800000;
        eax = &eax[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float var_48;
    int32_t* var_4c = &var_48;
    int32_t ebx = 0;
    int32_t result = *a1;
    int32_t var_58 = 0x80000;
    int32_t var_5c = 1;
    int32_t var_54 = 0;
    int32_t var_50 = 2;
    float* edi = &a1[1];

    if (result > 0)
    {
        do
        {
            int32_t edx = g_a84a54;
            var_48 = edi[1] * a2[2] + *edi * *a2 + a2[4];
            float var_44_1 = edi[1] * a2[3] + *edi * a2[1] + a2[5];
            float var_24_1 = edi[3] * a2[2] + edi[2] * *a2 + a2[4];
            float var_20_1 = edi[2] * a2[1] + edi[3] * a2[3] + a2[5];
            (*((edx << 2) + &g_a94e84))(&var_5c);
            result = *a1;
            ebx += 1;
            edi = &edi[4];
        } while (ebx < result);
    }

    return result;
}
