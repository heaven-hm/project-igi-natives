// IGI native provenance: CombatState_GetContext_482650 - 0x00482650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00482650-CombatState_GetContext_482650.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_482650.h"

void* CombatState_GetContext_482650(void* arg1)

{
    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(0.78539818525314331f);
    __builtin_memset(arg1 + 0x20, 0, 0x18);
    __builtin_memset(arg1 + 0xf0, 0, 0x38);
    *(arg1 + 0x38) = 0x3f800000;
    *(arg1 + 0x3c) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x44) = 0;
    *(arg1 + 0x48) = 0x3f800000;
    *(arg1 + 0x4c) = 0;
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x58) = 0x3f800000;
    *(arg1 + 0x5c) = 0;
    *(arg1 + 0x68) = 0;
    *(arg1 + 0xe8) = 0;
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    *(arg1 + 0x60) = /* *(arg1 + 0x60) = unimplemented  {fstp dword [result_val+0x60], st0} */;
    /* unimplemented  {fstp dword [result_val+0x60], st0} */
    return arg1;
}
