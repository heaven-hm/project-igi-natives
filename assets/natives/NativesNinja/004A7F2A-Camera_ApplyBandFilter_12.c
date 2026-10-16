#include "004A7F2A-Camera_ApplyBandFilter_12.h"
/* 0x004a7f2a Camera_ApplyBandFilter_12 full linked: callers=14 callees=1 */
BOOL __convention("regparm") sub_4a7f2a(int32_t a1, int32_t a2, int32_t a3, int32_t a4 @ 0x8)

{
    int32_t var_8 = a3;
    int32_t arg_4;
    int32_t eax = arg_4;
    uint32_t eax_1;

    if (eax + 1 > 0x100)
    {
        char ecx_3 = eax >> 8;
        int32_t __saved_esi_1;

        if (!(*(&(**&g_544070)[ecx_3] + 1) & 0x80))
        {
            *(&var_8 + 1) = 0;
            var_8 = eax;
            __saved_esi_1 = 1;
        }
        else
        {
            *(&var_8 + 2) = 0;
            var_8 = ecx_3;
            *(&var_8 + 1) = eax;
            __saved_esi_1 = 2;
        }

        BOOL result = sub_4ad225(1, &var_8, __saved_esi_1, (&arg_4 + 2), 0, 0, 1);

        if (!result)
            return result;

        eax_1 = *(&arg_4 + 2);
    }
    else
        eax_1 = (**&g_544070)[eax];

    return eax_1 & a4;
}
