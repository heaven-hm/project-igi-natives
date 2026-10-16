#include "004966E0-Display_SyncVSync_11.h"
/* 0x004966e0 Display_SyncVSync_11 full linked: callers=3 callees=1 */
int32_t __convention("regparm") sub_4966e0(int32_t a1, int32_t a2, int32_t a3, void* a4)

{
    int32_t var_4 = a3;
    a1 = g_6840e9;
    var_4 = 0;

    if (a1)
    {
        int16_t eax_1 = *(*(a4 + 0xc) + 0x14);

        if (eax_1 == 2 || !eax_1)
        {
            int32_t eax_4 = *(a4 + 0x3c);
            eax_4 = eax_4 != 2;
            return eax_4;
        }

        int32_t* eax_2 = *(a4 + 0x10);
        a1 = (*(*eax_2 + 0x24))(eax_2, &var_4);

        if (!a1)
        {
            a1 = var_4;

            if (!(a1 & 2))
            {
                if (a1 & 1)
                {
                    a1 = 1;
                    return a1;
                }
            }
            else if (a1 & 4)
            {
                a1 = sub_4964a0(a4, *(a4 + 0xc), 1);

                if (a1)
                {
                    int32_t* esi_2 = *(a4 + 0x10);
                    a1 = (*(*esi_2 + 0x30))(esi_2, 0, 0, 1);

                    if (!a1)
                    {
                        a1 = 1;
                        return a1;
                    }
                }
            }
        }
    }

    a1 = 0;
    return a1;
}
