#include "0040FA80-HumanPlayer_UpdateAnimation_8.h"
/* 0x0040fa80 HumanPlayer_UpdateAnimation_8 full linked: callers=0 callees=4 */
int32_t HumanPlayer_UpdateAnimation_8(int32_t a1 @ edi, void* a2, struct human_player* a3)

{
    void* a = Table_GetAt(&a3->stance_data, 0);
    HumanPlayer_LoadParameters_13(a);
    void var_8;
    int32_t result = sub_4f23d0(a, &var_8);
    long double x87_r7 = a3->pad0[0x1c8];
    long double temp0 = 0f;
    x87_r7 - temp0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40) && a3->stance < 3)
        a3->stance_data[0xd] = 1;

    result = a3->stance_data[0xf];
    char ebx = *(a2 + 8);

    if (result)
    {
        HumanPlayer_CheckCollision_9(a3, 1.12103877e-44f);
        result = a3->stance + 1;
        a3->stance = result;
    }

    if (!(ebx & 1))
        return result;

    void* eax_2 = *(a2 + 4);
    *(a2 + 0xc) = *(a2 + 0x10);
    *(a2 + 0x10) = 1;
    int32_t eax_3 = *(eax_2 + 4);
    *(a2 + 0x14) = eax_3;
    return eax_3(a2, a3, a1);
}
