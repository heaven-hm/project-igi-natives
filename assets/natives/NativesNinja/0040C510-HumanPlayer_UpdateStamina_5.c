#include "0040C510-HumanPlayer_UpdateStamina_5.h"
/* 0x0040c510 HumanPlayer_UpdateStamina_5 full linked: callers=0 callees=14 */
int32_t HumanPlayer_UpdateStamina_5(void* a1, int32_t a2)

{
    void* eax = sub_4636e0(a2);
    int32_t eax_1 = *(a2 + 0xd74);
    char ebx = 0;

    if (!eax_1)
    {
        if (*(a1 + 8) & 1)
        {
            sub_489ea0(a2, 0x55, 1, 0f);
            *(a2 + 0xd74) = 1;
        }
    }
    else if (eax_1 == 1)
    {
        int32_t eax_3 = sub_4d7040(0, 0x53);

        if (*(a2 + 0xd64) > *(a2 + 0xd60) - eax_3 * 0.000208333338f * 30f)
        {
            sub_489ea0(a2, 0x53, 0, 0.200000003f);
            *(a2 + 0xd74) = 2;
        }
    }

    long double x87_r7_4 = *(a2 + 0x1d4);
    long double temp2 = 0f;
    x87_r7_4 - temp2;

    if (*(&((x87_r7_4 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp2 ? 1 : 0) << 0xe) + 1) & 0x40)
        ebx = 1;

    if (*(a1 + 8) & 0x20000)
        ebx = 1;

    int32_t result = *(a2 + 0xd64);
    int32_t ecx_3 = *(a2 + 0xd60);

    if (result < ecx_3)
    {
        result += 1;
        *(a2 + 0xd64) = result;
    }

    if (*(a2 + 0xd64) != ecx_3)
    {
        if (!ebx)
            return result;

        sub_444ba0(eax);
    }
    else if (ebx)
        sub_444ba0(eax);
    else
        sub_444b90(eax);

    HumanPlayer_LoadParameters_6(a2);
    sub_464710(*(a2 + 0x4ec));
    sub_463600(a2);
    sub_463620(a2);
    sub_4636a0(a2, nullptr);
    Human_ViewCam(a2, 1);
    HumanPlayer_UpdateMotion_5(a2);
    sub_4635a0(a2);
    int32_t* ecx_4 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_7 = *ecx_4;
    *(a1 + 0x14) = eax_7;
    return eax_7(a1, a2);
}
