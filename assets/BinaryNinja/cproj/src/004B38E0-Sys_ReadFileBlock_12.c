#include "gi_platform.h"
#include "004B38E0-Sys_ReadFileBlock_12.h"
int32_t Sys_ReadFileBlock_12(float* a1, float a2, float a3, float a4)

{
    Sys_DispatchOpcode_12(a1, a4);
    float v_50;
    Sys_ExecuteBytecode_12(&v_50, a3);
    float v_44;
    float v_38;
    float v_28 = v_50 * *a1 + v_38 * a1[2] + v_44 * a1[1];
    float v_4c;
    float v_40;
    float v_34;
    float v_24 = v_4c * *a1 + v_34 * a1[2] + v_40 * a1[1];
    float v_48;
    float v_3c;
    float v_30;
    float v_20 = v_48 * *a1 + v_30 * a1[2] + v_3c * a1[1];
    float v_1c = v_50 * a1[3] + v_38 * a1[5] + v_44 * a1[4];
    float v_18 = v_4c * a1[3] + v_34 * a1[5] + v_40 * a1[4];
    float v_14 = v_48 * a1[3] + v_30 * a1[5] + v_3c * a1[4];
    float v_10 = v_50 * a1[6] + v_38 * a1[8] + v_44 * a1[7];
    int32_t result;
    int32_t v_4 = result + a1[9] + 1;
    float v_c = v_4c * a1[6] + v_34 * a1[8] + v_40 * a1[7];
    float v_8 = v_48 * a1[6] + v_30 * a1[8] + v_3c * a1[7];
    memcpy(a1, &v_28, 0x28);
    Sys_CloseFileStream_12(&v_50, a2);
    v_28 = v_50 * *a1 + v_38 * a1[2] + v_44 * a1[1];
    float v_24_1 = v_4c * *a1 + v_34 * a1[2] + v_40 * a1[1];
    float v_20_1 = v_48 * *a1 + v_30 * a1[2] + v_3c * a1[1];
    float v_1c_1 = v_50 * a1[3] + v_38 * a1[5] + v_44 * a1[4];
    int32_t v_4_1 = result + a1[9] + 1;
    float v_18_1 = v_4c * a1[3] + v_34 * a1[5] + v_40 * a1[4];
    float v_14_1 = v_48 * a1[3] + v_30 * a1[5] + v_3c * a1[4];
    float v_10_1 = v_50 * a1[6] + v_38 * a1[8] + v_44 * a1[7];
    float v_c_1 = v_4c * a1[6] + v_34 * a1[8] + v_40 * a1[7];
    float v_8_1 = v_48 * a1[6] + v_30 * a1[8] + v_3c * a1[7];
    memcpy(a1, &v_28, 0x28);
    a1[9] = 0;
    return result;
}
