// Original IGI.EXE function: Render_DrawLightmapMesh_7 (VA 0x004D3F50; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawLightmapMesh_7.h"
float Render_DrawLightmapMesh_7(long double context , float param_2 , float param_3) {
    float source_val = param_3;
    void item_14;
    float data_1 = Render_SetupLighting_7(&item_14, param_2, Render_SetupLighting_6(source_val, 0));
    void item_28;
    float data_3 = Render_SetupLighting_7(&item_28, param_2, Render_SetupLighting_6(source_val, 1));
    float data_4 = *(source_val + 0xc);

    if (!data_4)
        param_3 = 0.0f;
    else
    {
        data_4(*(source_val + 0x18));
        param_3 = context;
    }

    int32_t data_5 = *(source_val + 8);
    float arg_4;
    float result;
    float source_1;

    if (!data_5)
    {
        source_1 = arg_4;
        result = Render_TransformVertices_7(source_1, data_1, &item_14, data_3, &item_28, param_3);
    }
    else
    {
        source_1 = arg_4;
        result = data_5(source_1, data_1, &item_14, data_3, &item_28, param_3);
    }

    if (result != 1)
        return result;

    void* data_6 = *(param_2 + 0x74);
    int32_t data_7;

    if (!data_6)
    {
        Render_SkinBones_7(nullptr, &arg_4);
        float data_8 = arg_4;
🚫🚫        /* unimplemented  {fld fp0, dword [data_val]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x4]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x8]} */
        data_7 = *(data_8 + 0x10);
        int32_t item_30_2 = *(data_8 + 0xc);
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float item_34_2 = /* float item_34_2 = unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x4c]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x50]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [data_val+0x54]} */
        data_7 = *(data_6 + 0x5c);
        int32_t item_30_1 = *(data_6 + 0x58);
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float item_34_1 = /* float item_34_1 = unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x4]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [source_val+0x8]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fsub fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    float item_40_1 = /* float item_40_1 = unimplemented  {fstp dword [stack_ptr+0x14], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x14], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0xc]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [source_val]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    float item_44_1 = /* float item_44_1 = unimplemented  {fstp dword [stack_ptr+0x10], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x10], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x4]} */
🚫🚫    /* unimplemented  {fadd dword [source_val]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp3} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x5c], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x5c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0xc]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [source_val+0x8]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fadd fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    param_3 = /* param_3 = unimplemented  {fstp dword [stack_ptr+0x60], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x60], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0xc]} */
🚫🚫    /* unimplemented  {fadd dword [source_val+0x8]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fsub fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp1, fp0} */
    /* unimplemented  {fstp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, fp0} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x60]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x5c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [source_val+0x4]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fsub fp0, fp4} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫    /* unimplemented  {fadd fp0, fp1} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫    arg_4 = /* arg_4 = unimplemented  {fstp dword [stack_ptr+0x58], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x58], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0xc]} */
🚫🚫    /* unimplemented  {fadd dword [source_val]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fadd fp0, fp4} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x58]} */
🚫🚫    /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫    *source_1 =
    /* unimplemented  {fstp dword [source_val], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x4]} */
🚫🚫    /* unimplemented  {fadd dword [source_val+0x8]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fsub fp0, fp3} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x58]} */
🚫🚫    /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫    *(source_1 + 4) =
    /* unimplemented  {fstp dword [source_val+0x4], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x58]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x10]} */
    int32_t entity_4 = *(source_1 + 0x10) + data_7 + 1;
🚫🚫    /* unimplemented  {fsub fp0, dword [stack_ptr+0x60]} */
    *(source_1 + 0x10) = entity_4;
🚫🚫    *(source_1 + 8) =
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x58]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x14]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [stack_ptr+0x5c]} */
🚫🚫    *(source_1 + 0xc) =

    if (entity_4 <= 0x3e8)
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
        return 0.0f;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x4]} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val]} */
🚫🚫    /* unimplemented  {fld fp0, fp2} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫    /* unimplemented  {fld fp0, fp4} */
🚫🚫    /* unimplemented  {fmul fp0, fp5} */
    *(source_1 + 0x10) = 0;
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, fp1} */
🚫🚫    /* unimplemented  {fmul fp0, fp2} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, fp2} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fsqrt } */
🚫🚫    /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫🚫    /* unimplemented  {fstp fp2, fp0} */
    /* unimplemented  {fstp fp2, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫    *source_1 =
    /* unimplemented  {fstp dword [source_val], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x4]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫    *(source_1 + 4) =
    /* unimplemented  {fstp dword [source_val+0x4], fp0} */
🚫🚫🚫🚫    /* unimplemented  {fxch fp0, fp2} */
    /* unimplemented  {fxch fp0, fp2} */
🚫🚫    /* unimplemented  {fmul fp0, fp2} */
🚫🚫🚫    *(source_1 + 8) =
    /* unimplemented  {fstp dword [source_val+0x8], fp0} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫    *(source_1 + 0xc) =
    /* unimplemented  {fstp dword [source_val+0xc], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
    return 0;
}
