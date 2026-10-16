#include "0040BDB0-HumanPlayer_PlayFootstep_4.h"
/* 0x0040bdb0 HumanPlayer_PlayFootstep_4 full linked: callers=0 callees=1 */
float HumanPlayer_PlayFootstep_4(void* a1, void* a2) __location("eax")

{
    *(a2 + 0x33d) = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    int32_t edx_1 = *(a2 + 0x730);
    float result = *(a2 + 0x520) + *(a2 + 0x728);
    long double x87_r7_3 = *(a2 + 0x524) + *(a2 + 0x72c);
    int32_t var_4 = *(a2 + 0x528);
    *(a2 + 0x664) = result;
    int32_t var_4_1 = edx_1;
    *(a2 + 0x668) = x87_r7_3;
    *(a2 + 0x66c) = edx_1;
    *(a1 + 0x14) = HumanPlayer_PlaySound_4;
    return result;
}
