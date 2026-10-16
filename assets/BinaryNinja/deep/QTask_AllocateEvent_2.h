#pragma once
#include <stdint.h>
/* 0x00401C80 QTask_AllocateEvent_2
   BN signature : void* const(void* arg1, int16_t arg2)
   range/blocks : 0x401c80-0x401cb7 / 11
   CFG gate     : PASS (bn_b=11 r2_b=11 bn_calls=0 r2_out=0) score=1.000
   open-igi     : False
*/
void * const(void * arg1, short arg2);
