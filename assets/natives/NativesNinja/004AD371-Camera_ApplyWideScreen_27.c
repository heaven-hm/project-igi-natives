#include "004AD371-Camera_ApplyWideScreen_27.h"
/* 0x004ad371 Camera_ApplyWideScreen_27 full linked: callers=3 callees=5 */
int32_t sub_4ad371(int32_t a1, int32_t* a2, uint32_t a3)

{
    uint32_t ecx = *a3;
    int32_t eax_1 = *a2;
    a3 = ecx;
    int32_t var_6c_1;

    if (eax_1 == 1)
    {
    label_4ad3b6:
        var_6c_1 = 8;
    label_4ad3bf:

        if (!sub_4a8372(var_6c_1, &a2[6], ecx))
        {
            int32_t var_24;

            if (a1 == 0x10 || a1 == 0x16 || a1 == 0x1d)
            {
                double var_34_1 = *(a2 + 0x10);
                int32_t var_24_2 = (var_24 & 0xffffffe3) | 3;
            }
            else
                int32_t var_24_1 = var_24 & 0xfffffffe;
            void var_5c;
            sub_4a80bf(&var_5c, &a3, var_6c_1, a1, &a2[2], &a2[6]);
            /* no return */
        }
    }
    else
    {
        if (eax_1 == 2)
        {
            var_6c_1 = 4;
            goto label_4ad3bf;
        }

        if (eax_1 == 3)
        {
            var_6c_1 = 0x11;
            goto label_4ad3bf;
        }

        if (eax_1 == 4)
        {
            var_6c_1 = 0x12;
            goto label_4ad3bf;
        }

        if (eax_1 == 5)
            goto label_4ad3b6;

        if (eax_1 == 7)
            *a2 = 1;
        else if (eax_1 == 8)
        {
            var_6c_1 = 0x10;
            goto label_4ad3bf;
        }
    }
    int16_t x87control;
    sub_4a87fc(x87control, a3, 0xffff);

    if (*a2 != 8 && !g_546af0)
    {
        int32_t* var_6c_4 = a2;
        sub_4ad36e();
    }

    return sub_4a8611(*a2);
}
