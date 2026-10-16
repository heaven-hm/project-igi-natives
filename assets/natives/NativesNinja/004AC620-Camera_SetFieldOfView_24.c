#include "004AC620-Camera_SetFieldOfView_24.h"
/* 0x004ac620 Camera_SetFieldOfView_24 full linked: callers=1 callees=2 */
int32_t sub_4ac620(int16_t a1 @ x87control, int32_t a2, int32_t a3)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int16_t x87status;
    int16_t temp0;
    temp0 = __fnstcw_memmem16(a1);
    var_8 = temp0;
    int32_t result = (sub_4ac66b(var_8) & ~a3) | (a2 & a3);
    int16_t x87control;
    int16_t x87status_1;
    x87control = __fldcw_memmem16(sub_4ac6fd(result));
    return result;
}
