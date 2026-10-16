#include "005031F0-Physics_InterpolateWaypoint_2.h"
/* 0x005031f0 Physics_InterpolateWaypoint_2 full linked: callers=2 callees=22 */
int32_t sub_5031f0(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, long double a6 @ st5, long double a7 @ st6, long double a8 @ st7, float* a9, int32_t* a10, float a11)

{
    int32_t* esi = a10;
    float eax = *esi;
    *esi = eax + 1;
    Profile_ValueSet(a11, eax);
    *a9 = a1;
    float eax_1 = *esi;
    *esi = eax_1 + 1;
    Profile_ValueSet(a11, eax_1);
    a9[1] = a2;
    float eax_2 = *esi;
    *esi = eax_2 + 1;
    Profile_ValueSet(a11, eax_2);
    a9[2] = a3;
    float eax_3 = *esi;
    *esi = eax_3 + 1;
    Profile_ValueSet(a11, eax_3);
    a9[3] = a4;
    float eax_4 = *esi;
    *esi = eax_4 + 1;
    Profile_ValueSet(a11, eax_4);
    a9[4] = a5;
    float eax_5 = *esi;
    *esi = eax_5 + 1;
    Profile_ValueSet(a11, eax_5);
    a9[5] = a6;
    float eax_6 = *esi;
    *esi = eax_6 + 1;
    Profile_ValueSet(a11, eax_6);
    a9[6] = a7;
    float eax_7 = *esi;
    *esi = eax_7 + 1;
    Profile_ValueSet(a11, eax_7);
    a9[7] = a8;
    float eax_8 = *esi;
    *esi = eax_8 + 1;
    Profile_ValueSet(a11, eax_8);
    a9[8] = a1;
    float eax_9 = *esi;
    *esi = eax_9 + 1;
    Profile_ValueSet(a11, eax_9);
    a9[9] = a2;
    int16_t top = 0xa;
    int32_t eax_10 = *esi;
    *esi = eax_10 + 1;
    int32_t eax_11 = sub_4b8a20(a11, eax_10);
    int32_t i = 0;
    a9[0xa] = eax_11;

    if (eax_11 > 0)
    {
        a10 = &a9[0xb];

        do
        {
            Profile_ValueSet(a11, *esi + 6);
🚫🚫🚫            float var_14_3 = /* float var_14_3 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            Profile_ValueSet(a11, *esi + 5);
🚫🚫🚫            float var_18_4 = /* float var_18_4 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            Profile_ValueSet(a11, *esi + 4);
🚫🚫🚫            float var_1c_4 = /* float var_1c_4 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            Profile_ValueSet(a11, *esi + 3);
🚫🚫            /* unimplemented  {fmul st0, dword [&g_5333b8]} */
🚫🚫🚫            float var_20_4 = /* float var_20_4 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            Profile_ValueSet(a11, *esi + 2);
🚫🚫            /* unimplemented  {fmul st0, dword [&g_5333b8]} */
🚫🚫🚫            float var_24_4 = /* float var_24_4 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            Profile_ValueSet(a11, *esi + 1);
🚫🚫            /* unimplemented  {fmul st0, dword [&g_5333b8]} */
🚫🚫🚫            float var_28_4 = /* float var_28_4 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            Profile_ValueSet(a11, *esi);
🚫🚫🚫            float var_2c_3 = /* float var_2c_3 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            top += 7;
            sub_4ec4d0(a10, var_2c_3, var_28_4, var_24_4, var_20_4, var_1c_4, var_18_4, var_14_3);
            *esi += 7;
            i += 1;
            a10 = &a10[7];
        } while (i < a9[0xa]);
    }

    float eax_20 = *esi;
    *esi = eax_20 + 1;
    Profile_ValueSet(a11, eax_20);
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5333b8]} */
🚫🚫🚫    a9[0x43] = /* a9[0x43] = unimplemented  {fstp dword [ebx+0x10c], st0} */;
    /* unimplemented  {fstp dword [ebx+0x10c], st0} */
    float eax_21 = *esi;
    *esi = eax_21 + 1;
    Profile_ValueSet(a11, eax_21);
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_53367c]} */
🚫🚫🚫    a9[0x44] = /* a9[0x44] = unimplemented  {fstp dword [ebx+0x110], st0} */;
    /* unimplemented  {fstp dword [ebx+0x110], st0} */
    float eax_22 = *esi;
    *esi = eax_22 + 1;
    int32_t result = Profile_ValueSet(a11, eax_22);
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_53367c]} */
🚫🚫🚫    a9[0x45] = /* a9[0x45] = unimplemented  {fstp dword [ebx+0x114], st0} */;
    /* unimplemented  {fstp dword [ebx+0x114], st0} */
    return result;
}
