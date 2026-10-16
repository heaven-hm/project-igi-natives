#include "004408A0-AlarmControl_LoadParameters.h"
/* 0x004408a0 AlarmControl_LoadParameters full linked: callers=0 callees=6 */
int32_t sub_4408a0(int80_t a1 @ st0, void* a2)

{
    (*((sub_443e80() << 2) + &g_a970e0))(a2);
    *(a2 + 0x2a2) = *(a2 + 0x2a1);
    char eax_3 = *(a2 + 0x190);

    if (eax_3)
    {
        *(a2 + 0x2a0) = 0;
        *(a2 + 0x2a1) = 0;
    }
    else
    {
        eax_3 = *(a2 + 0x240);

        if (!eax_3)
        {
            *(a2 + 0x2a0) = 0;
            *(a2 + 0x2a1) = 0;
        }
        else
        {
            if (sub_4f16c0(a2 + 0x2ac))
            {
                sub_4f16e0(a2 + 0x2ac, a2);
                *(a2 + 0x2a0) = a1;
            }

            if (*(a2 + 0x2a0))
                *(a2 + 0x2a4) = sub_4f1080();

            eax_3 = sub_4f16c0(a2 + 0x2fc);

            if (eax_3)
            {
                int32_t eax_7 = sub_4f16e0(a2 + 0x2fc, a2);
🚫🚫🚫                char var_8_2 = /* char var_8_2 =
                    (unimplemented  {fistp qword [esp+0x10], st0}).b */;
                /* unimplemented  {fistp qword [esp+0x10], st0} */
                *(a2 + 0x2a1) = var_8_2;
                return eax_7;
            }
        }
    }

    return eax_3;
}
