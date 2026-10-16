#include "Camera_SetFieldOfView_24.h"
int32_t Camera_SetFieldOfView_24(int16_t a1 @ x87control, int32_t a2, int32_t a3)

{
    int32_t objC;
    int32_t v_8 = objC;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(a1);
    v_8 = f0;
    int32_t result = (Camera_ApplyBandFilter_24(v_8) & ~a3) | (a2 & a3);
    int16_t x87control;
    int16_t x87status_1;
    x87control = __fldcw_memmem16(Camera_ApplyWideScreen_24(result));
    return result;
}
