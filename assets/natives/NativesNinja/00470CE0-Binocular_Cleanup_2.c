#include "00470CE0-Binocular_Cleanup_2.h"
/* 0x00470ce0 Binocular_Cleanup_2 full linked: callers=0 callees=3 */
int32_t sub_470ce0(int32_t a1 @ 0x8)

{
    int32_t* edi = a1;
    int32_t esi = edi[2];
    float* ebx = *edi;
    int32_t eax_3;
    int32_t edx;
    edx = HIGHD(sub_4b8a20(edi[1], esi));
    eax_3 = LOWD(sub_4b8a20(edi[1], esi));
    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(((eax_3 - edx) >> 1) * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    ebx[1] = /* ebx[1] = unimplemented  {fstp dword [ebx+0x4], st0} */;
    /* unimplemented  {fstp dword [ebx+0x4], st0} */
    int32_t eax_8;
    int32_t edx_1;
    edx_1 = HIGHD(sub_4b8a20(edi[1], esi + 1));
    eax_8 = LOWD(sub_4b8a20(edi[1], esi + 1));
    a1 = (eax_8 - edx_1) >> 1;
🚫🚫    /* unimplemented  {fild st0, dword [esp+0x28]} */
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
🚫🚫🚫    ebx[2] = /* ebx[2] = unimplemented  {fstp dword [ebx+0x8], st0} */;
    /* unimplemented  {fstp dword [ebx+0x8], st0} */
    int32_t eax_12;
    int32_t edx_3;
    edx_3 = HIGHD(sub_4b8a20(edi[1], esi + 2));
    eax_12 = LOWD(sub_4b8a20(edi[1], esi + 2));
    int32_t result = (eax_12 - edx_3) >> 1;
    a1 = result;
🚫🚫    /* unimplemented  {fild st0, dword [esp+0x14]} */
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
🚫🚫🚫    *ebx = /* *ebx = unimplemented  {fstp dword [ebx], st0} */;
    /* unimplemented  {fstp dword [ebx], st0} */
    edi[2] = esi + 3;
    return result;
}
