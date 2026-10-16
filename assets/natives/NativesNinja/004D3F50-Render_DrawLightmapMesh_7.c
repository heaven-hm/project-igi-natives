#include "004D3F50-Render_DrawLightmapMesh_7.h"
/* 0x004d3f50 Render_DrawLightmapMesh_7 full linked: callers=4 callees=6 */
float sub_4d3f50(long double a1 @ st6, float a2 @ 0x8, float a3) __location("eax")

{
    float esi = a3;
    void var_14;
    float eax_1 = sub_4d4690(&var_14, a2, sub_4d3720(esi, 0));
    void var_28;
    float eax_3 = sub_4d4690(&var_28, a2, sub_4d3720(esi, 1));
    float eax_4 = *(esi + 0xc);

    if (!eax_4)
        a3 = 0f;
    else
    {
        eax_4(*(esi + 0x18));
        a3 = a1;
    }

    int32_t eax_5 = *(esi + 8);
    float arg_4;
    float result;
    float esi_1;

    if (!eax_5)
    {
        esi_1 = arg_4;
        result = sub_4d41c0(esi_1, eax_1, &var_14, eax_3, &var_28, a3);
    }
    else
    {
        esi_1 = arg_4;
        result = eax_5(esi_1, eax_1, &var_14, eax_3, &var_28, a3);
    }

    if (result != 1)
        return result;

    void* eax_6 = *(a2 + 0x74);
    int32_t eax_7;

    if (!eax_6)
    {
        sub_4d4190(nullptr, &arg_4);
        float eax_8 = arg_4;
🚫🚫        /* unimplemented  {fld st0, dword [eax]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x4]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x8]} */
        eax_7 = *(eax_8 + 0x10);
        int32_t var_30_2 = *(eax_8 + 0xc);
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float var_34_2 = /* float var_34_2 = unimplemented  {fstp dword [esp+0x20], st0} */;
        /* unimplemented  {fstp dword [esp+0x20], st0} */
    }
    else
    {
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x4c]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x50]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld st0, dword [eax+0x54]} */
        eax_7 = *(eax_6 + 0x5c);
        int32_t var_30_1 = *(eax_6 + 0x58);
🚫🚫        /* unimplemented  {fchs } */
🚫🚫🚫        float var_34_1 = /* float var_34_1 = unimplemented  {fstp dword [esp+0x20], st0} */;
        /* unimplemented  {fstp dword [esp+0x20], st0} */
    }

🚫🚫    /* unimplemented  {fld st0, dword [esi+0x4]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esi+0x8]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fsub st0, st2} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫    float var_40_1 = /* float var_40_1 = unimplemented  {fstp dword [esp+0x14], st0} */;
    /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0xc]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esi]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd st0, st2} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫    float var_44_1 = /* float var_44_1 = unimplemented  {fstp dword [esp+0x10], st0} */;
    /* unimplemented  {fstp dword [esp+0x10], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x4]} */
🚫🚫    /* unimplemented  {fadd dword [esi]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd st0, st3} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫    a2 = /* a2 = unimplemented  {fstp dword [esp+0x5c], st0} */;
    /* unimplemented  {fstp dword [esp+0x5c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0xc]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esi+0x8]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd st0, st2} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫    a3 = /* a3 = unimplemented  {fstp dword [esp+0x60], st0} */;
    /* unimplemented  {fstp dword [esp+0x60], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0xc]} */
🚫🚫    /* unimplemented  {fadd dword [esi+0x8]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fsub st0, st2} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫    /* unimplemented  {fstp st1, st0} */
    /* unimplemented  {fstp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, st0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esi]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esi+0x4]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fsub st0, st4} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫    /* unimplemented  {fadd st0, st1} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫🚫    arg_4 = /* arg_4 = unimplemented  {fstp dword [esp+0x58], st0} */;
    /* unimplemented  {fstp dword [esp+0x58], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0xc]} */
🚫🚫    /* unimplemented  {fadd dword [esi]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd st0, st4} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fsub st0, st1} */
🚫🚫🚫    *esi_1 = /* *esi_1 = unimplemented  {fstp dword [esi], st0} */;
    /* unimplemented  {fstp dword [esi], st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x4]} */
🚫🚫    /* unimplemented  {fadd dword [esi+0x8]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fsub st0, st3} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fsub st0, st1} */
🚫🚫🚫    *(esi_1 + 4) = /* *(esi_1 i+ 4) = unimplemented  {fstp dword [esi+0x4], st0} */;
    /* unimplemented  {fstp dword [esi+0x4], st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x10]} */
    int32_t ecx_4 = *(esi_1 + 0x10) + eax_7 + 1;
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x60]} */
    *(esi_1 + 0x10) = ecx_4;
🚫🚫    *(esi_1 + 8) = /* *(esi_1 i+ 8) = unimplemented  {fst dword [esi+0x8], st0} */;
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x5c]} */
🚫🚫    *(esi_1 + 0xc) = /* *(esi_1 i+ 0xc) = unimplemented  {fst dword [esi+0xc], st0} */;

    if (ecx_4 <= 0x3e8)
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
        return 0f;
    }

🚫🚫    /* unimplemented  {fld st0, dword [esi+0x4]} */
🚫🚫    /* unimplemented  {fld st0, dword [esi]} */
🚫🚫    /* unimplemented  {fld st0, st2} */
🚫🚫    /* unimplemented  {fmul st0, st3} */
🚫🚫    /* unimplemented  {fld st0, st4} */
🚫🚫    /* unimplemented  {fmul st0, st5} */
    *(esi_1 + 0x10) = 0;
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, st1} */
🚫🚫    /* unimplemented  {fmul st0, st2} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, st2} */
🚫🚫    /* unimplemented  {fmul st0, st3} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fsqrt } */
🚫🚫    /* unimplemented  {fdivr st0, qword [&g_5333f8]} */
🚫🚫🚫    /* unimplemented  {fstp st2, st0} */
    /* unimplemented  {fstp st2, st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi]} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫🚫    *esi_1 = /* *esi_1 = unimplemented  {fstp dword [esi], st0} */;
    /* unimplemented  {fstp dword [esi], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x4]} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫🚫    *(esi_1 + 4) = /* *(esi_1 i+ 4) = unimplemented  {fstp dword [esi+0x4], st0} */;
    /* unimplemented  {fstp dword [esi+0x4], st0} */
🚫🚫🚫🚫    /* unimplemented  {fxch st0, st2} */
    /* unimplemented  {fxch st0, st2} */
🚫🚫    /* unimplemented  {fmul st0, st2} */
🚫🚫🚫    *(esi_1 + 8) = /* *(esi_1 i+ 8) = unimplemented  {fstp dword [esi+0x8], st0} */;
    /* unimplemented  {fstp dword [esi+0x8], st0} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫🚫    *(esi_1 + 0xc) = /* *(esi_1 i+ 0xc) = unimplemented  {fstp dword [esi+0xc], st0} */;
    /* unimplemented  {fstp dword [esi+0xc], st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
    return 0;
}
