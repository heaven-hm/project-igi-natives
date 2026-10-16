#include "0048FC20-FX_FailedGetMouseStateS.h"
/* 0x0048fc20 FX_FailedGetMouseStateS full linked: callers=1 callees=3 */
int32_t sub_48fc20()

{
    int32_t* eax_11 = g_5c8e1c;
    int32_t esi = 0;
    int32_t var_14;
    int32_t result;

    if (!(*(*eax_11 + 0x24))(eax_11, 0x14, &var_14))
    {
    label_48fc85:
        g_c28f84 = var_14 * 0.0039215686274509803;
        int32_t var_10;
        g_c28f88 = var_10 * 0.0039215686274509803;

        if (!sub_48f270())
        {
            char var_8;

            if (var_8)
                esi = 1;

            char var_7;

            if (var_7)
                esi |= 2;

            char var_6;

            if (var_6)
                esi |= 4;

            char var_5;

            if (var_5)
                esi |= 8;

            char var_4;

            if (var_4)
                esi |= 0x10;

            char var_3;

            if (var_3)
                esi |= 0x20;

            char var_2;

            if (var_2)
                esi |= 0x40;

            char var_1;

            if (var_1)
                esi |= 0x80;

            int32_t result_1;
            result = result_1;

            if (result > 0)
            {
                *g_c28f8c = esi | 0x100;
                return result;
            }

            if (result < 0)
                esi |= 0x200;
        }
        else
        {
            if (g_5c8e10)
                esi = 1;

            if (g_5c8e0c)
                esi |= 2;

            if (g_5c8e18)
                esi |= 4;

            result = g_5c8e08;
            bool cond:0_1 = result >= 0;

            if (result > 0)
            {
                esi |= 0x100;
                result -= 1;
                g_5c8e08 = result;
                cond:0_1 = result >= 0;
            }

            if (!cond:0_1)
            {
                g_5c8e08 = result + 1;
                *g_c28f8c = esi | 0x200;
                return result + 1;
            }
        }

        *g_c28f8c = esi;
    }
    else
    {
        int32_t* eax_1 = g_5c8e1c;
        result = (*(*eax_1 + 0x1c))(eax_1);

        if (!result)
        {
            int32_t* eax_2 = g_5c8e1c;
            int32_t eax_3 = (*(*eax_2 + 0x24))(eax_2, 0x14, &var_14);

            if (eax_3)
            {
                int32_t var_20 = sub_48fa80(eax_3);
                Error_Show("Failed get mouse state: %s");

                while (true)
                    /* nop */
            }

            goto label_48fc85;
        }
    }

    return result;
}
