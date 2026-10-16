#include "0043B500-Generator_LoadParameters.h"
/* 0x0043b500 Generator_LoadParameters full linked: callers=0 callees=8 */
struct status_msg* Generator_LoadParameters(int80_t a1 @ st0, void* a2)

{
    int32_t ebp = *(a2 + 0x23c);
    (*((sub_481340() << 2) + &g_a970e0))(a2);

    if (*(a2 + 0x190))
        *(a2 + 0x23c) = 0;
    else if (sub_4f16c0(a2 + 0x240))
    {
        sub_4f16e0(a2 + 0x240, a2);
        *(a2 + 0x23c) = a1;
    }

    if (*(a2 + 0x2b4))
    {
        if (!*(a2 + 0x23c) && *(a2 + 0x2b8) == 0xffffffff)
        {
🚫🚫            /* unimplemented  {fld st0, dword [esi+0x2b0]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_5333bc]} */
🚫🚫🚫            int32_t var_8_2 = /* int32_t var_8_2 =
                (unimplemented  {fistp qword [esp+0xc], st0}).d */;
            /* unimplemented  {fistp qword [esp+0xc], st0} */
            *(a2 + 0x2b8) = var_8_2;
        }

        int32_t eax_9 = *(a2 + 0x2b8);

        if (eax_9 <= 0)
            *(a2 + 0x23c) = 1;
        else
            *(a2 + 0x2b8) = eax_9 - 1;
    }

    struct status_msg* result = *(a2 + 0x238);

    if (!*(a2 + 0x23c))
    {
        if (result)
        {
            result = sub_4e6c00(result);
            *(a2 + 0x238) = 0;
        }

        if (ebp)
        {
            result = sub_4e6b00(a2, a2 + 0x2a0);

            if (result)
                return sub_4e6c30(result, a2 + 0x20);
        }
    }
    else if (!result)
    {
        result = a2 + 0x290;

        if (*(a2 + 0x290))
        {
            result = sub_4e6b00(a2, result);
            *(a2 + 0x238) = result;

            if (result)
                return sub_4e6c30(result, a2 + 0x20);
        }
    }

    return result;
}
