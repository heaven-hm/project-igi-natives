#include "Script_EvaluateCondition_23.h"
void* Script_EvaluateCondition_23(float* a1, void* a2, char a3)

{
    float* dstD;

    if (!a3)
    {
        dstD = a1;
        *dstD = 1f;
        dstD[1] = 0;
        dstD[2] = 0;
        dstD[3] = 0;
        dstD[4] = 0x3f800000;
        dstD[5] = 0;
        dstD[6] = 0;
        dstD[7] = 0;
        dstD[8] = 0x3f800000;
        dstD[9] = 0;
    }
    else
    {
        dstD = a1;
        Sys_DispatchOpcode_12(dstD, *(a2 + 0x20));
    }

    void* result = *(a2 + 0x134);

    if (*(result + 0x64))
    {
        void* valA1 = *(result + 0x14);
        float v_28 = *dstD * *(valA1 + 0x70) + dstD[2] * *(valA1 + 0x88) + *(valA1 + 0x7c) * dstD[1];
        float v_24_1 =
            *dstD * *(valA1 + 0x74) + *(valA1 + 0x8c) * dstD[2] + *(valA1 + 0x80) * dstD[1];
        float v_20_1 =
            dstD[2] * *(valA1 + 0x90) + *(valA1 + 0x78) * *dstD + *(valA1 + 0x84) * dstD[1];
        float v_1c_1 =
            *(valA1 + 0x88) * dstD[5] + dstD[4] * *(valA1 + 0x7c) + dstD[3] * *(valA1 + 0x70);
        float v_18_1 =
            *(valA1 + 0x8c) * dstD[5] + *(valA1 + 0x80) * dstD[4] + dstD[3] * *(valA1 + 0x74);
        float v_14_1 =
            dstD[4] * *(valA1 + 0x84) + *(valA1 + 0x78) * dstD[3] + *(valA1 + 0x90) * dstD[5];
        float v_10_1 =
            dstD[6] * *(valA1 + 0x70) + dstD[8] * *(valA1 + 0x88) + *(valA1 + 0x7c) * dstD[7];
        float v_c_1 =
            dstD[6] * *(valA1 + 0x74) + *(valA1 + 0x8c) * dstD[8] + *(valA1 + 0x80) * dstD[7];
        result = *(valA1 + 0x94) + dstD[9] + 1;
        void* result_1 = result;
        float v_8_1 =
            dstD[8] * *(valA1 + 0x90) + *(valA1 + 0x78) * dstD[6] + *(valA1 + 0x84) * dstD[7];
        memcpy(dstD, &v_28, 0x28);
    }

    return result;
}
