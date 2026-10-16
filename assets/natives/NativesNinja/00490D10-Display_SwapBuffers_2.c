#include "00490D10-Display_SwapBuffers_2.h"
/* 0x00490d10 Display_SwapBuffers_2 full linked: callers=1 callees=12 */
HRESULT sub_490d10(int32_t a1 @ esi, int32_t a2 @ edi, float a3)

{
    int32_t ecx;
    int32_t edx;

    if (*(a3 + 4))
    {
        int32_t eax_2 = Timer_Now();
        edx = *(a3 + 8);
        ecx = *(a3 + 4);
        *a3 = eax_2 - edx - ecx;
    }
    else
    {
        int32_t eax_1;
        eax_1 = Timer_Now();
        *(a3 + 4) = eax_1;
    }

    void* eax_5 = *(a3 + 0x158);

    if (eax_5)
    {
        char eax_6 = sub_4966e0(eax_5, edx, ecx, eax_5);
        *(a3 + 0x29) = eax_6;

        if (!eax_6)
        {
            sub_496e40(*(a3 + 0x158));
            sub_496650(*(a3 + 0x158));
            *(a3 + 0x158) = 0;
        }
        else
        {
            int32_t eax_9;
            int32_t edx_1;
            edx_1 = HIGHD(0x10624dd3 * *a3 * 0x3c);
            eax_9 = LOWD(0x10624dd3 * *a3 * 0x3c);
            int32_t ecx_3 = *(a3 + 0x14);
            uint32_t edx_2 = edx_1 >> 6;

            if (edx_2 != ecx_3)
            {
                int32_t i_1 = edx_2 - ecx_3;
                int32_t i;

                do
                {
                    void var_58;
                    sub_4974a0(&var_58);
                    sub_496e60(*(a3 + 0x158), &var_58);
                    i = i_1;
                    i_1 -= 1;
                    *(a3 + 0x14) += 1;
                } while (i != 1);
            }
        }
    }

    int32_t eax_13 = Timer_Now();
    HRESULT eax_14 = *(a3 + 0xc);
    int32_t ecx_9 = eax_13 - *(a3 + 8) - *(a3 + 4);
    *a3 = ecx_9;

    if (ecx_9 >= eax_14)
    {
        *(a3 + 0x28) = 0;
    label_490e72:
        eax_14 = *(a3 + 0x29);

        if (!eax_14)
        {
            eax_14 = *(a3 + 0x28);

            if (!eax_14)
            {
            label_490e81:
                eax_14 = 0;
                return eax_14;
            }
        }
    }
    else
    {
        int32_t eax_17;
        int32_t edx_8;
        edx_8 = HIGHD(0x10624dd3 * COMBINE(0, *(a3 + 0xb8)) / *(a3 + 0xb4) * ecx_9);
        eax_17 = LOWD(0x10624dd3 * COMBINE(0, *(a3 + 0xb8)) / *(a3 + 0xb4) * ecx_9);
        eax_14 = *(a3 + 0x1c);
        uint32_t edi_2 = edx_8 >> 6;

        if (eax_14 == edi_2)
            goto label_490e72;

        if (eax_14 == 0xffffffff)
        {
            HRESULT eax_18 = sub_490e90(a3, edi_2, 0, a2, a1);

            if (!eax_18)
                return eax_18;
        }
        else if (edi_2 - eax_14 != 1)
        {
            do
            {
                eax_14 = sub_490e90(a3, eax_14 + 1, 0x80000000, a2, a1);

                if (!eax_14)
                    goto label_490e81;

                eax_14 = *(a3 + 0x1c);
            } while (eax_14 != edi_2);
        }
        else
        {
            HRESULT eax_19 = sub_490e90(a3, edi_2, 0, a2, a1);

            if (!eax_19)
                return eax_19;
        }

        eax_14 = sub_490f10(a3);
    }

    eax_14 = 1;
    return eax_14;
}
