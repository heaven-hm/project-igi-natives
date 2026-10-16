#include "004A881F-Camera_SetFieldOfView_14.h"
/* 0x004a881f Camera_SetFieldOfView_14 full linked: callers=5 callees=0 */
void sub_4a881f(int80_t a1 @ st0, char a2)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    char ecx_1 = a2;
    int16_t top;
    bool c1;

    if (ecx_1 & 1)
    {
        g_544390;
        a2 = a1;
        top = 1;
        c1 = /* c1 = unknown  {fistp dword [ebp+0x8], st0} */;
    }

    if (ecx_1 & 8)
    {
        int32_t eax;
        bool c0;
        bool c2;
        bool c3;
        eax = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (top & 7) << 0xb;
🚫🚫        /* unimplemented  {fld st0, tword [&g_544390]} */
🚫🚫🚫        int64_t temp1_1 = /* int64_t temp1_1 = unimplemented  {fstp qword [ebp-0x8], st0} */;
        /* unimplemented  {fstp qword [ebp-0x8], st0} */
        var_c = temp1_1;
        bool c1_1 = /* bool c1_1 = unknown  {fstp qword [ebp-0x8], st0} */;
        eax = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (top & 7) << 0xb;
    }

    if (ecx_1 & 0x10)
    {
🚫🚫        /* unimplemented  {fld st0, tword [&g_54439c]} */
🚫🚫🚫        var_c = /* var_c.q = unimplemented  {fstp qword [ebp-0x8], st0} */;
        /* unimplemented  {fstp qword [ebp-0x8], st0} */
    }

    if (ecx_1 & 4)
    {
🚫🚫        /* unimplemented  {fldz } */
🚫🚫        /* unimplemented  {fld1 } */
🚫🚫🚫        /* unimplemented  {fdivrp st1, st0} */
        /* unimplemented  {fdivrp st1, st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
    }

    if (!(ecx_1 & 0x20))
        return;

🚫🚫    /* unimplemented  {fldpi } */
🚫🚫🚫    var_c = /* var_c.q = unimplemented  {fstp qword [ebp-0x8], st0} */;
    /* unimplemented  {fstp qword [ebp-0x8], st0} */
}
