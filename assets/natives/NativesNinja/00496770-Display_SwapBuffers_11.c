#include "00496770-Display_SwapBuffers_11.h"
/* 0x00496770 Display_SwapBuffers_11 full linked: callers=3 callees=3 */
int32_t sub_496770(int32_t a1, int32_t a2, int32_t a3, int32_t* a4)

{
    if (!g_6840e9)
        return 0;

    int32_t* __saved_ebp_4 = a4;

    if (!__saved_ebp_4)
    {
        void var_58;
        sub_4974a0(&var_58);
        __saved_ebp_4 = &var_58;
        a4 = &var_58;
    }

    int32_t* __saved_ebp_2 = __saved_ebp_4;
    int32_t result = sub_496860(a1, a2, a3);

    if (!result)
        return result;

    sub_496e60(result, __saved_ebp_4);
    void* ecx_1 = *(result + 0xc);
    int16_t eax_2 = *(ecx_1 + 0x14);

    if (eax_2 == 2 || !eax_2)
    {
        int32_t* eax_12 = *(result + 0x10);
        (*(*eax_12 + 0x30))(eax_12, 0, 0, 1);
        return result;
    }

    int32_t eax_6;
    int32_t edx_2;
    edx_2 = HIGHD(*(ecx_1 + 0x18) * *(ecx_1 + 0x16) * *(ecx_1 + 0x1c));
    eax_6 = LOWD(*(ecx_1 + 0x18) * *(ecx_1 + 0x16) * *(ecx_1 + 0x1c));
    int32_t* ebx = *(result + 0x10);
    (*(*ebx + 0x34))(ebx, ((eax_6 + (edx_2 & 7)) >> 3) * a4[0x14]);
    int32_t* eax_10 = *(result + 0x10);
    (*(*eax_10 + 0x30))(eax_10, 0, 0, a3 >> 4 & 1);
    return result;
}
