// Original IGI.EXE function: Light_UpdateGlobalLight_11 (VA 0x0052D6C0; static CFG gate PASS, CFG score 1.000).
#include "Light_UpdateGlobalLight_11.h"
void* Light_UpdateGlobalLight_11(int32_t a1)

{
    float v_14 = 0f;
    int32_t v_40 = 0;
    float v_10 = 0f;
    long double fpu7 = *(a1 + 0x4a9c);
    float v_c = 0f;
    long double f3 = 268435456.0;
    fpu7 - f3;
    double v_24;

    if (*(&((fpu7 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f3) ? 1 : 0) << 0xa
            | (fpu7 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        *(a1 + 0x4ab4) = 1;
    else
    {
        v_24 = fpu7 * 3.7252902984619141e-09;
        *(a1 + 0x4ab4) = v_24;
    }

    *(a1 + 0x3c) = 0;
    *(a1 + 0x10) = *(a1 + 0x4840);
    *(a1 + 0x14) = *(a1 + 0x4844);
    *(a1 + 0x18) = *(a1 + 0x4848);
    *(a1 + 0x1c) = *(a1 + 0x484c);
    int32_t valA4 = *(a1 + 0x4a9c) << 1;
    int32_t objC3 = 0;
    int32_t f2 = *(a1 + 0x4ab4);
    *(a1 + 0x38) = 0;
    *(a1 + 0x2c) = 0xffffffff;
    *(a1 + 0x24) = 0;
    int32_t v_44_1 = 0;
    *(a1 + 0x30) = COMBINE(0, valA4) / f2;
    int32_t valA6 = *(a1 + 0x4ab4);

    if (valA6 > 0)
    {
        void* v_48_1 = a1 + 0x48;

        do
        {
            int32_t i = 0;

            if (valA6 > 0)
            {
                void* objC4 = v_48_1;
                int32_t v_38_1 = 0;

                do
                {
                    *(objC4 + 0x24) = 0;
                    int32_t v_30_1 = 0;
                    uint32_t f0_1 = COMBINE(0, *(a1 + 0x4a9c)) / *(a1 + 0x4ab4);
                    int32_t v_28_1 = 0;
                    v_24 = i;
                    *(&v_24 + 4) = 0;
                    objC4 += 0x30;
                    *(objC4 - 0x38) = f0_1 * objC3 + *(a1 + 0x4840);
                    *(objC4 - 0x30) = (COMBINE(0, *(a1 + 0x4a9c)) / *(a1 + 0x4ab4)) * v_24
                        + *(a1 + 0x4848);
                    int32_t valA11 = *(a1 + 0x4a9c);
                    int32_t f2_3 = *(a1 + 0x4ab4);
                    *(objC4 - 0x10) = 0;
                    *(objC4 - 0x1c) = 0;
                    *(objC4 - 0x24) = 0;
                    i += 1;
                    *(objC4 - 0x18) = COMBINE(0, valA11) / f2_3;
                } while (i < *(a1 + 0x4ab4));

                objC3 = v_44_1;
            }

            valA6 = *(a1 + 0x4ab4);
            objC3 += 1;
            v_44_1 = objC3;
            v_48_1 += 0x180;
        } while (objC3 < valA6);
    }

    long double x87_r7_6 = *(a1 + 0x4a84) * 0.100000001f;
    *(a1 + 0x4aa8) = 0;
    *(a1 + 0x4ab8) = 0;
    *(a1 + 0x4a88) = x87_r7_6;
    Light_CalculateAttenuation_11(a1);
    int32_t valA14 = *(a1 + 0x4890);
    int32_t objC5 = *(a1 + 0x4894);
    *(a1 + 0x48a0) = -(*(a1 + 0x4888));
    *(a1 + 0x4898) = valA14;
    *(a1 + 0x489c) = objC5;
    Sys_ReadFileBlock_10(a1 + 0x4898);
    v_24 = 0;
    *(&v_24 + 4) = 0x3ff00000;
    int32_t v_1c = 0;
    int32_t v_18 = 0;
    long double fp0 = Sys_ExecuteBytecode_10(a1 + 0x4898, &v_24);
    v_24 = fp0 * *(a1 + 0x4898);
    v_1c = fp0 * *(a1 + 0x48a0);
    *(a1 + 0x48a8) = Sys_CloseFileStream_10(&v_24);
    v_24 = 0;
    *(&v_24 + 4) = 0;
    int32_t v_1c_1 = 0;
    int32_t v_18_1 = 0x3ff00000;
    long double fp0_2 = Sys_ExecuteBytecode_10(a1 + 0x4898, &v_24);
    v_24 = fp0_2 * *(a1 + 0x4898);
    v_1c_1 = fp0_2 * *(a1 + 0x48a0);
    void* result;
    int80_t fp0_3;
    fp0_3 = Sys_CloseFileStream_10(&v_24);
    *(a1 + 0x48b0) = fp0_3;
    *(a1 + 0x4a98) = *(a1 + 0x4a80) / *(a1 + 0x4a84);
    int32_t i_2 = g_b041e8;
    long double x87_r7_17;

    if (i_2 <= 0)
        x87_r7_17 = v_14;
    else
    {
        x87_r7_17 = v_14;
        long double x87_r6_11 = v_10;
        int32_t* objC6 = g_b041e4;
        long double x87_r5_2 = v_c;
        int32_t i_1;

        do
        {
            result = g_b041f0 * *objC6 + g_b041e0;
            objC6 = &objC6[1];
            i_1 = i_2;
            i_2 -= 1;
            x87_r7_17 = x87_r7_17 + *(result + 0xc);
            x87_r6_11 = x87_r6_11 + *(result + 0x10);
            x87_r5_2 = x87_r5_2 + *(result + 0x14);
        } while (i_1 != 1);
        v_c = x87_r5_2;
        v_10 = x87_r6_11;
    }

    long double x87_r7_19 = x87_r7_17 + *(a1 + 0x4a54);
    *(a1 + 0x4ac8) = 0;
    *(a1 + 0x4ac4) = 0;
    *(a1 + 0x4ac0) = 0;
    *(a1 + 0x4a6c) = x87_r7_19;
    *(a1 + 0x4a70) = v_10 + *(a1 + 0x4a58);
    *(a1 + 0x4a74) = v_c + *(a1 + 0x4a5c);
    return result;
}
