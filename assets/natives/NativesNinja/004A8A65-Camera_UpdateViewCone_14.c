#include "004A8A65-Camera_UpdateViewCone_14.h"
/* 0x004a8a65 Camera_UpdateViewCone_14 full linked: callers=0 callees=3 */
long double sub_4a8a65(int16_t a1 @ x87control, int32_t a2, int32_t a3)

{
    long double result = __fload(a2, a3);
    int16_t x87status;
    int16_t temp0;
    temp0 = __fnstcw_memmem16(a1);
    int16_t var_a8 = temp0;
    int32_t __saved_ebp;
    int32_t ecx;
    void* edx;
    __trandisp1(ecx, edx, &__saved_ebp, result);
    sub_4a892e();
    return result;
}
