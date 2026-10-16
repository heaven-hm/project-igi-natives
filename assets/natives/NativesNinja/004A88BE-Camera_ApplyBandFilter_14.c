#include "004A88BE-Camera_ApplyBandFilter_14.h"
/* 0x004a88be Camera_ApplyBandFilter_14 full linked: callers=0 callees=2 */
int32_t sub_4a88be(int16_t a1 @ x87control, long double a2 @ st0) __location("st0")

{
    int32_t __saved_ebp;
    int32_t* ebp = &__saved_ebp;
    int16_t x87status;
    int16_t temp0;
    temp0 = __fnstcw_memmem16(a1);
    int16_t var_a8 = temp0;

    if (!g_546af0)
        double var_8a_1 = a2;

    int32_t ecx;
    void* edx;
    __trandisp1(ecx, edx, ebp, a2);
    g_9361d8 = 1;
    return sub_4a8935(ebp, a2);
}
