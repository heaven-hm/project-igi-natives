#include "gi_platform.h"
#include "004A9C57-Camera_UpdateViewCone_17.h"
🌐  long double __convention("regparm") __startOneArgErrorHandling(int32_t a1, int32_t a2, long double a3 , int32_t a4 , int32_t a5 )

{
    int32_t v_24 = a1;
    double v_c = a3;
    int32_t objC;
    int32_t v_20 = objC;
    int32_t v_1c = a4;
    int32_t v_18 = a5;
    int16_t arg_4;
    Camera_ApplyWideScreen_27(a2, &v_24, &arg_4);
    int16_t x87control_1;
    int16_t x87status_1;

    if (arg_4 != 0x27f)
        x87control_1 = __fldcw_memmem16(arg_4);
    return v_c;
}
