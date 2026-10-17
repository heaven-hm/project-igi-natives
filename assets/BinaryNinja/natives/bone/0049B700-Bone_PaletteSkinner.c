// Original IGI.EXE function: Bone_PaletteSkinner (VA 0x0049B700; static CFG gate PASS, CFG score 1.000).
#include "Bone_PaletteSkinner.h"
int32_t Bone_PaletteSkinner(void* a1, int32_t a2, float a3, int32_t a4)

{
    void* srcS = a1;
    int32_t __saved_ebp_1 = *(srcS + 0x10);

    if (__saved_ebp_1 <= 0xfa0)
    {
        int32_t* valA3 = g_bcad90;
        int32_t result;

        if (__saved_ebp_1 + g_bcad98 > g_bcad94)
        {
            int32_t valA5 = (*(*valA3 + 0xc))(valA3, 0x2020, &a1, 0);
            result = 0;
            a2 = 0;
            g_bcad98 = *(srcS + 0x10);

            if (!valA5)
            {
            label_49b7ae:
                void* tmpD5 = a1;

                if (tmpD5)
                {
                    int32_t i_6 = *(srcS + 0x10);
                    float* valA7 = *(srcS + 0x18);

                    if (!a4)
                    {
                        if (i_6 > 0)
                        {
                            float* tmpD6 = tmpD5 + 8;
                            int32_t i_4 = i_6;
                            int32_t i;

                            do
                            {
                                int32_t objC5 = 0;
                                objC5 = *(valA7 + 0x26);
                                long double x87_r7_1 = valA7[8];
                                int32_t flagP3 = objC5 * 0x21;
                                int32_t objC6 = *(a3 + 8);
                                void* objC7 = objC6 + (flagP3 << 2);
                                long double x87_r6_4 = *valA7 * *(objC6 + (flagP3 << 2) + 0x24)
                                    + valA7[2] * *(objC6 + (flagP3 << 2) + 0x2c)
                                    + valA7[1] * *(objC7 + 0x28);
                                float v_18_1 = x87_r6_4;
                                float v_24_1 = v_18_1;
                                float v_20_2 = *valA7 * *(objC7 + 0x30)
                                    + valA7[2] * *(objC7 + 0x38) + valA7[1] * *(objC7 + 0x34)
                                    + *(objC7 + 0x1c);
                                float v_1c_2 = valA7[2] * *(objC7 + 0x44)
                                    + *(objC7 + 0x40) * valA7[1] + *(objC7 + 0x3c) * *valA7
                                    + *(objC7 + 0x20);
                                tmpD6[-2] = (v_18_1 + *(objC7 + 0x18)) * x87_r7_1;
                                tmpD6[-1] = v_20_2 * x87_r7_1;
                                *tmpD6 = v_1c_2 * x87_r7_1;
                                tmpD6[4] = valA7[6];
                                tmpD6[5] = valA7[7];
                                long double x87_r7_6 = *(objC7 + 0x28) * valA7[4]
                                    + *(objC7 + 0x2c) * valA7[5] + valA7[3] * *(objC7 + 0x24);
                                long double x87_r7_10 = valA7[5] * *(objC7 + 0x38)
                                    + valA7[4] * *(objC7 + 0x34) + valA7[3] * *(objC7 + 0x30);
                                long double x87_r7_12 = *(objC7 + 0x3c) * valA7[3];
                                long double x87_r6_29 = *(objC7 + 0x44) * valA7[5];
                                valA7 = &valA7[0xa];
                                int32_t* objC8 = &tmpD6[1];
                                tmpD6 = &tmpD6[8];
                                i = i_4;
                                i_4 -= 1;
                                long double x87_r7_14 =
                                    x87_r7_12 + x87_r6_29 + *(objC7 + 0x40) * valA7[-6];
                                *objC8 = x87_r7_6;
                                objC8[1] = x87_r7_10;
                                objC8[2] = x87_r7_14;
                            } while (i != 1);
                            result = a2;
                        }

                        int32_t i_3 = *(srcS + 0xc);
                        void* valA10 = *(srcS + 0x18) + *(srcS + 0x10) * 0x28;

                        if (i_3 > 0)
                        {
                            int32_t i_1;

                            do
                            {
                                int32_t objC10 = 0;
                                objC10 = *(valA10 + 0x26);
                                valA10 += 0x28;
                                int32_t srcS3 = objC10 * 0x21;
                                int32_t objC11 = *(a3 + 8);
                                void* objC12 = objC11 + (srcS3 << 2);
                                long double x87_r7_18 =
                                    *(objC11 + (srcS3 << 2) + 0x2c) * *(valA10 - 0x20)
                                    + *(objC11 + (srcS3 << 2) + 0x28) * *(valA10 - 0x24)
                                    + *(objC12 + 0x24) * *(valA10 - 0x28);
                                float v_18_2 = x87_r7_18;
                                float v_24_2 = v_18_2;
                                long double x87_r7_22 = *(objC12 + 0x38) * *(valA10 - 0x20)
                                    + *(objC12 + 0x34) * *(valA10 - 0x24)
                                    + *(objC12 + 0x30) * *(valA10 - 0x28);
                                long double x87_r7_26 = *(objC12 + 0x44) * *(valA10 - 0x20)
                                    + *(objC12 + 0x40) * *(valA10 - 0x24)
                                    + *(objC12 + 0x3c) * *(valA10 - 0x28);
                                float v_20_4 = x87_r7_22 + *(objC12 + 0x1c);
                                float objC13 = *(valA10 - 8);
                                int32_t objC14 = 0;
                                objC14 = *(valA10 - 4);
                                float v_1c_4 = x87_r7_26 + *(objC12 + 0x20);
                                float* objC16 = (objC14 << 5) + a1;
                                i_1 = i_3;
                                i_3 -= 1;
                                *objC16 = objC13 * (v_18_2 + *(objC12 + 0x18)) + *objC16;
                                objC16[1] = objC13 * v_20_4 + objC16[1];
                                objC16[2] = objC13 * v_1c_4 + objC16[2];
                            } while (i_1 != 1);
                            int32_t* valA11 = g_bcad90;
                            (*(*valA11 + 0x10))(valA11);
                            return result;
                        }
                    }
                    else if (i_6 > 0)
                    {
                        float* tmpD8 = tmpD5 + 8;
                        int32_t i_5 = i_6;
                        int32_t i_2;

                        do
                        {
                            int32_t objC17 = 0;
                            objC17 = *(valA7 + 0x26);
                            int32_t flagP15 = objC17 * 0x21;
                            int32_t objC18 = *(a3 + 8);
                            void* objC19 = objC18 + (flagP15 << 2);
                            long double x87_r7_39 = *valA7 * *(objC18 + (flagP15 << 2) + 0x24)
                                + valA7[2] * *(objC18 + (flagP15 << 2) + 0x2c)
                                + valA7[1] * *(objC19 + 0x28);
                            long double x87_r6_58 = *valA7 * *(objC19 + 0x30)
                                + valA7[2] * *(objC19 + 0x38) + valA7[1] * *(objC19 + 0x34);
                            long double x87_r6_62 = valA7[2] * *(objC19 + 0x44)
                                + *(objC19 + 0x40) * valA7[1] + *(objC19 + 0x3c) * *valA7;
                            tmpD8[-2] = x87_r7_39 + *(objC19 + 0x18);
                            tmpD8[-1] = x87_r6_58 + *(objC19 + 0x1c);
                            *tmpD8 = x87_r6_62 + *(objC19 + 0x20);
                            long double x87_r7_48 = *(objC19 + 0x28) * valA7[4]
                                + *(objC19 + 0x2c) * valA7[5] + valA7[3] * *(objC19 + 0x24);
                            long double x87_r7_52 = valA7[5] * *(objC19 + 0x38)
                                + valA7[4] * *(objC19 + 0x34) + valA7[3] * *(objC19 + 0x30);
                            long double x87_r7_55 =
                                *(objC19 + 0x3c) * valA7[3] + *(objC19 + 0x44) * valA7[5];
                            long double x87_r6_74 = *(objC19 + 0x40) * valA7[4];
                            int32_t* objC20 = &tmpD8[1];
                            tmpD8 = &tmpD8[8];
                            valA7 = &valA7[0xa];
                            *objC20 = x87_r7_48;
                            objC20[1] = x87_r7_52;
                            objC20[2] = x87_r7_55 + x87_r6_74;
                            tmpD8[-4] = valA7[-4];
                            tmpD8[-3] = valA7[-3];
                            i_2 = i_5;
                            i_5 -= 1;
                        } while (i_2 != 1);
                    }

                    int32_t* valA13 = g_bcad90;
                    (*(*valA13 + 0x10))(valA13);
                }
            }
        }
        else
        {
            int32_t valA4 = (*(*valA3 + 0xc))(valA3, 0x1020, &a1, 0);
            int32_t result_1 = g_bcad98;
            result = result_1;
            int32_t objC2 = result_1 + *(srcS + 0x10);
            a2 = result;
            a1 += result_1 << 5;
            g_bcad98 = objC2;

            if (!valA4)
                goto label_49b7ae;
        }

        return result;
    }

    int32_t saved_frame = __saved_ebp_1;
    int32_t v_38 = a2 + 0x14;
    Error_Show("Bone model too large. Model %s has %d vertices.");

    while (true)
        /* nop */
}
