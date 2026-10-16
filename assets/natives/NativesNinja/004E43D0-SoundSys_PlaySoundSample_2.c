#include "004E43D0-SoundSys_PlaySoundSample_2.h"
/* 0x004e43d0 SoundSys_PlaySoundSample_2 full linked: callers=1 callees=6 */
struct status_msg* sub_4e43d0(float a1, void* a2, int32_t* a3, double* a4, float* a5, float* a6, char a7, char a8, int32_t a9, int32_t a10, char* a11)

{
    int32_t kind;
    kind = g_a5e3f4;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    sub_4c5710(a2, result, sub_4cec10(a11));
    result->head[0x1c] = 0x3f800000;
    result->head[0x20] = 0x3f800000;
    result->head[0x24] = 0x3f800000;
    result->head[0x1d] = 0;
    result->head[0x1e] = 0;
    result->head[0x1f] = 0;
    result->head[0x21] = 0;
    result->head[0x22] = 0;
    result->head[0x23] = 0;
    result->head[0x25] = 0;
    void* __offset(status_msg, 0x5a4) eax_1 = &result->head[0x169];
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        *(ADJ(eax_1) + 0x5a0) = 0;
        *(ADJ(eax_1) + 0x5a4) = 0;
        eax_1 += 8;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    result->sprite[0x3c] = a2;
    result->sprite[0x3d] = *(&a2 + 1);
    result->sprite[0x3e] = *(&a2 + 2);
    result->sprite[0x3f] = *(&a2 + 3);
    *(result + 0x59c) = a9;
    *(result + 0x5b0) = 0;

    if (a7)
        *(result + 0x59c) = 1;

    *(result + 0x5b5) = 0;
    *(result + 0x5b4) = 0;
    double var_18 = (*a3 + *a4) * 0.5;
    double var_10 = (*(a3 + 8) + a4[1]) * 0.5;
    double var_8 = (*(a3 + 0x10) + a4[2]) * 0.5;
    sub_4c7140(a2, result, &var_18, sub_4b32b0(a3, a4), 1);

    if (!*a3 && a3[1] == 0xc113f2de)
    {
        *a3 = 0;
        a3[1] = 0xc113f2de;
    }

    int32_t var_30_2 = a10;
    sub_4e4530(result, a3, a4, a5, a6, a7, a8, a9, a11);
    return result;
}
