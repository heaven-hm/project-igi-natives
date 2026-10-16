#include "004262F0-CarAI_Combat.h"
/* 0x004262f0 CarAI_Combat full linked: callers=2 callees=11 */
int32_t CarAI_Combat(long double a1 @ st0, float a2)

{
    float ebx = a2;
    long double x87_r7 = *(ebx + 0x6c);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int32_t ebp;

    ebp = !(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40) ? 0 : 1;

    double* eax_1 = Menu_DrawWidget_16(ebx);
    void* esi = *(ebx + 0x4c);
    int32_t* var_60 = *(ebx + 0x68);
    double var_18;
    sub_4f9770(&var_18, var_60);
    double var_48;
    double* var_68 = &var_48;
    var_48 = var_18 - *eax_1;
    double var_10;
    double var_40 = var_10 - eax_1[1];
    double var_8;
    double var_38 = var_8 - eax_1[2];
    sub_4b3160(var_68);

    if (ebp)
    {
        long double x87_r7_10 = *sub_4c3440(*(ebx + 0x74)) - *eax_1;
        var_60 = *(ebx + 0x74);
        var_48 = x87_r7_10;
        var_40 = *(sub_4c3440(var_60) + 8) - eax_1[1];
        var_38 = *(sub_4c3440(*(ebx + 0x74)) + 0x10) - eax_1[2];
    }

    double var_30 = *(esi + 0x88) * var_38 + *(esi + 0x7c) * var_40 + *(esi + 0x70) * var_48;
    double var_28 = *(esi + 0x8c) * var_38 + *(esi + 0x80) * var_40 + *(esi + 0x74) * var_48;
    double var_20 = *(esi + 0x90) * var_38 + *(esi + 0x84) * var_40 + *(esi + 0x78) * var_48;
    memcpy(&var_48, &var_30, 0x18);
    void var_70;
    memcpy(&var_70, &var_30, 0x18);
    WeaponType_GetConfig();
    a2 = a1;
    long double temp1 = 0.174532935f;
    a1 - temp1;

    if (*(&((a1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp1) ? 1 : 0) << 0xa
        | (a1 == temp1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
    {
        long double x87_r0 = a2;
        long double temp2_1 = -0.174532935f;
        x87_r0 - temp2_1;

        if (!(*(&((x87_r0 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0, temp2_1) ? 1 : 0) << 0xa
                | (x87_r0 == temp2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
            *(ebx + 0x5c) = a2 * -1.9098593f;
        else
            *(ebx + 0x5c) = 0x3f800000;
    }
    else
        *(ebx + 0x5c) = 0xbf800000;

    int16_t top;
    int16_t top_1;

    if (!ebp)
    {
        long double x87_r1;
        Menu_PlayMusic_16(x87_r1, ebx);
        top_1 = 2;
🚫🚫🚫    label_4264b4:
        *(ebx + 0x64) = /* *(ebx i+ 0x64) = unimplemented  {fstp dword [ebx+0x64], st0} */;
        /* unimplemented  {fstp dword [ebx+0x64], st0} */
        top = top_1 + 1;
    }
    else
    {
        long double x87_r0_3 = a2;
        long double temp3_1 = 0f;
        x87_r0_3 - temp3_1;
        long double x87_r0_4 = a2;

        if (*(&((x87_r0_3 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_3, temp3_1) ? 1 : 0) << 0xa
                | (x87_r0_3 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
            x87_r0_4 = -(x87_r0_4);

        long double temp4_1 = 0.174532935f;
        x87_r0_4 - temp4_1;
        top = 1;

        if (*(&((x87_r0_4 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_4, temp4_1) ? 1 : 0) << 0xa
            | (x87_r0_4 == temp4_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
        {
            a2 - 0f;
            top_1 = 0;
            goto label_4264b4;
        }

        *(ebx + 0x64) = 0x40a00000;
    }
    var_60 = ebx + 0x60;
    int16_t result = Menu_UpdateLanguage_17(ebx + 0x58, var_60, ebx);

    if (ebp)
    {
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x5c]} */
⋯        long double temp6_1 = 0f;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp6_1 */ - temp6_1;
        bool c0_6 = /* bool c0_6 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp6_1 */ < temp6_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp6_1) */, temp6_1);
        bool c3_6 = /* bool c3_6 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp6_1 */ == temp6_1;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x5c]} */

        if (*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | ((top - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

⋯        long double temp7_1 = 0.174532935f;
        /* unimplemented  {fcomp st0, dword [&g_533658]} f- temp7_1 */ - temp7_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcomp st0, dword [&g_533658]} f< temp7_1 */ < temp7_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_533658]}, temp7_1) */, temp7_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcomp st0, dword [&g_533658]} f== temp7_1 */ == temp7_1;
        /* unimplemented  {fcomp st0, dword [&g_533658]} */
        result =
            (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe | (top & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
        {
            *(ebx + 0x60) = 0;
            return result;
        }
    }

    *(ebx + 0x60) = *(ebx + 0x70);
    return result;
}
