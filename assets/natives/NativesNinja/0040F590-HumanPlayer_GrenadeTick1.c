#include "0040F590-HumanPlayer_GrenadeTick1.h"
/* 0x0040f590 HumanPlayer_GrenadeTick1 full linked: callers=0 callees=4 */
struct status_msg* HumanPlayer_GrenadeTick1(void* a1, void* a2)

{
    void* edi = *(a2 + 0x4ec);
    struct collision_set* eax_2 = HumanPlayer_LoadParameters_13(Table_GetAt(a2 + 0x4c4, 0));
    struct status_msg* result = *(edi + 0x20c);

    if (result == 4)
    {
        void* ecx_1 = *(a2 + 0x4ec);
        *(a2 + 0x4d8) = 1;
        result = sub_4e6b00(ecx_1, "grenade_tick_1");
        *(a2 + 0x4e4) = result;
    }

    result = *(a2 + 0x4d8);

    if (result)
        *(a2 + 0x4e0) += 1;

    if (*(a1 + 8) & 1)
    {
        long double x87_r7_1 = *(a2 + 0x1c8);
        long double temp0_1 = 0f;
        x87_r7_1 - temp0_1;
        result = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            result = sub_4d61d0(edi + 0x68, 0, *(eax_2 + 0x688), 0, 0f);
            *(a1 + 0x14) = HumanPlayer_UpdateStamina_8;
        }
    }

    return result;
}
