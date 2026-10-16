#include "00422110-MenuScreen_LoadParameters.h"
/* 0x00422110 MenuScreen_LoadParameters full linked: callers=0 callees=4 */
int32_t MenuScreen_LoadParameters(void* a1)

{
    int32_t eax = *(a1 + 0x44);

    if (eax)
    {
        void* eax_1 = Menu_RequestScreen_4(eax);

        if (eax_1)
        {
            if (*(eax_1 + 4) && sub_4f16c0(a1 + 0xac))
                sub_4f16e0(a1 + 0xac, a1);

            *(eax_1 + 4) = 0;
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
