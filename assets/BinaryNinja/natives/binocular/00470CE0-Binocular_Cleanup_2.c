// Original IGI.EXE function: Binocular_Cleanup_2 (VA 0x00470CE0; static CFG gate PASS, CFG score 1.000).
#include "Binocular_Cleanup_2.h"
int32_t Binocular_Cleanup_2(int32_t context )

{
    int32_t* dest_val = context;
    int32_t source_val = dest_val[2];
    float* context_val = *dest_val;
    int32_t data_3;
    int32_t temp_val;
    temp_val = HIGHD(Script_GetArg(dest_val[1], source_val));
    data_3 = LOWD(Script_GetArg(dest_val[1], source_val));
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(((data_3 - temp_val) >> 1) * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    context_val[1] = /* context_val[1] = unimplemented  {fstp dword [context_val+0x4], fp0} */;
    /* unimplemented  {fstp dword [context_val+0x4], fp0} */
    int32_t data_8;
    int32_t temp_1;
    temp_1 = HIGHD(Script_GetArg(dest_val[1], source_val + 1));
    data_8 = LOWD(Script_GetArg(dest_val[1], source_val + 1));
    context = (data_8 - temp_1) >> 1;
🚫🚫    /* unimplemented  {fild fp0, dword [stack_ptr+0x28]} */
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
🚫🚫🚫    context_val[2] = /* context_val[2] = unimplemented  {fstp dword [context_val+0x8], fp0} */;
    /* unimplemented  {fstp dword [context_val+0x8], fp0} */
    int32_t data_12;
    int32_t temp_3;
    temp_3 = HIGHD(Script_GetArg(dest_val[1], source_val + 2));
    data_12 = LOWD(Script_GetArg(dest_val[1], source_val + 2));
    int32_t result = (data_12 - temp_3) >> 1;
    context = result;
🚫🚫    /* unimplemented  {fild fp0, dword [stack_ptr+0x14]} */
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
🚫🚫🚫    *context_val =
    /* unimplemented  {fstp dword [context_val], fp0} */
    dest_val[2] = source_val + 3;
    return result;
}
