#include "004A87FC-Camera_UpdateTransform_14.h"
/* 0x004a87fc Camera_UpdateTransform_14 full linked: callers=11 callees=0 */
int32_t sub_4a87fc(int16_t a1 @ x87control, int32_t a2, int32_t a3)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int16_t x87status;
    int16_t temp0;
    temp0 = __fnstcw_memmem16(a1);
    var_8 = temp0;
    int16_t x87control;
    int16_t x87status_1;
    x87control = __fldcw_memmem16(((~a3 & var_8) | (a3 & a2)));
    return var_8;
}
