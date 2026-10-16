#include "004A9A41-Camera_ApplyLineFilter_17.h"
/* 0x004a9a41 Camera_ApplyLineFilter_17 full linked: callers=0 callees=1 */
int32_t sub_4a9a41(void* a1 @ ebp, long double a2 @ st0) __location("st0")

{
    *(a1 - 0x90) = 0xfe;
    int32_t ecx;
    *(&ecx + 1) = 0;
    long double x87_r1;
    long double x87_r2;
    /* tailcall */
    return sub_4a9a4e(a1, x87_r1, x87_r2);
}
