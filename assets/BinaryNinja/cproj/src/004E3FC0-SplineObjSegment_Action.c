#include "gi_platform.h"
#include "004E3FC0-SplineObjSegment_Action.h"
void* SplineObjSegment_Action(float a1, int32_t* a2)

{
    float dstD = a1;
    void* result_2 = 1;
    void* result = (*(int32_t*)(uintptr_t)(dstD + 0x6c));

    if (result)
    {
        uint32_t valA1 = SoundSys_AttachLipsync_2();
        int32_t objC1 = 0;
        objC1 = (*(int32_t*)(uintptr_t)(dstD + 0x1c));
        int32_t valA5 = *(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA5)
            valA5(dstD, &result_2);

        result = result_2;

        if (result)
        {
            int32_t valA6 = (*(int32_t*)(uintptr_t)(dstD + 0x20));
            int32_t tmpD1 = (*(int32_t*)(uintptr_t)(dstD + 0x28));
            int32_t v_14_1 = (*(int32_t*)(uintptr_t)(dstD + 0x24));
            int32_t v_c_1 = (*(int32_t*)(uintptr_t)(dstD + 0x2c));
            void* result_1 = nullptr;
            int32_t* v_40_1 = (*(int32_t*)(uintptr_t)(*(*(*(*(dstD + 0x6c) + (*(dstD + 0xa4) << 2)) + 0xc) + 0xc) + 0x2c));

            while (true)
            {
                int32_t v_58_2 = 0;
                int32_t v_5c_1 = 1;
                void* valA11 = Display_SetDisplayMode_18(dstD, (*(int32_t*)(uintptr_t)(dstD + 0xa4)), result_1, nullptr);
                int32_t i = 0;

                if (*v_40_1 > 0)
                {
                    do
                    {
                        int32_t objC6 = v_40_1[4];
                        int32_t valA13 = 0;
                        valA13 = *(objC6 + (i << 3));
                        long double x87_r7_3 = a2[1] * 0.5.0f / a2[3];
                        void* objC7 = objC6 + (i << 3);
                        int32_t valA14 = 0;
                        valA14 = *(objC7 + 2);
                        float* tmpD6 = valA11 + valA13 * 0xc;
                        float* valA16 = valA11 + valA14 * 0xc;
                        int32_t valA17 = 0;
                        valA17 = *(objC7 + 4);
                        double* valA18 = a2[2];
                        float* objC9 = valA11 + valA17 * 0xc;
                        SoundSys_SetFrequency_3(*a2, (*tmpD6 + valA6 - *valA18 + a2[3]) * x87_r7_3,
                            (tmpD6[1] + tmpD1 - valA18[1] + a2[3]) * x87_r7_3,
                            (*valA16 + valA6 - *valA18 + a2[3]) * x87_r7_3,
                            (valA16[1] + tmpD1 - valA18[1] + a2[3]) * x87_r7_3,
                            (*objC9 + valA6 - *valA18 + a2[3]) * x87_r7_3,
                            (objC9[1] + tmpD1 - valA18[1] + a2[3]) * x87_r7_3);
                        i += 1;
                    } while (i < *v_40_1);
                }

                result = result_1 + 1;
                result_1 = result;
                v_40_1 = &v_40_1[8];

                if (result >= 2)
                    break;

                dstD = a1;
            }
        }
    }

    return result;
}
