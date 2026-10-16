#include "SoundSys_PlaySoundSample_2.h"
struct status_msg* SoundSys_PlaySoundSample_2(float a1, void* a2, int32_t* a3, double* a4, float* a5, float* a6, char a7, char a8, int32_t a9, int32_t a10, char* a11)

{
    int32_t kind;
    kind = g_a5e3f4;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    DynObj_LookupHashItem_6(a2, result, DynObj_Missing(a11));
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
    void* __offset(status_msg, 0x5a4) valA1 = &result->head[0x169];
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        *(ADJ(valA1) + 0x5a0) = 0;
        *(ADJ(valA1) + 0x5a4) = 0;
        valA1 += 8;
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
    double v_18 = (*a3 + *a4) * 0.5;
    double v_10 = (*(a3 + 8) + a4[1]) * 0.5;
    double v_8 = (*(a3 + 0x10) + a4[2]) * 0.5;
    DynObj_LinkDynamicCube_8(a2, result, &v_18, Sys_DispatchOpcode_11(a3, a4), 1);

    if (!*a3 && a3[1] == 0xc113f2de)
    {
        *a3 = 0;
        a3[1] = 0xc113f2de;
    }

    int32_t v_30_2 = a10;
    SoundSys_Update3DPosition_2(result, a3, a4, a5, a6, a7, a8, a9, a11);
    return result;
}
