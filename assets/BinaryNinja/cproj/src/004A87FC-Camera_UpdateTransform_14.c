#include "gi_platform.h"
#include "004A87FC-Camera_UpdateTransform_14.h"
int32_t Camera_UpdateTransform_14(int16_t a1 , int32_t a2, int32_t a3)

{
    int32_t objC;
    int32_t v_8 = objC;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(a1);
    v_8 = f0;
    int16_t x87control;
    int16_t x87status_1;
    x87control = __fldcw_memmem16(((~a3 & v_8) | (a3 & a2)));
    return v_8;
}
