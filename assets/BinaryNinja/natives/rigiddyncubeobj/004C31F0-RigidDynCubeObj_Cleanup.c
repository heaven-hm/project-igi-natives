#include "RigidDynCubeObj_Cleanup.h"
void* RigidDynCubeObj_Cleanup()

{
    float* flagP;
    float* v_4 = flagP;
    Camera_UpdateTransform_5(0x27144);
    void* result_1;
    void* result_2 = result_1;
    result_1 = 1;
    void* result = *(result_2 + 0x6c);

    if (result)
    {
        uint32_t valA1 = SoundSys_AttachLipsync_2();
        int32_t objC1 = 0;
        objC1 = *(result_2 + 0x1c);
        int32_t valA5 = *(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA5)
            valA5(result_2, &result_1);

        result = result_1;

        if (result)
        {
            int32_t* valA6 = *(result_2 + 0x20);
            int32_t tmpD1 = *(result_2 + 0x28);
            int32_t arg_c = *(result_2 + 0x24);
            int32_t arg_14 = *(result_2 + 0x2c);
            __return_addr = 2;
            int32_t* objC5 =
                *(*(*(*(*(result_2 + 0x6c) + (*(result_2 + 0xa4) << 2)) + 0xc) + 0xc) + 0x2c) + 4;
            int32_t* v_8_1 = objC5;
            bool cond_0_1;

            do
            {
                float* tmpD4 = *objC5;

                if (tmpD4 > 0)
                {
                    int32_t* objC6 = objC5[4];
                    void arg_40;
                    void* valA10 = &arg_40;
                    v_4 = tmpD4;
                    bool cond_1_1;

                    do
                    {
                        int32_t* tmpD5 = objC6;
                        objC6 = &objC6[4];
                        valA10 += 8;
                        long double x87_r7_2 = *tmpD5 * *(result_2 + 0x98);
                        long double x87_r6_2 = tmpD5[1] * *(result_2 + 0x9c);
                        long double x87_r5_2 = tmpD5[2] * *(result_2 + 0xa0);
                        cond_1_1 = v_4 != 1;
                        v_4 -= 1;
                        *(valA10 - 0xc) = x87_r5_2 * *(result_2 + 0x78)
                            + x87_r7_2 * *(result_2 + 0x70) + x87_r6_2 * *(result_2 + 0x74);
                        *(valA10 - 8) = x87_r5_2 * *(result_2 + 0x84)
                            + x87_r7_2 * *(result_2 + 0x7c) + x87_r6_2 * *(result_2 + 0x80);
                    } while (cond_1_1);
                    objC5 = v_8_1;
                }

                int32_t i = 0;

                if (objC5[-1] > 0)
                {
                    do
                    {
                        int32_t valA12 = objC5[3];
                        int32_t objC7 = 0;
                        objC7 = *(valA12 + (i << 3));
                        int32_t tmpD9 = 0;
                        tmpD9 = *(valA12 + (i << 3) + 2);
                        long double x87_r7_8 = valA6[1] * 0.5f / valA6[3];
                        int32_t tmpD11 = 0;
                        tmpD11 = *(valA12 + (i << 3) + 4);
                        double* valA14 = valA6[2];
                        int32_t saved_dst;
                        SoundSys_SetFrequency_3(*valA6,
                            ((&saved_dst)[objC7 * 2 + 0x14] + valA6 - *valA14 + valA6[3])
                                * x87_r7_8,
                            ((&saved_dst)[objC7 * 2 + 0x15] + tmpD1 - valA14[1] + valA6[3])
                            * x87_r7_8,
                            ((&saved_dst)[tmpD9 * 2 + 0x14] + valA6 - *valA14 + valA6[3])
                                * x87_r7_8,
                            ((&saved_dst)[tmpD9 * 2 + 0x15] + tmpD1 - valA14[1] + valA6[3])
                            * x87_r7_8,
                            ((&saved_dst)[tmpD11 * 2 + 0x14] + valA6 - *valA14 + valA6[3])
                                * x87_r7_8,
                            ((&saved_dst)[tmpD11 * 2 + 0x15] + tmpD1 - valA14[1] + valA6[3])
                            * x87_r7_8);
                        objC5 = v_8_1;
                        i += 1;
                    } while (i < objC5[-1]);
                }

                objC5 = &objC5[8];
                result = __return_addr - 1;
                cond_0_1 = __return_addr != 1;
                v_8_1 = objC5;
                __return_addr = result;
            } while (cond_0_1);
        }
    }

    return result;
}
