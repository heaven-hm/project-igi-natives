#include "00470D70-Binocular_Cleanup_3.h"
/* 0x00470d70 Binocular_Cleanup_3 full linked: callers=0 callees=8 */
float sub_470d70(int32_t* a1 @ 0x8) __location("eax")

{
    void* eax_1 = *(a1[1] + 0x6e4);

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        *(a1[1] + 0x6e4) = 0;
    }

    int32_t* ebx = sub_4fe730(*a1, "Binocular - Default FOV (degrees)");

    if (!ebx)
        ebx = sub_4fe650(*a1, "Binocular - Default FOV (degrees)", 0x428c0000);

    if (!sub_4fe730(*a1, "Binocular - Max FOV (degrees)"))
        sub_4fe650(*a1, "Binocular - Max FOV (degrees)", 0x42b40000);

    if (!sub_4fe730(*a1, "Binocular - Min FOV (degrees)"))
        sub_4fe650(*a1, "Binocular - Min FOV (degrees)", 0x40a00000);

    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(ebx[0x49] * 0.5f * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    float var_c = /* float var_c = unimplemented  {fstp dword [esp+0x14], st0} */;
    /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [edi+0x124]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_53367c]} */
🚫🚫🚫🚫    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fptan(/* st0_1, c1_1, c2_1 = __fptan(unimplemented  {fptan }) */);
    /* unimplemented  {fptan } */

    if (!c2_1)
        /* unimplemented  {fptan } */

🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    float var_4 = /* float var_4 = unimplemented  {fstp dword [esp+0x1c], st0} */;
    /* unimplemented  {fstp dword [esp+0x1c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [eax+0x124]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_53367c]} */
🚫🚫🚫🚫    long double st0_2;
    bool c1_2;
    bool c2_2;
    st0_2 = __fptan(/* st0_2, c1_2, c2_2 = __fptan(unimplemented  {fptan }) */);
    /* unimplemented  {fptan } */

    if (!c2_2)
        /* unimplemented  {fptan } */

🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    float result = /* float result = unimplemented  {fstp dword [esp+0x18], st0} */;
    /* unimplemented  {fstp dword [esp+0x18], st0} */
    *(a1[1] + 0x6e4) = Mem_Alloc(0xc, 4);
    float* ecx_4 = *(a1[1] + 0x6e4);
    *ecx_4 = var_c;
    ecx_4[1] = result;
    ecx_4[2] = var_4;
    return result;
}
