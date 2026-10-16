#include "gi_platform.h"
#include "00503F20-PhysicsMagicObj_Setup.h"
void* PhysicsMagicObj_Setup(void* a1, float a2)

{
    int32_t* flagP = a2;
    float* valA = flagP[1];
    double v_40 = valA[2] * (*(int32_t*)(uintptr_t)(a1 + 0x730)) + valA[1] * (*(int32_t*)(uintptr_t)(a1 + 0x728)) + *valA * (*(int32_t*)(uintptr_t)(a1 + 0x720));
    double v_38 = valA[5] * (*(int32_t*)(uintptr_t)(a1 + 0x730)) + valA[4] * (*(int32_t*)(uintptr_t)(a1 + 0x728)) + valA[3] * (*(int32_t*)(uintptr_t)(a1 + 0x720));
    double* valA1 = *flagP;
    double v_30 = valA[8] * (*(int32_t*)(uintptr_t)(a1 + 0x730)) + valA[7] * (*(int32_t*)(uintptr_t)(a1 + 0x728)) + valA[6] * (*(int32_t*)(uintptr_t)(a1 + 0x720));
    long double x87_r7_12 = v_40;
    double v_18;
    memcpy(&v_18, &v_40, 0x18);
    v_18 = x87_r7_12 + *valA1;
    double v_10;
    double v_10_1 = v_10 + valA1[1];
    double v_8;
    double v_8_1 = v_8 + valA1[2];
    long double x87_r7_18 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_12 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r6_12 - x87_r7_18;
    long double x87_r7_19;

    if (!(*(&((x87_r6_12 < x87_r7_18 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_18) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_19 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_19 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_13 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_13 - x87_r7_19;
    long double x87_r7_21;

    if (*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_14 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_14 - x87_r7_22;

        if (!(*(&((x87_r6_14 < x87_r7_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_22 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_21 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_21 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_21 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    long double x87_r7_24 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_21;
    void* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x68));
    float v_54_1 = x87_r7_24;
    double* i_1 = &v_18;
    WorldObject_CommitTransform(tmpD, a1, i_1, v_54_1);
    float* valA4 = flagP[1];
    v_40 = (*(int32_t*)(uintptr_t)(a1 + 0x744)) * valA4[1] + *valA4 * (*(int32_t*)(uintptr_t)(a1 + 0x738)) + valA4[2] * (*(int32_t*)(uintptr_t)(a1 + 0x750));
    *(&v_40 + 4) =
        (*(int32_t*)(uintptr_t)(a1 + 0x748)) * valA4[1] + *valA4 * (*(int32_t*)(uintptr_t)(a1 + 0x73c)) + valA4[2] * (*(int32_t*)(uintptr_t)(a1 + 0x754));
    v_38 = (*(int32_t*)(uintptr_t)(a1 + 0x74c)) * valA4[1] + *valA4 * (*(int32_t*)(uintptr_t)(a1 + 0x740)) + valA4[2] * (*(int32_t*)(uintptr_t)(a1 + 0x758));
    *(&v_38 + 4) =
        (*(int32_t*)(uintptr_t)(a1 + 0x744)) * valA4[4] + valA4[5] * (*(int32_t*)(uintptr_t)(a1 + 0x750)) + valA4[3] * (*(int32_t*)(uintptr_t)(a1 + 0x738));
    v_30 = (*(int32_t*)(uintptr_t)(a1 + 0x748)) * valA4[4] + valA4[5] * (*(int32_t*)(uintptr_t)(a1 + 0x754)) + valA4[3] * (*(int32_t*)(uintptr_t)(a1 + 0x73c));
    *(&v_30 + 4) =
        (*(int32_t*)(uintptr_t)(a1 + 0x74c)) * valA4[4] + valA4[5] * (*(int32_t*)(uintptr_t)(a1 + 0x758)) + valA4[3] * (*(int32_t*)(uintptr_t)(a1 + 0x740));
    float v_28 =
        (*(int32_t*)(uintptr_t)(a1 + 0x744)) * valA4[7] + valA4[8] * (*(int32_t*)(uintptr_t)(a1 + 0x750)) + valA4[6] * (*(int32_t*)(uintptr_t)(a1 + 0x738));
    float v_24 =
        (*(int32_t*)(uintptr_t)(a1 + 0x748)) * valA4[7] + valA4[8] * (*(int32_t*)(uintptr_t)(a1 + 0x754)) + valA4[6] * (*(int32_t*)(uintptr_t)(a1 + 0x73c));
    void* result = a1 + 0x70;
    float v_20 =
        (*(int32_t*)(uintptr_t)(a1 + 0x74c)) * valA4[7] + valA4[8] * (*(int32_t*)(uintptr_t)(a1 + 0x758)) + valA4[6] * (*(int32_t*)(uintptr_t)(a1 + 0x740));
    int32_t v_1c = valA4[9] + (*(int32_t*)(uintptr_t)(a1 + 0x75c)) + 1;
    memcpy(result, &v_40, 0x28);
    double* i = (*(int32_t*)(uintptr_t)(a1 + 8));
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
                void* valA9;

                if (!tmpD2)
                    valA9 = nullptr;
                else
                {
                    int32_t valA6 = *tmpD2;
                    int32_t valA7 = -(valA6);
                    valA9 = (valA7 - valA7) & tmpD2;
                }

                *((objC1 << 2) + &g_afa6e0) = valA9;
                g_afa7e0 = objC1 + 1;
                uint32_t valA11 = MagicObj_GetEventId();
                int32_t objC3 = 0;
                objC3 = *(i + 0x1c);
                result = *(((valA11 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (result)
                {
                    double* v_54_2 = &v_40;
                    i_1 = i;
                    result = result(i_1, v_54_2);
                }

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
