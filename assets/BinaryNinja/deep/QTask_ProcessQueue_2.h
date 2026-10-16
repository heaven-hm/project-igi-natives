#pragma once
#include <stdint.h>
/* 0x00401D80 QTask_ProcessQueue_2
   BN signature : int32_t(void* arg1, int32_t arg2, int32_t arg3)
   range/blocks : 0x401d80-0x401e2c / 10
   CFG gate     : PASS (bn_b=10 r2_b=10 bn_calls=1 r2_out=1) score=1.000
   open-igi     : True
*/
int(void * arg1, int arg2, int arg3);
