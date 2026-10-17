// Original IGI.EXE function: FX_SmokeEmit_3 (VA 0x00482D70; static CFG gate FAIL, CFG score 0.758).
#include "FX_SmokeEmit_3.h"
float FX_SmokeEmit_3(void* context) {
    long double fpu7 = *(context + 0x110);
    long double f0 = 0.0f;
    fpu7 - f0;
    int32_t item_c4;
    float result;
    double item_40;
    double item_38;
    double item_18;
    float item_9c;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        Sys_ReadFileBlock_12(&item_c4, *(context + 0x108), 0.0f, *(context + 0x10c));
        long double fpu_val_7_2 = -(*(context + 0x110));
        float item_c0;
        double item_70 = item_c0 * fpu_val_7_2;
        float item_b4;
        double item_68 = item_b4 * fpu_val_7_2;
        float item_a8;
        long double fpu_val_7_3 = fpu_val_7_2 * item_a8;
        item_40 = *(context + 0xbc) * fpu_val_7_3 + *(context + 0xb8) * item_68 + *(context + 0xb4) * item_70;
        item_38 = *(context + 0xc8) * fpu_val_7_3 + *(context + 0xc4) * item_68 + *(context + 0xc0) * item_70;
        long double fpu_val_7_5 = fpu_val_7_3 * *(context + 0xd4) + *(context + 0xd0) * item_68;
        long double fpu_val_6_16 = *(context + 0xcc) * item_70;
        memcpy(&item_70, context + 0x70, 0x18);
        int32_t temp_2 = item_70;
        int32_t item_58;
        memcpy(&item_58, context + 0xf0, 0x18);
        double item_60;
        double item_48;
        double item_48_1 = item_60 * 0.050000000000000003 + item_48 * 0.94999999999999996;
        long double fpu_val_6_21 = item_70 + item_40;
        int32_t entity_1 = *(&item_70 + 4);
        item_58 = temp_2;
        item_18 = fpu_val_6_21;
        int32_t item_54_1 = entity_1;
        int32_t item_50_1 = item_68;
        int32_t item_4c_1 = *(&item_68 + 4);
        double item_10_1 = item_68 + item_38;
        memcpy(context + 0xf0, &item_58, 0x18);
        double item_8_1 = item_48_1 + fpu_val_7_5 + fpu_val_6_16;
        FX_DebrisSpawn_3(&item_9c, &item_18, &item_58);
        long double fp0_1;
        bool c1_1;
        bool c2_1;
        fp0_1 = __fptan(0.78539818525314331);
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        result = /* result = unimplemented  {fstp dword [stack_ptr+0x5c], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x5c], fp0} */
    }
    else
    {
        memcpy(&item_18, context + 0x70, 0x18);
        memcpy(&item_9c, context + 0x88, 0x28);
        result = *(context + 0xb0);
        memcpy(context + 0xf0, context + 0x70, 0x18);
    }
    Sys_CloseFileStream_12(&item_c4, -1.57079637f);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x44]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    item_40 = /* item_40.d = unimplemented  {fstp dword [stack_ptr+0x90], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x90], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x3c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    *(&item_40 + 4) = /* item_40:4.d = unimplemented  {fstp dword [stack_ptr+0x94], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x94], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x3c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    item_38 = /* item_38.d = unimplemented  {fstp dword [stack_ptr+0x98], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x98], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x48]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x44]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x18]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    *(&item_38 + 4) = /* item_38:4.d = unimplemented  {fstp dword [stack_ptr+0x9c], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x9c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x48]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x44]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_30 = /* float item_30 = unimplemented  {fstp dword [stack_ptr+0xa0], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xa0], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x48]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x44]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_2c = /* float item_2c = unimplemented  {fstp dword [stack_ptr+0xa4], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xa4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x18]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x4c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_28 = /* float item_28 = unimplemented  {fstp dword [stack_ptr+0xa8], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xa8], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x4c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
    int32_t item_a0;
    int32_t item_78;
    int32_t item_1c = item_a0 + item_78 + 1;
🚫🚫🚫    float item_24 = /* float item_24 = unimplemented  {fstp dword [stack_ptr+0xac], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xac], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
    memcpy(context + 0x20, &item_18, 0x18);
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x4c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_20 = /* float item_20 = unimplemented  {fstp dword [stack_ptr+0xb0], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xb0], fp0} */
    *(context + 0x60) = result;
    memcpy(context + 0x38, &item_40, 0x28);
    return result;
}
