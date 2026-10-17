// IGI native provenance: HumanAI_Invoke22_4643A0 - 0x004643A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004643A0-HumanAI_Invoke22_4643A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke22_4643A0.h"

void* HumanAI_Invoke22_4643A0(void* arg1)

{
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xd9) = 0;
    AI_UpdateOrders_22(arg1);
    __builtin_memset(arg1 + 0x180, 0, 0x19);
    *(arg1 + 0x138) = 0;
    *(arg1 + 0x139) = 1;
    *(arg1 + 0x13a) = 0;
    __builtin_memset(arg1 + 0x19c, 0, 0x1c);
    *(arg1 + 0x1c4) = 0;
    void* result = AI_AlertAllies_22(arg1);
    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(0.78539818525314331f);
    *(arg1 + 0x1ec) = 0;
    *(arg1 + 0x20c) = 0xffffffff;
    *(arg1 + 0x320) = 0;
    *(arg1 + 0x324) = 0;
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    *(arg1 + 0x1e4) = /* *(arg1 + 0x1e4) = unimplemented  {fstp dword [source_ptr+0x1e4], st0} */;
    /* unimplemented  {fstp dword [source_ptr+0x1e4], st0} */
🚫🚫    /* unimplemented  {fld st0, qword [&g_5339c0]} */
🚫🚫🚫🚫    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fptan(/* st0_1, c1_1, c2_1 = __fptan(unimplemented  {fptan }) */);
    /* unimplemented  {fptan } */

    if (!c2_1)
        /* unimplemented  {fptan } */

🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    *(arg1 + 0x1e8) = /* *(arg1 + 0x1e8) = unimplemented  {fstp dword [source_ptr+0x1e8], st0} */;
    /* unimplemented  {fstp dword [source_ptr+0x1e8], st0} */
    return result;
}
