// Original IGI.EXE function: GunM16A2_Init_2 (VA 0x004732F0; static CFG gate PASS, CFG score 1.000).
#include "GunM16A2_Init_2.h"

int32_t GunM16A2_Init_2(int32_t pThis )

{
    int32_t dest_ptr = *(pThis + 8);
    float* base_ptr = *pThis;
    int32_t result_val_2;
    int32_t scratch_val;
    scratch_val = HIGHD(Script_GetArg(*(pThis + 4), dest_ptr));
    result_val_2 = LOWD(Script_GetArg(*(pThis + 4), dest_ptr));
    int32_t result = (result_val_2 - scratch_val) >> 1;
    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(result * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    *base_ptr = /* *base_ptr = unimplemented  {fstp dword [base_ptr], st0} */;
    /* unimplemented  {fstp dword [base_ptr], st0} */
    *(pThis + 8) = dest_ptr + 1;
    return result;
}
