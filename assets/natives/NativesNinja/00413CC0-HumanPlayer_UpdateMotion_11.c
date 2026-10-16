#include "00413CC0-HumanPlayer_UpdateMotion_11.h"
/* 0x00413cc0 HumanPlayer_UpdateMotion_11 full linked: callers=10 callees=1 */
int32_t* HumanPlayer_UpdateMotion_11(int32_t a1 @ esi, int32_t a2 @ edi, void* a3, int32_t a4)

{
    int32_t* a = *(a3 + 8);

    if (*a && a)
    {
        do
        {
            struct collision_set* eax = HumanPlayer_LoadParameters_13(a, a2, a1, __return_addr);

            if (eax && eax->c67c == a4)
                return a;

            a = *a;

            if (!a)
                break;

            if (!*a)
                break;
        } while (a);
    }

    return 0;
}
