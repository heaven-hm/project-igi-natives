// Original IGI.EXE function: SoundSys_PlaySoundSample_2 (VA 0x004E43D0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_PlaySoundSample_2.h"
struct status_msg* SoundSys_PlaySoundSample_2(float context, void* param_2, int32_t* param_3, double* param_4, float* param_5, float* param_6, char param_7, char param_8, int32_t param_9, int32_t param_10, char* param_11)

{
    int32_t kind;
    kind = g_a5e3f4;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    DynObj_LookupHashItem_6(param_2, result, DynObj_Missing(param_11));
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
    void* __offset(status_msg, 0x5a4) data_1 = &result->head[0x169];
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        *(ADJ(data_1) + 0x5a0) = 0;
        *(ADJ(data_1) + 0x5a4) = 0;
        data_1 += 8;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    result->sprite[0x3c] = param_2;
    result->sprite[0x3d] = *(&param_2 + 1);
    result->sprite[0x3e] = *(&param_2 + 2);
    result->sprite[0x3f] = *(&param_2 + 3);
    *(result + 0x59c) = param_9;
    *(result + 0x5b0) = 0;

    if (param_7)
        *(result + 0x59c) = 1;

    *(result + 0x5b5) = 0;
    *(result + 0x5b4) = 0;
    double item_18 = (*param_3 + *param_4) * 0.5;
    double item_10 = (*(param_3 + 8) + param_4[1]) * 0.5;
    double item_8 = (*(param_3 + 0x10) + param_4[2]) * 0.5;
    DynObj_LinkDynamicCube_8(param_2, result, &item_18, Sys_DispatchOpcode_11(param_3, param_4), 1);

    if (!*param_3 && param_3[1] == 0xc113f2de)
    {
        *param_3 = 0;
        param_3[1] = 0xc113f2de;
    }

    int32_t item_30_2 = param_10;
    SoundSys_Update3DPosition_2(result, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_11);
    return result;
}
