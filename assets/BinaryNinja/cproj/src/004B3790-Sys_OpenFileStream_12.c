#include "gi_platform.h"
#include "004B3790-Sys_OpenFileStream_12.h"
int32_t Sys_OpenFileStream_12(int32_t a1, float* a2, float a3)

{
    float v_50;
    Sys_DispatchOpcode_12(&v_50, a3);
    float v_44;
    float v_38;
    float v_28 = v_50 * *a2 + v_38 * a2[2] + v_44 * a2[1];
    float v_4c;
    float v_40;
    float v_34;
    float v_24 = v_4c * *a2 + v_34 * a2[2] + v_40 * a2[1];
    float v_48;
    float v_3c;
    float v_30;
    float v_20 = v_48 * *a2 + v_30 * a2[2] + v_3c * a2[1];
    float v_1c = v_50 * a2[3] + v_38 * a2[5] + v_44 * a2[4];
    float v_18 = v_4c * a2[3] + v_34 * a2[5] + v_40 * a2[4];
    float v_14 = v_48 * a2[3] + v_30 * a2[5] + v_3c * a2[4];
    float v_10 = v_50 * a2[6] + v_38 * a2[8] + v_44 * a2[7];
    float v_c = v_4c * a2[6] + v_34 * a2[8] + v_40 * a2[7];
    int32_t result;
    int32_t v_4 = a2[9] + result + 1;
    float v_8 = v_48 * a2[6] + v_30 * a2[8] + v_3c * a2[7];
    memcpy(a1, &v_28, 0x28);
    return result;
}
