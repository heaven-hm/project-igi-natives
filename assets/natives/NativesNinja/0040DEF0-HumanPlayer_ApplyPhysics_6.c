#include "0040DEF0-HumanPlayer_ApplyPhysics_6.h"
/* 0x0040def0 HumanPlayer_ApplyPhysics_6 full linked: callers=0 callees=1 */
int32_t* HumanPlayer_ApplyPhysics_6(void* a1 @ 0x8)

{
    sub_4636e0(a1);
    long double x87_r7_3 = -(*(a1 + 0xdac)) * 88.309761f + *(a1 + 0xdb0) * 0.99000001f;
    *(a1 + 0x664) = *(a1 + 0xda4);
    int32_t edi_1 = *(a1 + 0xda8);
    *(a1 + 0xdb0) = x87_r7_3;
    int32_t ecx_1 = *(a1 + 0xdac);
    *(a1 + 0x668) = edi_1;
    *(a1 + 0x66c) = ecx_1;
    *(a1 + 0x664) = x87_r7_3 * *(a1 + 0x664);
    *(a1 + 0x668) = x87_r7_3 * *(a1 + 0x668);
    *(a1 + 0x66c) = x87_r7_3 * *(a1 + 0x66c);
    return a1 + 0x664;
}
