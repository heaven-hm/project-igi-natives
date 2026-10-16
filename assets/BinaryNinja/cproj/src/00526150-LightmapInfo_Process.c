#include "gi_platform.h"
#include "00526150-LightmapInfo_Process.h"
int32_t LightmapInfo_Process(void* a1, int32_t* a2)

{
    int32_t* dstD = a2;
    void* ctxB = a1;
    int32_t* i = nullptr;
    int32_t* srcS = (*(int32_t*)(uintptr_t)(dstD[1] + 0xc8)) + *dstD * 0xc + 4;
    a2 = nullptr;
    int32_t result;

    do
    {
        float v_24;
        float v_20;
        float v_1c;

        if (!i)
        {
            v_24 = (*(int32_t*)(uintptr_t)(ctxB + 0x30));
            v_20 = (*(int32_t*)(uintptr_t)(ctxB + 0x34));
            v_1c = (*(int32_t*)(uintptr_t)(ctxB + 0x38));
        }
        else if (i == 1)
        {
            v_24 = (*(int32_t*)(uintptr_t)(ctxB + 0x3c));
            v_20 = (*(int32_t*)(uintptr_t)(ctxB + 0x40));
            v_1c = (*(int32_t*)(uintptr_t)(ctxB + 0x44));
        }

        int32_t tmpD6 = 0;
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(*(dstD[1] + 0x88) + 8)) * 0.000244140625.0f;
        result = srcS[2];
        long double x87_r7_3 = x87_r7_2 + x87_r7_2;
        int32_t result_1 = result;
        long double x87_r7_4 = x87_r7_3 * x87_r7_3;
        v_24 = x87_r7_4 * v_24;
        v_20 = x87_r7_4 * v_20;
        v_1c = x87_r7_4 * v_1c;

        if (result > 0)
        {
            do
            {
                int32_t valA11 = *srcS;
                float v_30_1 = v_24;
                long double x87_r7_7 = v_24 * *(valA11 + (tmpD6 << 2));
                float v_2c_2 = v_20 * *(valA11 + (tmpD6 << 2));
                long double x87_r6_9 = v_1c * *(valA11 + (tmpD6 << 2));
                int32_t objC4 = (*(int32_t*)(uintptr_t)(srcS[1] + (tmpD6 << 2)));
                tmpD6 += 1;
                float* valA14 = (*(int32_t*)(uintptr_t)(dstD[2] + (objC4 << 2)));
                float* objC5 = (*(int32_t*)(uintptr_t)(dstD[3] + (objC4 << 2)));
                float v_30_2 = x87_r7_7 + x87_r7_7;
                long double x87_r7_9 = v_2c_2;
                float v_18_1 = v_30_2;
                float v_c_1 = v_30_2;
                float v_2c_3 = x87_r7_9 + x87_r7_9;
                long double x87_r7_11 = x87_r6_9;
                float v_28_3 = x87_r7_11 + x87_r7_11;
                long double x87_r7_14 = v_30_2 * 0.5.0f;
                *valA14 = x87_r7_14 + *valA14;
                valA14[1] = v_2c_3 * 0.5.0f + valA14[1];
                valA14[2] = v_28_3 * 0.5.0f + valA14[2];
                result = result_1;
                *objC5 = x87_r7_14 + *objC5;
                objC5[1] = v_2c_3 * 0.5.0f + objC5[1];
                objC5[2] = v_28_3 * 0.5.0f + objC5[2];
            } while (tmpD6 < result);

            ctxB = a1;
            i = a2;
        }

        srcS = &srcS[3];
        i += 1;
        a2 = i;
    } while (i < 1);

    return result;
}
