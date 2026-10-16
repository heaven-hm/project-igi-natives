#pragma once
#include <stdint.h>
/* 0x00402780 Flow_RequestEvent
   BN signature : int32_t(int32_t arg1, float arg2 @ 0xc)
   range/blocks : 0x402780-0x4027d0 / 1
   CFG gate     : PASS (bn_b=1 r2_b=1 bn_calls=3 r2_out=2) score=0.889
   open-igi     : False
*/
int(int arg1, float arg2);
