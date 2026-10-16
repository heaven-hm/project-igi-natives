#include "004A88F4-Camera_ApplyHandiCam_14.h"
/* 0x004a88f4 Camera_ApplyHandiCam_14 full linked: callers=1 callees=4 */
long double sub_4a88f4(int16_t a1 @ x87control, int32_t a2, int32_t a3, int32_t a4, int32_t a5)

{
    long double st0 = __fload(a2, a3);
    long double result = __fload(a4, a5);
    int16_t x87status;
    int16_t temp0;
    temp0 = __fnstcw_memmem16(a1);
    int16_t var_a8 = temp0;
    int32_t __saved_ebp;
    int32_t ecx;
    void* edx;
    __trandisp2(ecx, edx, &__saved_ebp, result, st0);
    sub_4a892e();
    return result;
}
