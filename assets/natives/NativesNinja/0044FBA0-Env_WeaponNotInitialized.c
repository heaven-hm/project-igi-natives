#include "0044FBA0-Env_WeaponNotInitialized.h"
/* 0x0044fba0 Env_WeaponNotInitialized full linked: callers=1 callees=7 */
void sub_44fba0(void* a1 @ ebp, int32_t a2 @ esi, int32_t a3 @ edi, void* a4)

{
    void* ebx = *(a4 + 0x14);
    int32_t* a = *(ebx + 8);

    if (!*a || !a)
        return;

    do
    {
        int32_t eax_1 = sub_477bf0();
        int16_t var_1c_1 = eax_1;
        eax_1 = a[7];

        if (TaskType_IsDerivedFrom(eax_1, var_1c_1))
        {
            struct collision_set* eax_2 = HumanPlayer_LoadParameters_13(a, a3, a2, a1);

            if (eax_2)
            {
                int32_t eax = *(eax_2 + 0x610);

                if (eax >= 0)
                {
                    if (eax <= 2)
                    {
                        *(a4 + 0x3dfc) = 1;
                        *(a4 + 0x3e00) = eax_2->c67c;
                        sub_4f2070(ebx + 0x4c4, nullptr, a);
                    }
                    else if (eax == 4)
                    {
                        long double x87_r7_2 = **(sub_4ee140(eax_2 + 0x61c) + 0x2d4) * 30f;
                        *(a4 + 0x3dfd) = 1;
                        *(a4 + 0x3e08) = x87_r7_2;
                        *(a4 + 0x3e04) = eax_2->c67c;
                    }
                }
            }
            else
            {
                int32_t var_20_2 = sub_4f1050(ebx);
                Warning_Show("Weapon not initialized, human #%d");
            }
        }

        a = *a;

        if (!a)
            break;

        if (!*a)
            break;
    } while (a);
}
