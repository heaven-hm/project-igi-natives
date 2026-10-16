#include "gi_platform.h"
#include "004B46A0-Sys_PopStack_13.h"
int32_t Sys_PopStack_13()

{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t i = 0;
    int32_t i_2 = 0;
    int16_t top_1;

    do
    {
        long double x87_r7_1 = i_2;
        i += 1;
        i_2 = i;
        long double x87_r7_2 = x87_r7_1 * 0.00153398083.0f;
        long double fp0_1;
        bool c1_1;
        bool c2_1;
        fp0_1 = __fsin(x87_r7_2);
        *((i << 2) + &g_a88a5c) = fp0_1;
        long double fp0_2;
        bool c1_2;
        bool c2_2;
        fp0_2 = __fcos(x87_r7_2);
        *((i << 2) + &g_a84a5c) = fp0_2;
        top_1 = 0;
    } while (i < 0x1000);

    int32_t v_4 = 0;
    int32_t result;

    for (float* i_1 = &g_a8ca60; i_1 < &g_a94a64; )
    {
🚫🚫        /* unimplemented  {fild fp0, dword [esp+0x4]} */
        int32_t v_c_1 = objC;
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5333e8]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [&g_5333e0]} */
🚫🚫🚫        float v_c_2 = /* float v_c_2 = unimplemented  {fstp dword [esp], fp0} */;
        /* unimplemented  {fstp dword [esp], fp0} */
🚫🚫        result = Sys_PushStack_9(v_c_2);
        /* unimplemented  {call Sys_PushStack_9} */
🚫🚫🚫        *i_1 =
        /* unimplemented  {fstp dword [srcS], fp0} */
        top_1 += 1;
        i_1 = &i_1[1];
        v_4 += 1;
    }

    return result;
}
