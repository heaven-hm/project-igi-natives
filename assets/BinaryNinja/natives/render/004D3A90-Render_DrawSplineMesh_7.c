// Original IGI.EXE function: Render_DrawSplineMesh_7 (VA 0x004D3A90; static CFG gate PASS, CFG score 0.867).
#include "Render_DrawSplineMesh_7.h"
int32_t Render_DrawSplineMesh_7(float* context, float param_2, float* param_3, float param_4, float param_5)

{
    float context_val = param_4;
    float temp_val = *(context_val + 0x80);
    float item_38 = temp_val;
    *(context_val + 4) &= 0xfff9ffff;

    if (!temp_val)
    {
        item_38 = param_5;
        temp_val = param_5;
    }

    float item_24 = context[5] * *(context_val + 0x10) + context[3] * *(context_val + 8) + context[4] * *(context_val + 0xc);
    long double fpu_val_6_11 = context[8] * *(context_val + 0x10) + context[6] * *(context_val + 8) + context[7] * *(context_val + 0xc);
    float item_20 = fpu_val_6_11;
    *(context_val + 0x18) = context[2] * *(context_val + 0x10) + context[1] * *(context_val + 0xc) + *(context_val + 8) * *context + *param_3;
    float item_28;
    int32_t* item_50 = &item_28;
    *(context_val + 0x1c) = item_24 + param_3[1];
    *(context_val + 0x20) = item_20 + param_3[2];
    float data_4 = Render_DrawLightmapMesh_7(fpu_val_6_11, context_val, temp_val);

    if (data_4 == 0xffffffff)
    {
        int32_t source_1 = *(context_val + 4);
        int32_t* item_50_1 = &item_28;
        long double fpu4;
        data_4 = Render_DrawLightmapMesh_7(fpu4, context_val, param_5);
        *(context_val + 4) = source_1;
    }

    int32_t entity_4;
    int32_t item_18;

    if (data_4)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [data_val]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x4]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float item_10_1 = /* float item_10_1 = unimplemented  {fstp dword [stack_ptr+0x38], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x38], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x8]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float item_c_1 = /* float item_c_1 = unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0xc]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x3c]} */
🚫🚫        /* unimplemented  {fadd fp0, fp2} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x24]} */
        int32_t data_7 = *(param_2 + 0x10);
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫        param_3 = /* param_3 = unimplemented  {fstp dword [stack_ptr+0x54], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x54], fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x38]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫        param_4 = /* param_4 = unimplemented  {fstp dword [stack_ptr+0x58], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x58], fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x38]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x58]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x54]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x3c]} */
🚫🚫        /* unimplemented  {fsub fp0, fp4} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd fp0, fp1} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫        param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x50], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x50], fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp2} */
🚫🚫        /* unimplemented  {fadd fp0, fp4} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x2c]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x50]} */
🚫🚫🚫        /* unimplemented  {fsubrp fp1, fp0} */
        /* unimplemented  {fsubrp fp1, fp0} */
🚫🚫        context = /* context = unimplemented  {fst dword [stack_ptr+0x4c], fp0} */;
🚫🚫🚫        *(context_val + 0x60) =
        /* unimplemented  {fstp dword [context_val+0x60], fp0} */
🚫🚫🚫🚫        /* unimplemented  {fxch fp0, fp1} */
        /* unimplemented  {fxch fp0, fp1} */
🚫🚫🚫        /* unimplemented  {fsubrp fp2, fp0} */
        /* unimplemented  {fsubrp fp2, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp2, fp0} */
        /* unimplemented  {fmulp fp2, fp0} */
🚫🚫🚫🚫        /* unimplemented  {fxch fp0, fp1} */
        /* unimplemented  {fxch fp0, fp1} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x50]} */
🚫🚫        /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫🚫        /* unimplemented  {fxch fp0, fp1} */
        /* unimplemented  {fxch fp0, fp1} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        *(context_val + 0x64) =
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x3c]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x38]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x20]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x50]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x58]} */
🚫🚫🚫        param_4 = /* param_4 = unimplemented  {fstp dword [stack_ptr+0x58], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x58], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x3c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x38]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
        *(context_val + 0x68) = param_4;
        entity_4 = item_18;
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x50]} */
        *(context_val + 0x70) = data_7 + entity_4 + 1;
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x54]} */
🚫🚫        *(context_val + 0x6c) =

        if (data_7 + entity_4 + 1 <= 0x3e8)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, fp0} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x58]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [stack_ptr+0x58]} */
            *(context_val + 0x70) = 0;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, fp2} */
🚫🚫            /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x4c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [stack_ptr+0x4c]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fsqrt } */
🚫🚫            /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x4c]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            *(context_val + 0x60) =
            /* unimplemented  {fstp dword [context_val+0x60], fp0} */
🚫🚫🚫🚫            /* unimplemented  {fxch fp0, fp2} */
            /* unimplemented  {fxch fp0, fp2} */
🚫🚫            /* unimplemented  {fmul fp0, fp2} */
🚫🚫🚫            *(context_val + 0x64) =
            /* unimplemented  {fstp dword [context_val+0x64], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x58]} */
🚫🚫            /* unimplemented  {fmul fp0, fp2} */
🚫🚫🚫            *(context_val + 0x68) =
            /* unimplemented  {fstp dword [context_val+0x68], fp0} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            *(context_val + 0x6c) =
            /* unimplemented  {fstp dword [context_val+0x6c], fp0} */
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
        }
    }
    else
    {
        float data_5 = param_2;
        memcpy(context_val + 0x60, &item_28, 0x14);
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x8]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [data_val+0x4]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x8]} */
🚫🚫        /* unimplemented  {fadd dword [data_val+0x4]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x20]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x8]} */
🚫🚫        /* unimplemented  {fadd dword [data_val]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫        param_4 = /* param_4 = unimplemented  {fstp dword [stack_ptr+0x58], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x58], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0xc]} */
🚫🚫        /* unimplemented  {fadd dword [data_val+0x4]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0xc]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [data_val+0x4]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fadd fp0, fp2} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x58]} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x8]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [data_val]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd fp0, fp1} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫        param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x50], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x50], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0xc]} */
🚫🚫        /* unimplemented  {fadd dword [data_val]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x2c]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x50]} */
🚫🚫        /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫        item_28 = /* item_28 = unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0xc]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [data_val]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd dword [stack_ptr+0x50]} */
🚫🚫        /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫        float item_24_1 = /* float item_24_1 = unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫        /* unimplemented  {fadd fp0, fp2} */
🚫🚫        /* unimplemented  {fsub fp0, fp1} */
        entity_4 = item_18 + *(data_5 + 0x10) + 1;
        int32_t item_18_1 = entity_4;
🚫🚫🚫        float item_20_1 = /* float item_20_1 = unimplemented  {fstp dword [stack_ptr+0x28], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x28], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫        /* unimplemented  {fadd fp0, fp1} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x58]} */
🚫🚫🚫        float item_1c_1 = /* float item_1c_1 = unimplemented  {fstp dword [stack_ptr+0x2c], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x2c], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */

        if (entity_4 > 0x3e8)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [stack_ptr+0x2c]} */
            entity_4 = 0;
            int32_t item_18_2 = 0;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [stack_ptr+0x24]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fsqrt } */
🚫🚫            /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            item_28 = /* item_28 = unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            float item_24_2 = /* float item_24_2 = unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            float item_20_2 = /* float item_20_2 = unimplemented  {fstp dword [stack_ptr+0x28], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x28], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            float item_1c_2 = /* float item_1c_2 = unimplemented  {fstp dword [stack_ptr+0x2c], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x2c], fp0} */
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
        }
    }
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
    int32_t result = *(context_val + 4);
    *(context_val + 0x48) = entity_4;
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x24]} */
    memcpy(context_val + 0x4c, &item_28, 0x14);
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
    float source_2 = param_5;
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    param_4 = /* param_4 = unimplemented  {fstp dword [stack_ptr+0x54], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x54], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    float item_34 = /* float item_34 = unimplemented  {fstp dword [stack_ptr+0x10], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x10], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    float item_30 = /* float item_30 = unimplemented  {fstp dword [stack_ptr+0x14], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x14], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    param_3 = /* param_3 = unimplemented  {fstp dword [stack_ptr+0x50], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x50], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    context = /* context = unimplemented  {fstp dword [stack_ptr+0x48], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x48], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x4c], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x4c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333e0]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [stack_ptr+0x14]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [stack_ptr+0x4c]} */
🚫🚫🚫    *(context_val + 0x24) =
    /* unimplemented  {fstp dword [flagP], fp0} */
🚫🚫    /* unimplemented  {fld fp0, fp1} */
🚫🚫    /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫    *(context_val + 0x28) =
    /* unimplemented  {fstp dword [context_val+0x28], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x48]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x54]} */
🚫🚫🚫    *(context_val + 0x2c) =
    /* unimplemented  {fstp dword [context_val+0x2c], fp0} */
🚫🚫    /* unimplemented  {fadd fp0, fp1} */
🚫🚫🚫    *(context_val + 0x30) =
    /* unimplemented  {fstp dword [context_val+0x30], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fsubr fp0, dword [&g_5333e0]} */
🚫🚫    /* unimplemented  {fld fp0, fp0} */
🚫🚫    /* unimplemented  {fsub fp0, dword [stack_ptr+0x4c]} */
🚫🚫🚫    *(context_val + 0x34) =
    /* unimplemented  {fstp dword [context_val+0x34], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫    *(context_val + 0x38) =
    /* unimplemented  {fstp dword [context_val+0x38], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [stack_ptr+0x48]} */
🚫🚫🚫    *(context_val + 0x3c) =
    /* unimplemented  {fstp dword [context_val+0x3c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x10]} */
🚫🚫🚫    *(context_val + 0x40) =
    /* unimplemented  {fstp dword [context_val+0x40], fp0} */
🚫🚫    /* unimplemented  {fsub fp0, dword [stack_ptr+0x14]} */
🚫🚫🚫    *(context_val + 0x44) =
    /* unimplemented  {fstp dword [context_val+0x44], fp0} */

    if (result & 0x20000)
        source_2 = item_38;

    for (float i = *(context_val + 0x78); i; i = *(i + 0x7c))
        result = Render_DrawSplineMesh_7(context_val + 0x24, &item_28, context_val + 0x18, i, source_2);

    return result;
}
