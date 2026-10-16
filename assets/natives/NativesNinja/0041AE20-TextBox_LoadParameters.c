#include "0041AE20-TextBox_LoadParameters.h"
/* 0x0041ae20 TextBox_LoadParameters full linked: callers=0 callees=3 */
int32_t TextBox_LoadParameters(int80_t a1 @ st0, void* a2)

{
    if (sub_4f16c0(a2 + 0x21f4))
    {
        sub_4f16e0(a2 + 0x21f4, a2);
        int32_t ecx_1 = *(a2 + 0x21a0);
        int32_t eax_1 = 0;

        if (ecx_1 > 0)
        {
            int32_t* edx_1 = a2 + 0x19c;

            do
            {
                if (a1 == *edx_1)
                {
                    *(a2 + 0x219c) = eax_1;
                    break;
                }

                eax_1 += 1;
                edx_1 = &edx_1[0x42];
            } while (eax_1 < ecx_1);
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a2);
}
