#include "gi_platform.h"
#include "005319B0-BoneMagicObj_Process.h"
void* BoneMagicObj_Process(void* a1, int32_t* a2)

{
    float* valA = a2[1];
    void* tmpD = g_a44344;
    double v_40 = valA[2] * (*(int32_t*)(uintptr_t)(a1 + 0xe8)) + valA[1] * (*(int32_t*)(uintptr_t)(a1 + 0xe0)) + *valA * (*(int32_t*)(uintptr_t)(a1 + 0xd8));
    double v_38 = valA[5] * (*(int32_t*)(uintptr_t)(a1 + 0xe8)) + valA[4] * (*(int32_t*)(uintptr_t)(a1 + 0xe0)) + valA[3] * (*(int32_t*)(uintptr_t)(a1 + 0xd8));
    double* valA1 = *a2;
    double v_30 = valA[8] * (*(int32_t*)(uintptr_t)(a1 + 0xe8)) + valA[7] * (*(int32_t*)(uintptr_t)(a1 + 0xe0)) + valA[6] * (*(int32_t*)(uintptr_t)(a1 + 0xd8));
    long double x87_r7_12 = v_40;
    double v_18;
    memcpy(&v_18, &v_40, 0x18);
    long double x87_r7_13 = x87_r7_12 + *valA1;
    v_18 = x87_r7_13;
    double v_10;
    double v_10_1 = v_10 + valA1[1];
    double v_8;
    long double x87_r6_15 = v_8 + valA1[2];
    float valA2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    long double x87_r5_1 = (*(int32_t*)(uintptr_t)(a1 + 0x120)) + x87_r7_13;
    double* i_1 = &v_18;
    v_18 = x87_r5_1;
    double v_10_2 = (*(int32_t*)(uintptr_t)(a1 + 0x124)) + v_10_1;
    double v_8_1 = (*(int32_t*)(uintptr_t)(a1 + 0x128)) + x87_r6_15;
    WorldObject_CommitTransform(tmpD, a1, i_1, valA2);
    float* valA3 = a2[1];
    v_40 = (*(int32_t*)(uintptr_t)(a1 + 0x108)) * valA3[2] + (*(int32_t*)(uintptr_t)(a1 + 0xf0)) * *valA3 + (*(int32_t*)(uintptr_t)(a1 + 0xfc)) * valA3[1];
    int32_t objC = (*(int32_t*)(uintptr_t)(a1 + 0x114));
    *(&v_40 + 4) =
        (*(int32_t*)(uintptr_t)(a1 + 0x10c)) * valA3[2] + (*(int32_t*)(uintptr_t)(a1 + 0xf4)) * *valA3 + (*(int32_t*)(uintptr_t)(a1 + 0x100)) * valA3[1];
    v_38 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) * valA3[2] + (*(int32_t*)(uintptr_t)(a1 + 0xf8)) * *valA3 + (*(int32_t*)(uintptr_t)(a1 + 0x104)) * valA3[1];
    *(&v_38 + 4) =
        (*(int32_t*)(uintptr_t)(a1 + 0xfc)) * valA3[4] + valA3[5] * (*(int32_t*)(uintptr_t)(a1 + 0x108)) + valA3[3] * (*(int32_t*)(uintptr_t)(a1 + 0xf0));
    v_30 = (*(int32_t*)(uintptr_t)(a1 + 0x100)) * valA3[4] + valA3[5] * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + valA3[3] * (*(int32_t*)(uintptr_t)(a1 + 0xf4));
    *(&v_30 + 4) =
        (*(int32_t*)(uintptr_t)(a1 + 0x104)) * valA3[4] + valA3[5] * (*(int32_t*)(uintptr_t)(a1 + 0x110)) + valA3[3] * (*(int32_t*)(uintptr_t)(a1 + 0xf8));
    float v_28 =
        (*(int32_t*)(uintptr_t)(a1 + 0xfc)) * valA3[7] + valA3[8] * (*(int32_t*)(uintptr_t)(a1 + 0x108)) + valA3[6] * (*(int32_t*)(uintptr_t)(a1 + 0xf0));
    float v_24 =
        (*(int32_t*)(uintptr_t)(a1 + 0x100)) * valA3[7] + valA3[8] * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + valA3[6] * (*(int32_t*)(uintptr_t)(a1 + 0xf4));
    int32_t v_1c = valA3[9] + objC + 1;
    float v_20 =
        (*(int32_t*)(uintptr_t)(a1 + 0x104)) * valA3[7] + valA3[8] * (*(int32_t*)(uintptr_t)(a1 + 0x110)) + valA3[6] * (*(int32_t*)(uintptr_t)(a1 + 0xf8));
    void* result = a1 + 0x78;
    memcpy(result, &v_40, 0x28);
    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));
    void* result_1 = *i;

    if (result_1 && i)
    {
        *(&v_40 + 4) = result;
        result = result_1;
        v_40 = a1 + 0x20;

        if (result && i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD2 = *i;
                void* valA8;

                if (!tmpD2)
                    valA8 = nullptr;
                else
                {
                    int32_t valA5 = *tmpD2;
                    int32_t valA6 = -(valA5);
                    valA8 = (valA6 - valA6) & tmpD2;
                }

                *((objC1 << 2) + &g_afa6e0) = valA8;
                g_afa7e0 = objC1 + 1;
                uint32_t valA10 = MagicObj_GetEventId();
                int32_t objC3 = 0;
                objC3 = i[7];
                result = *(((valA10 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (result)
                {
                    double* v_54_1 = &v_40;
                    i_1 = i;
                    result = result(i_1, v_54_1);
                }

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
