#pragma once
#include <stdint.h>
/* 0x00402260 Flow_LoadParameters
   BN signature : void*(uint32_t arg1)
   range/blocks : 0x402260-0x40271c / 96
   CFG gate     : PASS (bn_b=96 r2_b=96 bn_calls=28 r2_out=28) score=1.000
   open-igi     : True
*/
void *(unsigned int arg1);
