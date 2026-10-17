// Original IGI.EXE function: FX_FailedGetMouseStateS (VA 0x0048FC20; static CFG gate PASS, CFG score 1.000).
#include "FX_FailedGetMouseStateS.h"
int32_t FX_FailedGetMouseStateS()

{
    int32_t* data_11 = g_5c8e1c;
    int32_t source_val = 0;
    int32_t item_14;
    int32_t result;

    if (!(*(*data_11 + 0x24))(data_11, 0x14, &item_14))
    {
    label_48fc85:
        g_c28f84 = item_14 * 0.0039215686274509803;
        int32_t item_10;
        g_c28f88 = item_10 * 0.0039215686274509803;

        if (!FX_SmokeEmit_25())
        {
            char item_8;

            if (item_8)
                source_val = 1;

            char item_7;

            if (item_7)
                source_val |= 2;

            char item_6;

            if (item_6)
                source_val |= 4;

            char item_5;

            if (item_5)
                source_val |= 8;

            char item_4;

            if (item_4)
                source_val |= 0x10;

            char item_3;

            if (item_3)
                source_val |= 0x20;

            char item_2;

            if (item_2)
                source_val |= 0x40;

            char item_1;

            if (item_1)
                source_val |= 0x80;

            int32_t result_1;
            result = result_1;

            if (result > 0)
            {
                *g_c28f8c = source_val | 0x100;
                return result;
            }

            if (result < 0)
                source_val |= 0x200;
        }
        else
        {
            if (g_5c8e10)
                source_val = 1;

            if (g_5c8e0c)
                source_val |= 2;

            if (g_5c8e18)
                source_val |= 4;

            result = g_5c8e08;
            bool flag_0_1 = result >= 0;

            if (result > 0)
            {
                source_val |= 0x100;
                result -= 1;
                g_5c8e08 = result;
                flag_0_1 = result >= 0;
            }

            if (!flag_0_1)
            {
                g_5c8e08 = result + 1;
                *g_c28f8c = source_val | 0x200;
                return result + 1;
            }
        }

        *g_c28f8c = source_val;
    }
    else
    {
        int32_t* data_1 = g_5c8e1c;
        result = (*(*data_1 + 0x1c))(data_1);

        if (!result)
        {
            int32_t* data_2 = g_5c8e1c;
            int32_t data_3 = (*(*data_2 + 0x24))(data_2, 0x14, &item_14);

            if (data_3)
            {
                int32_t item_20 = DIERR_GENERIC(data_3);
                Error_Show("Failed get mouse state: %s");

                while (true)
                    /* nop */
            }

            goto label_48fc85;
        }
    }

    return result;
}
