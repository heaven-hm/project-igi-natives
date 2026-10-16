#include "gi_platform.h"
#include "004A96AC-Camera_ResetMatrix_16.h"
long double Camera_ResetMatrix_16(int16_t a1 , long double a2 , long double a3 )

{
    long double v_1c = a2;
    int32_t valA = (*(int32_t*)(uintptr_t)(&a3 + 6));

    if (valA & 0x7fff0000)
        return Camera_UpdateViewCone_16(valA, 0, a1, a3);

    if (!(a3 | (*(int32_t*)(uintptr_t)(&a3 + 4))))
    {
        long double result;
        int80_t f0_4;
        bool c2;
        result = __fprem(v_1c, a3);
        return result;
    }

    int32_t tmpD = 2;
    int16_t x87status;
    int16_t f0_2;
    f0_2 = __fnstcw_memmem16(a1);
    int16_t v_10 = f0_2;
    int32_t v_c = v_10 | 0x33f;
    int16_t x87control;
    int16_t x87status_1;
    x87control = __fldcw_memmem16(v_c);
    int32_t valA6 = *(&v_1c + 8) & 0x7fff;
    long double v_34_1;

    if (valA6 > 0x7fbe)
    {
        int16_t x87status_2;
        int16_t f0_3;
        f0_3 = __fnstcw_memmem16(x87control);
        v_10 = f0_3;
        valA6 = v_10 | 0x300;
        v_c = valA6;
        int16_t x87control_1;
        int16_t x87status_3;
        x87control_1 = __fldcw_memmem16(v_c);
        v_34_1 = a3 * g_544414;
    }
    else
    {
        tmpD = 3;
        v_1c = v_1c * g_544414;
        v_34_1 = a3 * g_544414;
    }

    int16_t x87control_2;
    int16_t x87status_4;
    x87control_2 = __fldcw_memmem16(v_10);
    return Camera_UpdateViewCone_16(valA6, tmpD, x87control_2, v_34_1, a3, v_1c, v_10, v_c);
}
