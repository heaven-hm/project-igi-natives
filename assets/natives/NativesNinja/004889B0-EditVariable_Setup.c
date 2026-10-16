#include "004889B0-EditVariable_Setup.h"
/* 0x004889b0 EditVariable_Setup full linked: callers=0 callees=4 */
int32_t* sub_4889b0(int80_t a1 @ st0, void* a2)

{
    if (sub_4f16c0(a2 + 0x38))
    {
        sub_4f16e0(a2 + 0x38, a2);
        *(a2 + 0xd8) += a1;
    }

    int32_t* result = sub_4f16c0(a2 + 0x88);

    if (result)
    {
        sub_4f16e0(a2 + 0x88, a2);
🚫🚫🚫        int32_t var_8_2 = /* int32_t var_8_2 = (unimplemented  {fistp qword [esp+0x8], st0}).d */;
        /* unimplemented  {fistp qword [esp+0x8], st0} */
        result = *(a2 + 0xd8) - var_8_2;
        *(a2 + 0xd8) = result;
    }

    return result;
}
