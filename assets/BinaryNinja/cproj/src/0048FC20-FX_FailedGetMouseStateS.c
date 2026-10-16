#include "gi_platform.h"
#include "0048FC20-FX_FailedGetMouseStateS.h"
int32_t FX_FailedGetMouseStateS()

{
    int32_t* valA11 = g_5c8e1c;
    int32_t srcS = 0;
    int32_t v_14;
    int32_t result;

    if (!((int(*)())(uintptr_t)(*(*valA11 + 0x24)))(valA11, 0x14, &v_14))
    {
    label_48fc85: ;
        g_c28f84 = v_14 * 0.0039215686274509803;
        int32_t v_10;
        g_c28f88 = v_10 * 0.0039215686274509803;

        if (!FX_SmokeEmit_25())
        {
            char v_8;

            if (v_8)
                srcS = 1;

            char v_7;

            if (v_7)
                srcS |= 2;

            char v_6;

            if (v_6)
                srcS |= 4;

            char v_5;

            if (v_5)
                srcS |= 8;

            char v_4;

            if (v_4)
                srcS |= 0x10;

            char v_3;

            if (v_3)
                srcS |= 0x20;

            char v_2;

            if (v_2)
                srcS |= 0x40;

            char v_1;

            if (v_1)
                srcS |= 0x80;

            int32_t result_1;
            result = result_1;

            if (result > 0)
            {
                *g_c28f8c = srcS | 0x100;
                return result;
            }

            if (result < 0)
                srcS |= 0x200;
        }
        else
        {
            if (g_5c8e10)
                srcS = 1;

            if (g_5c8e0c)
                srcS |= 2;

            if (g_5c8e18)
                srcS |= 4;

            result = g_5c8e08;
            bool cond_0_1 = result >= 0;

            if (result > 0)
            {
                srcS |= 0x100;
                result -= 1;
                g_5c8e08 = result;
                cond_0_1 = result >= 0;
            }

            if (!cond_0_1)
            {
                g_5c8e08 = result + 1;
                *g_c28f8c = srcS | 0x200;
                return result + 1;
            }
        }

        *g_c28f8c = srcS;
    }
    else
    {
        int32_t* valA1 = g_5c8e1c;
        result = ((int(*)())(uintptr_t)(*(*valA1 + 0x1c)))(valA1);

        if (!result)
        {
            int32_t* valA2 = g_5c8e1c;
            int32_t valA3 = ((int(*)())(uintptr_t)(*(*valA2 + 0x24)))(valA2, 0x14, &v_14);

            if (valA3)
            {
                int32_t v_20 = DIERR_GENERIC(valA3);
                Error_Show("Failed get mouse state: %s");

                while (true)
                    /* nop */
            }

            goto label_48fc85;
        }
    }

    return result;
}
