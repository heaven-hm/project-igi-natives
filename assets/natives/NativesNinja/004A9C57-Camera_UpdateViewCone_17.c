#include "004A9C57-Camera_UpdateViewCone_17.h"
/* 0x004a9c57 Camera_UpdateViewCone_17 full linked: callers=5 callees=1 */
🌐  long double __convention("regparm") __startOneArgErrorHandling(int32_t a1, int32_t a2, long double a3 @ st0, int32_t a4 @ 0xc, int32_t a5 @ 0x10)

{
    int32_t var_24 = a1;
    double var_c = a3;
    int32_t ecx;
    int32_t var_20 = ecx;
    int32_t var_1c = a4;
    int32_t var_18 = a5;
    int16_t arg_4;
    sub_4ad371(a2, &var_24, &arg_4);
    int16_t x87control_1;
    int16_t x87status_1;

    if (arg_4 != 0x27f)
        x87control_1 = __fldcw_memmem16(arg_4);
    return var_c;
}
