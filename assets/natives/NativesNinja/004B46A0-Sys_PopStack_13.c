#include "004B46A0-Sys_PopStack_13.h"
/* 0x004b46a0 Sys_PopStack_13 full linked: callers=1 callees=1 */
int32_t sub_4b46a0()

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t i = 0;
    int32_t i_2 = 0;
    int16_t top_1;

    do
    {
        long double x87_r7_1 = i_2;
        i += 1;
        i_2 = i;
        long double x87_r7_2 = x87_r7_1 * 0.00153398083f;
        long double st0_1;
        bool c1_1;
        bool c2_1;
        st0_1 = __fsin(x87_r7_2);
        *((i << 2) + &g_a88a5c) = st0_1;
        long double st0_2;
        bool c1_2;
        bool c2_2;
        st0_2 = __fcos(x87_r7_2);
        *((i << 2) + &g_a84a5c) = st0_2;
        top_1 = 0;
    } while (i < 0x1000);

    int32_t var_4 = 0;
    int32_t result;

    for (float* i_1 = &g_a8ca60; i_1 < &g_a94a64; )
    {
🚫🚫        /* unimplemented  {fild st0, dword [esp+0x4]} */
        int32_t var_c_1 = ecx;
🚫🚫        /* unimplemented  {fmul st0, dword [&g_5333e8]} */
🚫🚫        /* unimplemented  {fsub st0, dword [&g_5333e0]} */
🚫🚫🚫        float var_c_2 = /* float var_c_2 = unimplemented  {fstp dword [esp], st0} */;
        /* unimplemented  {fstp dword [esp], st0} */
🚫🚫        result = sub_4b27d0(var_c_2);
        /* unimplemented  {call sub_4b27d0} */
🚫🚫🚫        *i_1 = /* *i_1 = unimplemented  {fstp dword [esi], st0} */;
        /* unimplemented  {fstp dword [esi], st0} */
        top_1 += 1;
        i_1 = &i_1[1];
        var_4 += 1;
    }

    return result;
}
