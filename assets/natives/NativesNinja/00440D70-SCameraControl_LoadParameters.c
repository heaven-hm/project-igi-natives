#include "00440D70-SCameraControl_LoadParameters.h"
/* 0x00440d70 SCameraControl_LoadParameters full linked: callers=0 callees=3 */
char sub_440d70(int80_t a1 @ st0, void* a2)

{
    (*((sub_443e80() << 2) + &g_a970e0))(a2);
    char eax_4 = *(a2 + 0x190);

    if (eax_4)
        *(a2 + 0x2a0) = 0;
    else
    {
        eax_4 = sub_4f16c0(a2 + 0x2a4);

        if (eax_4)
        {
            sub_4f16e0(a2 + 0x2a4, a2);
            char var_8 = a1;
            *(a2 + 0x2a0) = var_8;
            return var_8;
        }
    }

    return eax_4;
}
