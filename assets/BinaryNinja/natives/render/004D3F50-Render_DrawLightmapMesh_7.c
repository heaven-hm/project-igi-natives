// Original IGI.EXE function: Render_DrawLightmapMesh_7 (VA 0x004D3F50; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawLightmapMesh_7.h"
float Render_DrawLightmapMesh_7(long double a1 @ fp6, float a2 @ 0x8, float a3) __location("valA")

{
    float srcS = a3;
    void v_14;
    float valA1 = Render_SetupLighting_7(&v_14, a2, Render_SetupLighting_6(srcS, 0));
    void v_28;
    float valA3 = Render_SetupLighting_7(&v_28, a2, Render_SetupLighting_6(srcS, 1));
    float valA4 = *(srcS + 0xc);

    if (!valA4)
        a3 = 0f;
    else
    {
        valA4(*(srcS + 0x18));
        a3 = a1;
    }

    int32_t valA5 = *(srcS + 8);
    float arg_4;
    float result;
    float srcS1;

    if (!valA5)
    {
        srcS1 = arg_4;
        result = Render_TransformVertices_7(srcS1, valA1, &v_14, valA3, &v_28, a3);
    }
    else
    {
        srcS1 = arg_4;
        result = valA5(srcS1, valA1, &v_14, valA3, &v_28, a3);
    }

    if (result != 1)
        return result;

    void* valA6 = *(a2 + 0x74);
    int32_t valA7;

    if (!valA6)
    {
        Render_SkinBones_7(nullptr, &arg_4);
        float valA8 = arg_4;
🚫🚫        /* unimplemented  {fld fp0, dword [valA]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x4]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x8]} */
        valA7 = *(valA8 + 0x10);
        int32_t v_30_2 = *(valA8 + 0xc);
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float v_34_2 = /* float v_34_2 = unimplemented  {fstp dword [esp+0x20], fp0} */;
        /* unimplemented  {fstp dword [esp+0x20], fp0} */
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x4c]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x50]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x54]} */
        valA7 = *(valA6 + 0x5c);
        int32_t v_30_1 = *(valA6 + 0x58);
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float v_34_1 = /* float v_34_1 = unimplemented  {fstp dword [esp+0x20], fp0} */;
        /* unimplemented  {fstp dword [esp+0x20], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x4]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [srcS+0x8]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fsub fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    float v_40_1 = /* float v_40_1 = unimplemented  {fstp dword [esp+0x14], fp0} */;
    /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0xc]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [srcS]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    float v_44_1 = /* float v_44_1 = unimplemented  {fstp dword [esp+0x10], fp0} */;
    /* unimplemented  {fstp dword [esp+0x10], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x4]} */
🚫🚫    /* unimplemented  {fadd dword [srcS]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp3} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    a2 = /* a2 = unimplemented  {fstp dword [esp+0x5c], fp0} */;
    /* unimplemented  {fstp dword [esp+0x5c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0xc]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [srcS+0x8]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    a3 = /* a3 = unimplemented  {fstp dword [esp+0x60], fp0} */;
    /* unimplemented  {fstp dword [esp+0x60], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0xc]} */
🚫🚫    /* unimplemented  {fadd dword [srcS+0x8]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fsub fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp1, fp0} */
    /* unimplemented  {fstp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, fp0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [srcS+0x4]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fsub fp0, fp4} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫    /* unimplemented  {fadd fp0, fp1} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫    arg_4 = /* arg_4 = unimplemented  {fstp dword [esp+0x58], fp0} */;
    /* unimplemented  {fstp dword [esp+0x58], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0xc]} */
🚫🚫    /* unimplemented  {fadd dword [srcS]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd fp0, fp4} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫    *srcS1 =
    /* unimplemented  {fstp dword [srcS], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x4]} */
🚫🚫    /* unimplemented  {fadd dword [srcS+0x8]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fsub fp0, fp3} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫    *(srcS1 + 4) =
    /* unimplemented  {fstp dword [srcS+0x4], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x10]} */
    int32_t objC4 = *(srcS1 + 0x10) + valA7 + 1;
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x60]} */
    *(srcS1 + 0x10) = objC4;
🚫🚫    *(srcS1 + 8) =
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x5c]} */
🚫🚫    *(srcS1 + 0xc) =

    if (objC4 <= 0x3e8)
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
        return 0f;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x4]} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS]} */
🚫🚫    /* unimplemented  {fld fp0, fp2} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫    /* unimplemented  {fld fp0, fp4} */
🚫🚫    /* unimplemented  {fmul fp0, fp5} */
    *(srcS1 + 0x10) = 0;
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
🚫🚫    /* unimplemented  {fld fp0, dword [srcS]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫    *srcS1 =
    /* unimplemented  {fstp dword [srcS], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x4]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫    *(srcS1 + 4) =
    /* unimplemented  {fstp dword [srcS+0x4], fp0} */
🚫🚫🚫🚫    /* unimplemented  {fxch fp0, fp2} */
    /* unimplemented  {fxch fp0, fp2} */
🚫🚫    /* unimplemented  {fmul fp0, fp2} */
🚫🚫🚫    *(srcS1 + 8) =
    /* unimplemented  {fstp dword [srcS+0x8], fp0} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫    *(srcS1 + 0xc) =
    /* unimplemented  {fstp dword [srcS+0xc], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
    return 0;
}
