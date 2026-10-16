#include "00485B80-StatusMessageScreen_OnEvent.h"
/* 0x00485b80 StatusMessageScreen_OnEvent full linked: callers=1 callees=7 */
int32_t sub_485b80(int32_t a1, int32_t a2)

{
    void* eax = sub_485d00(a1, a2);

    if (!eax)
        return sub_485d20(a1, a2);

    int32_t eax_2 = a2 * 3;
    void* edi;

    if (*(eax + 0x1c6))
    {
        int32_t ecx_2 = ((eax_2 << 3) - a2) * 0x2d;
        edi = a1 + (ecx_2 << 2);

        if (!*(a1 + (ecx_2 << 2) + 0x28))
        {
            int32_t var_1c_2 = ecx_2;
            sub_485db0(a1, a2, g_c28b44 * 0.96875f);
        }

        if (*(edi + 0x28) > *(eax + 0x1d8) * 30f)
            sub_485d20(a1, a2);

        *(edi + 0x28) += 1;
    }
    else
    {
        int32_t eax_6 = ((eax_2 << 3) - a2) * 0x2d;
        edi = a1 + (eax_6 << 2);
        int32_t eax_7 = *(a1 + (eax_6 << 2) + 0x24);

        if (eax_7 < 9)
        {
            if (eax_7 >= 2)
            {
                *(edi + 0x44) = *(edi + 0x44) + 0.142857149f;
                int32_t eax_11 = *(edi + 0x24) + 1;
                *(edi + 0x24) = eax_11;
                return eax_11;
            }

            *(edi + 0x48) = *(edi + 0x48) + 0.5f;
            int32_t eax_9 = *(edi + 0x24) + 1;
            *(edi + 0x24) = eax_9;
            return eax_9;
        }

        char* ecx = *(edi + 0x2c);

        if (!*ecx)
        {
            int32_t edx_2 = *(edi + 0x28) + 1;
            *(edi + 0x28) = edx_2;

            if (edx_2 > *(eax + 0x1d8) * 30f)
            {
                sub_485d20(a1, a2);
                int32_t eax_21 = *(edi + 0x24) + 1;
                *(edi + 0x24) = eax_21;
                return eax_21;
            }
        }
        else
        {
            int32_t eax_13 = (eax_7 - 9) & 0x80000001;
            bool cond:2_1 = eax_13;

            if (eax_13 < 0)
                cond:2_1 = ((eax_13 - 1) | 0xfffffffe) != 0xffffffff;

            if (!cond:2_1)
            {
                *(edi + 0x2c) = &ecx[1];
                sub_485db0(a1, a2, 229f);
                int32_t eax_18 = *(edi + 0x24) + 1;
                *(edi + 0x24) = eax_18;
                return eax_18;
            }
        }
    }

    int32_t eax_28 = *(edi + 0x24) + 1;
    *(edi + 0x24) = eax_28;
    return eax_28;
}
