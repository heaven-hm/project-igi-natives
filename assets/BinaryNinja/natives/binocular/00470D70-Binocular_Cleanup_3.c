// Original IGI.EXE function: Binocular_Cleanup_3 (VA 0x00470D70; static CFG gate PASS, CFG score 1.000).
#include "Binocular_Cleanup_3.h"
float Binocular_Cleanup_3(int32_t* context ) {
    void* data_1 = *(context[1] + 0x6e4);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(context[1] + 0x6e4) = 0;
    }

    int32_t* context_val = Script_FormatString_31(*context, "Binocular - Default FOV (degrees)");

    if (!context_val)
        context_val = Script_CallNativeHandler_31(*context, "Binocular - Default FOV (degrees)", 0x428c0000);

    if (!Script_FormatString_31(*context, "Binocular - Max FOV (degrees)"))
        Script_CallNativeHandler_31(*context, "Binocular - Max FOV (degrees)", 0x42b40000);

    if (!Script_FormatString_31(*context, "Binocular - Min FOV (degrees)"))
        Script_CallNativeHandler_31(*context, "Binocular - Min FOV (degrees)", 0x40a00000);

    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(context_val[0x49] * 0.5f * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float item_c = /* float item_c = unimplemented  {fstp dword [stack_ptr+0x14], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x14], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [dest_val+0x124]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
🚫🚫🚫🚫    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fptan(/* fp0_1, c1_1, c2_1 = __fptan(unimplemented  {fptan }) */);
    /* unimplemented  {fptan } */

    if (!c2_1)
        /* unimplemented  {fptan } */

🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float item_4 = /* float item_4 = unimplemented  {fstp dword [stack_ptr+0x1c], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x1c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [data_val+0x124]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
🚫🚫🚫🚫    long double fp0_2;
    bool c1_2;
    bool c2_2;
    fp0_2 = __fptan(/* fp0_2, c1_2, c2_2 = __fptan(unimplemented  {fptan }) */);
    /* unimplemented  {fptan } */

    if (!c2_2)
        /* unimplemented  {fptan } */

🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float result = /* float result = unimplemented  {fstp dword [stack_ptr+0x18], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x18], fp0} */
    *(context[1] + 0x6e4) = Mem_Alloc(0xc, 4);
    float* entity_4 = *(context[1] + 0x6e4);
    *entity_4 = item_c;
    entity_4[1] = result;
    entity_4[2] = item_4;
    return result;
}
