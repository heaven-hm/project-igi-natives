#include "004D3A90-Render_DrawSplineMesh_7.h"
/* 0x004d3a90 Render_DrawSplineMesh_7 full linked: callers=2 callees=5 */
int32_t sub_4d3a90(float* a1, float a2, float* a3, float a4, float a5)

{
    float ebx = a4;
    float edx = *(ebx + 0x80);
    float var_38 = edx;
    *(ebx + 4) &= 0xfff9ffff;

    if (!edx)
    {
        var_38 = a5;
        edx = a5;
    }

    float var_24 = a1[5] * *(ebx + 0x10) + a1[3] * *(ebx + 8) + a1[4] * *(ebx + 0xc);
    long double x87_r6_11 = a1[8] * *(ebx + 0x10) + a1[6] * *(ebx + 8) + a1[7] * *(ebx + 0xc);
    float var_20 = x87_r6_11;
    *(ebx + 0x18) = a1[2] * *(ebx + 0x10) + a1[1] * *(ebx + 0xc) + *(ebx + 8) * *a1 + *a3;
    float var_28;
    int32_t* var_50 = &var_28;
    *(ebx + 0x1c) = var_24 + a3[1];
    *(ebx + 0x20) = var_20 + a3[2];
    float eax_4 = sub_4d3f50(x87_r6_11, ebx, edx);

    if (eax_4 == 0xffffffff)
    {
        int32_t esi_1 = *(ebx + 4);
        int32_t* var_50_1 = &var_28;
        long double x87_r4;
        eax_4 = sub_4d3f50(x87_r4, ebx, a5);
        *(ebx + 4) = esi_1;
    }

    int32_t ecx_4;
    int32_t var_18;

    if (eax_4)
    {
🚫🚫        /* unimplemented  {fld st0, dword [eax]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x4]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float var_10_1 = /* float var_10_1 = unimplemented  {fstp dword [esp+0x38], st0} */;
        /* unimplemented  {fstp dword [esp+0x38], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x8]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float var_c_1 = /* float var_c_1 = unimplemented  {fstp dword [esp+0x3c], st0} */;
        /* unimplemented  {fstp dword [esp+0x3c], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0xc]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fadd st0, st2} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x24]} */
        int32_t eax_7 = *(a2 + 0x10);
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫        a3 = /* a3 = unimplemented  {fstp dword [esp+0x54], st0} */;
        /* unimplemented  {fstp dword [esp+0x54], st0} */
🚫🚫        /* unimplemented  {fld st0, st0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫        a4 = /* a4 = unimplemented  {fstp dword [esp+0x58], st0} */;
        /* unimplemented  {fstp dword [esp+0x58], st0} */
🚫🚫        /* unimplemented  {fld st0, st0} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, st0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x58]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x54]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fsub st0, st4} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fadd st0, st1} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x50], st0} */;
        /* unimplemented  {fstp dword [esp+0x50], st0} */
🚫🚫        /* unimplemented  {fld st0, st2} */
🚫🚫        /* unimplemented  {fadd st0, st4} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x2c]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫🚫        /* unimplemented  {fsubrp st1, st0} */
        /* unimplemented  {fsubrp st1, st0} */
🚫🚫        a1 = /* a1 = unimplemented  {fst dword [esp+0x4c], st0} */;
🚫🚫🚫        *(ebx + 0x60) = /* *(ebx i+ 0x60) = unimplemented  {fstp dword [ebx+0x60], st0} */;
        /* unimplemented  {fstp dword [ebx+0x60], st0} */
🚫🚫🚫🚫        /* unimplemented  {fxch st0, st1} */
        /* unimplemented  {fxch st0, st1} */
🚫🚫🚫        /* unimplemented  {fsubrp st2, st0} */
        /* unimplemented  {fsubrp st2, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp st2, st0} */
        /* unimplemented  {fmulp st2, st0} */
🚫🚫🚫🚫        /* unimplemented  {fxch st0, st1} */
        /* unimplemented  {fxch st0, st1} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fsub st0, st1} */
🚫🚫🚫🚫        /* unimplemented  {fxch st0, st1} */
        /* unimplemented  {fxch st0, st1} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        *(ebx + 0x64) = /* *(ebx i+ 0x64) = unimplemented  {fst dword [ebx+0x64], st0} */;
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x20]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x58]} */
🚫🚫🚫        a4 = /* a4 = unimplemented  {fstp dword [esp+0x58], st0} */;
        /* unimplemented  {fstp dword [esp+0x58], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
        *(ebx + 0x68) = a4;
        ecx_4 = var_18;
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
        *(ebx + 0x70) = eax_7 + ecx_4 + 1;
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x54]} */
🚫🚫        *(ebx + 0x6c) = /* *(ebx i+ 0x6c) = unimplemented  {fst dword [ebx+0x6c], st0} */;

        if (eax_7 + ecx_4 + 1 <= 0x3e8)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, st0} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x58]} */
🚫🚫            /* unimplemented  {fmul st0, dword [esp+0x58]} */
            *(ebx + 0x70) = 0;
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, st2} */
🚫🚫            /* unimplemented  {fmul st0, st3} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫            /* unimplemented  {fmul st0, dword [esp+0x4c]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fsqrt } */
🚫🚫            /* unimplemented  {fdivr st0, qword [&g_5333f8]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫🚫            *(ebx + 0x60) = /* *(ebx i+ 0x60) = unimplemented  {fstp dword [ebx+0x60], st0} */;
            /* unimplemented  {fstp dword [ebx+0x60], st0} */
🚫🚫🚫🚫            /* unimplemented  {fxch st0, st2} */
            /* unimplemented  {fxch st0, st2} */
🚫🚫            /* unimplemented  {fmul st0, st2} */
🚫🚫🚫            *(ebx + 0x64) = /* *(ebx i+ 0x64) = unimplemented  {fstp dword [ebx+0x64], st0} */;
            /* unimplemented  {fstp dword [ebx+0x64], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x58]} */
🚫🚫            /* unimplemented  {fmul st0, st2} */
🚫🚫🚫            *(ebx + 0x68) = /* *(ebx i+ 0x68) = unimplemented  {fstp dword [ebx+0x68], st0} */;
            /* unimplemented  {fstp dword [ebx+0x68], st0} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫🚫            *(ebx + 0x6c) = /* *(ebx i+ 0x6c) = unimplemented  {fstp dword [ebx+0x6c], st0} */;
            /* unimplemented  {fstp dword [ebx+0x6c], st0} */
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
        }
    }
    else
    {
        float eax_5 = a2;
        memcpy(ebx + 0x60, &var_28, 0x14);
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x8]} */
🚫🚫        /* unimplemented  {fsub st0, dword [eax+0x4]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x8]} */
🚫🚫        /* unimplemented  {fadd dword [eax+0x4]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x20]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x8]} */
🚫🚫        /* unimplemented  {fadd dword [eax]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫        a4 = /* a4 = unimplemented  {fstp dword [esp+0x58], st0} */;
        /* unimplemented  {fstp dword [esp+0x58], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0xc]} */
🚫🚫        /* unimplemented  {fadd dword [eax+0x4]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0xc]} */
🚫🚫        /* unimplemented  {fsub st0, dword [eax+0x4]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x28]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, st0} */
🚫🚫        /* unimplemented  {fadd st0, st2} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x58]} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x8]} */
🚫🚫        /* unimplemented  {fsub st0, dword [eax]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fadd st0, st1} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x50], st0} */;
        /* unimplemented  {fstp dword [esp+0x50], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0xc]} */
🚫🚫        /* unimplemented  {fadd dword [eax]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x2c]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fsub st0, st1} */
🚫🚫🚫        var_28 = /* var_28 = unimplemented  {fstp dword [esp+0x20], st0} */;
        /* unimplemented  {fstp dword [esp+0x20], st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0xc]} */
🚫🚫        /* unimplemented  {fsub st0, dword [eax]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
🚫🚫        /* unimplemented  {fadd dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fsub st0, st1} */
🚫🚫🚫        float var_24_1 = /* float var_24_1 = unimplemented  {fstp dword [esp+0x24], st0} */;
        /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fadd st0, st2} */
🚫🚫        /* unimplemented  {fsub st0, st1} */
        ecx_4 = var_18 + *(eax_5 + 0x10) + 1;
        int32_t var_18_1 = ecx_4;
🚫🚫🚫        float var_20_1 = /* float var_20_1 = unimplemented  {fstp dword [esp+0x28], st0} */;
        /* unimplemented  {fstp dword [esp+0x28], st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fadd st0, st1} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x58]} */
🚫🚫🚫        float var_1c_1 = /* float var_1c_1 = unimplemented  {fstp dword [esp+0x2c], st0} */;
        /* unimplemented  {fstp dword [esp+0x2c], st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */

        if (ecx_4 > 0x3e8)
        {
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫            /* unimplemented  {fmul st0, dword [esp+0x20]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫            /* unimplemented  {fmul st0, dword [esp+0x2c]} */
            ecx_4 = 0;
            int32_t var_18_2 = 0;
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul st0, dword [esp+0x28]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul st0, dword [esp+0x24]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fsqrt } */
🚫🚫            /* unimplemented  {fdivr st0, qword [&g_5333f8]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫🚫            var_28 = /* var_28 = unimplemented  {fstp dword [esp+0x20], st0} */;
            /* unimplemented  {fstp dword [esp+0x20], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫🚫            float var_24_2 = /* float var_24_2 = unimplemented  {fstp dword [esp+0x24], st0} */;
            /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫🚫            float var_20_2 = /* float var_20_2 = unimplemented  {fstp dword [esp+0x28], st0} */;
            /* unimplemented  {fstp dword [esp+0x28], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫🚫            float var_1c_2 = /* float var_1c_2 = unimplemented  {fstp dword [esp+0x2c], st0} */;
            /* unimplemented  {fstp dword [esp+0x2c], st0} */
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
        }
    }
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x20]} */
    int32_t result = *(ebx + 4);
    *(ebx + 0x48) = ecx_4;
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x24]} */
    memcpy(ebx + 0x4c, &var_28, 0x14);
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x28]} */
    float esi_2 = a5;
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫🚫    a4 = /* a4 = unimplemented  {fstp dword [esp+0x54], st0} */;
    /* unimplemented  {fstp dword [esp+0x54], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫🚫    float var_34 = /* float var_34 = unimplemented  {fstp dword [esp+0x10], st0} */;
    /* unimplemented  {fstp dword [esp+0x10], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫🚫    float var_30 = /* float var_30 = unimplemented  {fstp dword [esp+0x14], st0} */;
    /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫🚫    a3 = /* a3 = unimplemented  {fstp dword [esp+0x50], st0} */;
    /* unimplemented  {fstp dword [esp+0x50], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫🚫    a1 = /* a1 = unimplemented  {fstp dword [esp+0x48], st0} */;
    /* unimplemented  {fstp dword [esp+0x48], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫🚫    a2 = /* a2 = unimplemented  {fstp dword [esp+0x4c], st0} */;
    /* unimplemented  {fstp dword [esp+0x4c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd st0, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333e0]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x4c]} */
🚫🚫🚫    *(ebx + 0x24) = /* *(ebx i+ 0x24) = unimplemented  {fstp dword [ebp], st0} */;
    /* unimplemented  {fstp dword [ebp], st0} */
🚫🚫    /* unimplemented  {fld st0, st1} */
🚫🚫    /* unimplemented  {fsub st0, st1} */
🚫🚫🚫    *(ebx + 0x28) = /* *(ebx i+ 0x28) = unimplemented  {fstp dword [ebx+0x28], st0} */;
    /* unimplemented  {fstp dword [ebx+0x28], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x54]} */
🚫🚫🚫    *(ebx + 0x2c) = /* *(ebx i+ 0x2c) = unimplemented  {fstp dword [ebx+0x2c], st0} */;
    /* unimplemented  {fstp dword [ebx+0x2c], st0} */
🚫🚫    /* unimplemented  {fadd st0, st1} */
🚫🚫🚫    *(ebx + 0x30) = /* *(ebx i+ 0x30) = unimplemented  {fstp dword [ebx+0x30], st0} */;
    /* unimplemented  {fstp dword [ebx+0x30], st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫    /* unimplemented  {fsubr st0, dword [&g_5333e0]} */
🚫🚫    /* unimplemented  {fld st0, st0} */
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x4c]} */
🚫🚫🚫    *(ebx + 0x34) = /* *(ebx i+ 0x34) = unimplemented  {fstp dword [ebx+0x34], st0} */;
    /* unimplemented  {fstp dword [ebx+0x34], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x10]} */
🚫🚫🚫    *(ebx + 0x38) = /* *(ebx i+ 0x38) = unimplemented  {fstp dword [ebx+0x38], st0} */;
    /* unimplemented  {fstp dword [ebx+0x38], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x48]} */
🚫🚫🚫    *(ebx + 0x3c) = /* *(ebx i+ 0x3c) = unimplemented  {fstp dword [ebx+0x3c], st0} */;
    /* unimplemented  {fstp dword [ebx+0x3c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x10]} */
🚫🚫🚫    *(ebx + 0x40) = /* *(ebx i+ 0x40) = unimplemented  {fstp dword [ebx+0x40], st0} */;
    /* unimplemented  {fstp dword [ebx+0x40], st0} */
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x14]} */
🚫🚫🚫    *(ebx + 0x44) = /* *(ebx i+ 0x44) = unimplemented  {fstp dword [ebx+0x44], st0} */;
    /* unimplemented  {fstp dword [ebx+0x44], st0} */

    if (result & 0x20000)
        esi_2 = var_38;

    for (float i = *(ebx + 0x78); i; i = *(i + 0x7c))
        result = sub_4d3a90(ebx + 0x24, &var_28, ebx + 0x18, i, esi_2);

    return result;
}
