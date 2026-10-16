#include "004A8027-Camera_ApplyWideScreen_12.h"
/* 0x004a8027 Camera_ApplyWideScreen_12 full linked: callers=2 callees=6 */
long double sub_4a8027(int32_t a1, int32_t a2, int32_t a3 @ 0x1c)

{
    double arg_c;
    double arg_14;

    if (!sub_4a8372(a1, &arg_14, a3))
    {
        int32_t var_24;
        int32_t var_24_1 = var_24 & 0xfffffffe;
        void var_5c;
        sub_4a80bf(&var_5c, &a3, a1, a2, &arg_c, &arg_14);
        /* no return */
    }

    int32_t eax_1 = sub_4a865c(a1);

    if (g_546af0 || !eax_1)
    {
        sub_4a8611(eax_1);
        int16_t x87control;
        sub_4a87fc(x87control, a3, 0xffff);
        return arg_14;
    }

    int32_t var_64_2 = a1;
    int32_t var_68_2 = a1;
    var_68_2 = arg_14;
    int32_t var_70_1 = a1;
    var_70_1 = 0;
    int32_t var_78 = a1;
    var_78 = arg_c;
    return sub_4a8589(eax_1, a2, var_78, a1, var_70_1, a1, var_68_2, a3);
}
