// Original IGI.EXE function: FX_SmokeEmit_3 (VA 0x00482D70; static CFG gate FAIL, CFG score 0.758).
#include "FX_SmokeEmit_3.h"
float FX_SmokeEmit_3(void* a1) __location("valA")

{
    long double fpu7 = *(a1 + 0x110);
    long double f0 = 0f;
    fpu7 - f0;
    int32_t v_c4;
    float result;
    double v_40;
    double v_38;
    double v_18;
    float v_9c;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        Sys_ReadFileBlock_12(&v_c4, *(a1 + 0x108), 0f, *(a1 + 0x10c));
        long double x87_r7_2 = -(*(a1 + 0x110));
        float v_c0;
        double v_70 = v_c0 * x87_r7_2;
        float v_b4;
        double v_68 = v_b4 * x87_r7_2;
        float v_a8;
        long double x87_r7_3 = x87_r7_2 * v_a8;
        v_40 = *(a1 + 0xbc) * x87_r7_3 + *(a1 + 0xb8) * v_68 + *(a1 + 0xb4) * v_70;
        v_38 = *(a1 + 0xc8) * x87_r7_3 + *(a1 + 0xc4) * v_68 + *(a1 + 0xc0) * v_70;
        long double x87_r7_5 = x87_r7_3 * *(a1 + 0xd4) + *(a1 + 0xd0) * v_68;
        long double x87_r6_16 = *(a1 + 0xcc) * v_70;
        memcpy(&v_70, a1 + 0x70, 0x18);
        int32_t tmpD2 = v_70;
        int32_t v_58;
        memcpy(&v_58, a1 + 0xf0, 0x18);
        double v_60;
        double v_48;
        double v_48_1 = v_60 * 0.050000000000000003 + v_48 * 0.94999999999999996;
        long double x87_r6_21 = v_70 + v_40;
        int32_t objC1 = *(&v_70 + 4);
        v_58 = tmpD2;
        v_18 = x87_r6_21;
        int32_t v_54_1 = objC1;
        int32_t v_50_1 = v_68;
        int32_t v_4c_1 = *(&v_68 + 4);
        double v_10_1 = v_68 + v_38;
        memcpy(a1 + 0xf0, &v_58, 0x18);
        double v_8_1 = v_48_1 + x87_r7_5 + x87_r6_16;
        FX_DebrisSpawn_3(&v_9c, &v_18, &v_58);
        long double fp0_1;
        bool c1_1;
        bool c2_1;
        fp0_1 = __fptan(0.78539818525314331);
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        result = /* result = unimplemented  {fstp dword [esp+0x5c], fp0} */;
        /* unimplemented  {fstp dword [esp+0x5c], fp0} */
    }
    else
    {
        memcpy(&v_18, a1 + 0x70, 0x18);
        memcpy(&v_9c, a1 + 0x88, 0x28);
        result = *(a1 + 0xb0);
        memcpy(a1 + 0xf0, a1 + 0x70, 0x18);
    }
    Sys_CloseFileStream_12(&v_c4, -1.57079637f);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    v_40 = /* v_40.d = unimplemented  {fstp dword [esp+0x90], fp0} */;
    /* unimplemented  {fstp dword [esp+0x90], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    *(&v_40 + 4) = /* v_40:4.d = unimplemented  {fstp dword [esp+0x94], fp0} */;
    /* unimplemented  {fstp dword [esp+0x94], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    v_38 = /* v_38.d = unimplemented  {fstp dword [esp+0x98], fp0} */;
    /* unimplemented  {fstp dword [esp+0x98], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x18]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    *(&v_38 + 4) = /* v_38:4.d = unimplemented  {fstp dword [esp+0x9c], fp0} */;
    /* unimplemented  {fstp dword [esp+0x9c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_30 = /* float v_30 = unimplemented  {fstp dword [esp+0xa0], fp0} */;
    /* unimplemented  {fstp dword [esp+0xa0], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_2c = /* float v_2c = unimplemented  {fstp dword [esp+0xa4], fp0} */;
    /* unimplemented  {fstp dword [esp+0xa4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x18]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x4c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_28 = /* float v_28 = unimplemented  {fstp dword [esp+0xa8], fp0} */;
    /* unimplemented  {fstp dword [esp+0xa8], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x4c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
    int32_t v_a0;
    int32_t v_78;
    int32_t v_1c = v_a0 + v_78 + 1;
🚫🚫🚫    float v_24 = /* float v_24 = unimplemented  {fstp dword [esp+0xac], fp0} */;
    /* unimplemented  {fstp dword [esp+0xac], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x20]} */
    memcpy(a1 + 0x20, &v_18, 0x18);
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x4c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_20 = /* float v_20 = unimplemented  {fstp dword [esp+0xb0], fp0} */;
    /* unimplemented  {fstp dword [esp+0xb0], fp0} */
    *(a1 + 0x60) = result;
    memcpy(a1 + 0x38, &v_40, 0x28);
    return result;
}
