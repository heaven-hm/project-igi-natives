#include "004A96AC-Camera_ResetMatrix_16.h"
/* 0x004a96ac Camera_ResetMatrix_16 full linked: callers=2 callees=2 */
long double sub_4a96ac(int16_t a1 @ x87control, long double a2 @ st0, long double a3 @ st1)

{
    long double var_1c = a2;
    int32_t eax = *(&a3 + 6);

    if (eax & 0x7fff0000)
        return sub_4a94a6(eax, 0, a1, a3);

    if (!(a3 | *(&a3 + 4)))
    {
        long double result;
        int80_t temp0_4;
        bool c2;
        result = __fprem(var_1c, a3);
        return result;
    }

    int32_t edx = 2;
    int16_t x87status;
    int16_t temp0_2;
    temp0_2 = __fnstcw_memmem16(a1);
    int16_t var_10 = temp0_2;
    int32_t var_c = var_10 | 0x33f;
    int16_t x87control;
    int16_t x87status_1;
    x87control = __fldcw_memmem16(var_c);
    int32_t eax_6 = *(&var_1c + 8) & 0x7fff;
    long double var_34_1;

    if (eax_6 > 0x7fbe)
    {
        int16_t x87status_2;
        int16_t temp0_3;
        temp0_3 = __fnstcw_memmem16(x87control);
        var_10 = temp0_3;
        eax_6 = var_10 | 0x300;
        var_c = eax_6;
        int16_t x87control_1;
        int16_t x87status_3;
        x87control_1 = __fldcw_memmem16(var_c);
        var_34_1 = a3 * g_544414;
    }
    else
    {
        edx = 3;
        var_1c = var_1c * g_544414;
        var_34_1 = a3 * g_544414;
    }

    int16_t x87control_2;
    int16_t x87status_4;
    x87control_2 = __fldcw_memmem16(var_10);
    return sub_4a94a6(eax_6, edx, x87control_2, var_34_1, a3, var_1c, var_10, var_c);
}
