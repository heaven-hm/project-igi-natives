#include "gi_platform.h"
#include "004D3A90-Render_DrawSplineMesh_7.h"
int32_t Render_DrawSplineMesh_7(float* a1, float a2, float* a3, float a4, float a5)

{
    float ctxB = a4;
    float tmpD = (*(int32_t*)(uintptr_t)(ctxB + 0x80));
    float v_38 = tmpD;
    (*(int32_t*)(uintptr_t)(ctxB + 4)) &= 0xfff9ffff;

    if (!tmpD)
    {
        v_38 = a5;
        tmpD = a5;
    }

    float v_24 = a1[5] * (*(int32_t*)(uintptr_t)(ctxB + 0x10)) + a1[3] * (*(int32_t*)(uintptr_t)(ctxB + 8)) + a1[4] * (*(int32_t*)(uintptr_t)(ctxB + 0xc));
    long double x87_r6_11 = a1[8] * (*(int32_t*)(uintptr_t)(ctxB + 0x10)) + a1[6] * (*(int32_t*)(uintptr_t)(ctxB + 8)) + a1[7] * (*(int32_t*)(uintptr_t)(ctxB + 0xc));
    float v_20 = x87_r6_11;
    (*(int32_t*)(uintptr_t)(ctxB + 0x18)) = a1[2] * (*(int32_t*)(uintptr_t)(ctxB + 0x10)) + a1[1] * (*(int32_t*)(uintptr_t)(ctxB + 0xc)) + (*(int32_t*)(uintptr_t)(ctxB + 8)) * *a1 + *a3;
    float v_28;
    int32_t* v_50 = &v_28;
    (*(int32_t*)(uintptr_t)(ctxB + 0x1c)) = v_24 + a3[1];
    (*(int32_t*)(uintptr_t)(ctxB + 0x20)) = v_20 + a3[2];
    float valA4 = Render_DrawLightmapMesh_7(x87_r6_11, ctxB, tmpD);

    if (valA4 == 0xffffffff)
    {
        int32_t srcS1 = (*(int32_t*)(uintptr_t)(ctxB + 4));
        int32_t* v_50_1 = &v_28;
        long double fpu4;
        valA4 = Render_DrawLightmapMesh_7(fpu4, ctxB, a5);
        (*(int32_t*)(uintptr_t)(ctxB + 4)) = srcS1;
    }

    int32_t objC4;
    int32_t v_18;

    if (valA4)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [valA]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x4]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float v_10_1 = /* float v_10_1 = unimplemented  {fstp dword [esp+0x38], fp0} */;
        /* unimplemented  {fstp dword [esp+0x38], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x8]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float v_c_1 = /* float v_c_1 = unimplemented  {fstp dword [esp+0x3c], fp0} */;
        /* unimplemented  {fstp dword [esp+0x3c], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0xc]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fadd fp0, fp2} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x24]} */
        int32_t valA7 = (*(int32_t*)(uintptr_t)(a2 + 0x10));
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫        a3 = /* a3 = unimplemented  {fstp dword [esp+0x54], fp0} */;
        /* unimplemented  {fstp dword [esp+0x54], fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫        a4 = /* a4 = unimplemented  {fstp dword [esp+0x58], fp0} */;
        /* unimplemented  {fstp dword [esp+0x58], fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x58]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x54]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fsub fp0, fp4} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd fp0, fp1} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x50], fp0} */;
        /* unimplemented  {fstp dword [esp+0x50], fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp2} */
🚫🚫        /* unimplemented  {fadd fp0, fp4} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x2c]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫🚫        /* unimplemented  {fsubrp fp1, fp0} */
        /* unimplemented  {fsubrp fp1, fp0} */
🚫🚫        a1 = /* a1 = unimplemented  {fst dword [esp+0x4c], fp0} */;
🚫🚫🚫        (*(int32_t*)(uintptr_t)(ctxB + 0x60)) =
        /* unimplemented  {fstp dword [ctxB+0x60], fp0} */
🚫🚫🚫🚫        /* unimplemented  {fxch fp0, fp1} */
        /* unimplemented  {fxch fp0, fp1} */
🚫🚫🚫        /* unimplemented  {fsubrp fp2, fp0} */
        /* unimplemented  {fsubrp fp2, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp2, fp0} */
        /* unimplemented  {fmulp fp2, fp0} */
🚫🚫🚫🚫        /* unimplemented  {fxch fp0, fp1} */
        /* unimplemented  {fxch fp0, fp1} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫🚫        /* unimplemented  {fxch fp0, fp1} */
        /* unimplemented  {fxch fp0, fp1} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        (*(int32_t*)(uintptr_t)(ctxB + 0x64)) =
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x20]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x58]} */
🚫🚫🚫        a4 = /* a4 = unimplemented  {fstp dword [esp+0x58], fp0} */;
        /* unimplemented  {fstp dword [esp+0x58], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
        (*(int32_t*)(uintptr_t)(ctxB + 0x68)) = a4;
        objC4 = v_18;
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
        (*(int32_t*)(uintptr_t)(ctxB + 0x70)) = valA7 + objC4 + 1;
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x54]} */
🚫🚫        (*(int32_t*)(uintptr_t)(ctxB + 0x6c)) =

        if (valA7 + objC4 + 1 <= 0x3e8)
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
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x58]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [esp+0x58]} */
            (*(int32_t*)(uintptr_t)(ctxB + 0x70)) = 0;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, fp2} */
🚫🚫            /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x4c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [esp+0x4c]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fsqrt } */
🚫🚫            /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x4c]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            (*(int32_t*)(uintptr_t)(ctxB + 0x60)) =
            /* unimplemented  {fstp dword [ctxB+0x60], fp0} */
🚫🚫🚫🚫            /* unimplemented  {fxch fp0, fp2} */
            /* unimplemented  {fxch fp0, fp2} */
🚫🚫            /* unimplemented  {fmul fp0, fp2} */
🚫🚫🚫            (*(int32_t*)(uintptr_t)(ctxB + 0x64)) =
            /* unimplemented  {fstp dword [ctxB+0x64], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x58]} */
🚫🚫            /* unimplemented  {fmul fp0, fp2} */
🚫🚫🚫            (*(int32_t*)(uintptr_t)(ctxB + 0x68)) =
            /* unimplemented  {fstp dword [ctxB+0x68], fp0} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            (*(int32_t*)(uintptr_t)(ctxB + 0x6c)) =
            /* unimplemented  {fstp dword [ctxB+0x6c], fp0} */
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
        }
    }
    else
    {
        float valA5 = a2;
        memcpy(ctxB + 0x60, &v_28, 0x14);
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x8]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [valA+0x4]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x8]} */
🚫🚫        /* unimplemented  {fadd dword [valA+0x4]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x20]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x8]} */
🚫🚫        /* unimplemented  {fadd dword [valA]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫        a4 = /* a4 = unimplemented  {fstp dword [esp+0x58], fp0} */;
        /* unimplemented  {fstp dword [esp+0x58], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0xc]} */
🚫🚫        /* unimplemented  {fadd dword [valA+0x4]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0xc]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [valA+0x4]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fadd fp0, fp2} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x58]} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0x8]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [valA]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd fp0, fp1} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x50], fp0} */;
        /* unimplemented  {fstp dword [esp+0x50], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0xc]} */
🚫🚫        /* unimplemented  {fadd dword [valA]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x2c]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫        v_28 = /* v_28 = unimplemented  {fstp dword [esp+0x20], fp0} */;
        /* unimplemented  {fstp dword [esp+0x20], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [valA+0xc]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [valA]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫        float v_24_1 = /* float v_24_1 = unimplemented  {fstp dword [esp+0x24], fp0} */;
        /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fadd fp0, fp2} */
🚫🚫        /* unimplemented  {fsub fp0, fp1} */
        objC4 = v_18 + *(valA5 + 0x10) + 1;
        int32_t v_18_1 = objC4;
🚫🚫🚫        float v_20_1 = /* float v_20_1 = unimplemented  {fstp dword [esp+0x28], fp0} */;
        /* unimplemented  {fstp dword [esp+0x28], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fadd fp0, fp1} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x58]} */
🚫🚫🚫        float v_1c_1 = /* float v_1c_1 = unimplemented  {fstp dword [esp+0x2c], fp0} */;
        /* unimplemented  {fstp dword [esp+0x2c], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */

        if (objC4 > 0x3e8)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [esp+0x20]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [esp+0x2c]} */
            objC4 = 0;
            int32_t v_18_2 = 0;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [esp+0x28]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [esp+0x24]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fsqrt } */
🚫🚫            /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            v_28 = /* v_28 = unimplemented  {fstp dword [esp+0x20], fp0} */;
            /* unimplemented  {fstp dword [esp+0x20], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            float v_24_2 = /* float v_24_2 = unimplemented  {fstp dword [esp+0x24], fp0} */;
            /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            float v_20_2 = /* float v_20_2 = unimplemented  {fstp dword [esp+0x28], fp0} */;
            /* unimplemented  {fstp dword [esp+0x28], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            float v_1c_2 = /* float v_1c_2 = unimplemented  {fstp dword [esp+0x2c], fp0} */;
            /* unimplemented  {fstp dword [esp+0x2c], fp0} */
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
        }
    }
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x20]} */
    int32_t result = (*(int32_t*)(uintptr_t)(ctxB + 4));
    (*(int32_t*)(uintptr_t)(ctxB + 0x48)) = objC4;
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x24]} */
    memcpy(ctxB + 0x4c, &v_28, 0x14);
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x28]} */
    float srcS2 = a5;
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    a4 = /* a4 = unimplemented  {fstp dword [esp+0x54], fp0} */;
    /* unimplemented  {fstp dword [esp+0x54], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    float v_34 = /* float v_34 = unimplemented  {fstp dword [esp+0x10], fp0} */;
    /* unimplemented  {fstp dword [esp+0x10], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    float v_30 = /* float v_30 = unimplemented  {fstp dword [esp+0x14], fp0} */;
    /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    a3 = /* a3 = unimplemented  {fstp dword [esp+0x50], fp0} */;
    /* unimplemented  {fstp dword [esp+0x50], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    a1 = /* a1 = unimplemented  {fstp dword [esp+0x48], fp0} */;
    /* unimplemented  {fstp dword [esp+0x48], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫    a2 = /* a2 = unimplemented  {fstp dword [esp+0x4c], fp0} */;
    /* unimplemented  {fstp dword [esp+0x4c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333e0]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x4c]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x24)) =
    /* unimplemented  {fstp dword [flagP], fp0} */
🚫🚫    /* unimplemented  {fld fp0, fp1} */
🚫🚫    /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x28)) =
    /* unimplemented  {fstp dword [ctxB+0x28], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x54]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x2c)) =
    /* unimplemented  {fstp dword [ctxB+0x2c], fp0} */
🚫🚫    /* unimplemented  {fadd fp0, fp1} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x30)) =
    /* unimplemented  {fstp dword [ctxB+0x30], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fsubr fp0, dword [&g_5333e0]} */
🚫🚫    /* unimplemented  {fld fp0, fp0} */
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x4c]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x34)) =
    /* unimplemented  {fstp dword [ctxB+0x34], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x10]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x38)) =
    /* unimplemented  {fstp dword [ctxB+0x38], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x48]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x3c)) =
    /* unimplemented  {fstp dword [ctxB+0x3c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x10]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x40)) =
    /* unimplemented  {fstp dword [ctxB+0x40], fp0} */
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x14]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x44)) =
    /* unimplemented  {fstp dword [ctxB+0x44], fp0} */

    if (result & 0x20000)
        srcS2 = v_38;

    for (float i = (*(int32_t*)(uintptr_t)(ctxB + 0x78)); i; i = *(i + 0x7c))
        result = Render_DrawSplineMesh_7(ctxB + 0x24, &v_28, ctxB + 0x18, i, srcS2);

    return result;
}
