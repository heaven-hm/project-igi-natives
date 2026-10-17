// Original IGI.EXE function: Vehicle_InitHeli_5 (VA 0x004355A0; static CFG gate FAIL, CFG score 0.833).
#include "Vehicle_InitHeli_5.h"
int32_t Vehicle_InitHeli_5(void* a1, float* a2)

{
    float v_54 = 0f;

    if (*(*(a1 + 0x138) + 4))
    {
        void* valA1 = *(a1 + 0x130);

        if (*(valA1 + 0x82d))
            v_54 = *(valA1 + 0x72c) * 0.785398185f;
    }

    float v_50;
    Sys_ReadFileBlock_12(&v_50, *(a1 + 0x13c), 0f, v_54);
    float v_44;
    float v_38;
    long double x87_r7_6 =
        v_50 * *(a1 + 0x108) + v_38 * *(a1 + 0x110) + v_44 * *(a1 + 0x10c);
    float v_4c;
    float v_40;
    float v_34;
    float v_24 = v_4c * *(a1 + 0x108) + v_34 * *(a1 + 0x110) + v_40 * *(a1 + 0x10c);
    float v_48;
    float v_3c;
    float v_30;
    float v_20 = v_48 * *(a1 + 0x108) + v_30 * *(a1 + 0x110) + v_3c * *(a1 + 0x10c);
    long double x87_r6_15 =
        v_50 * *(a1 + 0x114) + v_38 * *(a1 + 0x11c) + v_44 * *(a1 + 0x118);
    float v_18 = v_4c * *(a1 + 0x114) + v_34 * *(a1 + 0x11c) + v_40 * *(a1 + 0x118);
    float v_14 = v_48 * *(a1 + 0x114) + v_30 * *(a1 + 0x11c) + v_3c * *(a1 + 0x118);
    long double x87_r5_23 =
        v_38 * *(a1 + 0x128) + v_44 * *(a1 + 0x124) + v_50 * *(a1 + 0x120);
    int32_t v_2c;
    int32_t objC3 = *(a1 + 0x12c) + v_2c + 1;
    float v_c = v_34 * *(a1 + 0x128) + v_40 * *(a1 + 0x124) + v_4c * *(a1 + 0x120);
    float v_8 = v_30 * *(a1 + 0x128) + v_3c * *(a1 + 0x124) + v_48 * *(a1 + 0x120);
    v_50 = x87_r5_23 * a2[2] + x87_r6_15 * a2[1] + x87_r7_6 * *a2;
    float v_4c_1 = v_c * a2[2] + v_18 * a2[1] + v_24 * *a2;
    float v_48_1 = v_8 * a2[2] + v_14 * a2[1] + v_20 * *a2;
    float v_44_1 = x87_r7_6 * a2[3] + x87_r5_23 * a2[5] + x87_r6_15 * a2[4];
    float v_40_1 = v_24 * a2[3] + v_c * a2[5] + v_18 * a2[4];
    float v_3c_1 = v_20 * a2[3] + v_8 * a2[5] + v_14 * a2[4];
    float v_38_1 = x87_r7_6 * a2[6] + x87_r5_23 * a2[8] + x87_r6_15 * a2[7];
    float v_34_1 = v_24 * a2[6] + v_c * a2[8] + v_18 * a2[7];
    int32_t result = a2[9];
    int32_t v_2c_1 = result + objC3 + 1;
    float v_30_1 = v_20 * a2[6] + v_8 * a2[8] + v_14 * a2[7];
    memcpy(a1 + 0x70, &v_50, 0x28);
    return result;
}
