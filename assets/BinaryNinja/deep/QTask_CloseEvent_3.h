#pragma once
#include <stdint.h>
/* 0x00401F40 QTask_CloseEvent_3
   BN signature : int32_t*(int32_t* arg1, int32_t* arg2)
   range/blocks : 0x401f40-0x401f54 / 1
   CFG gate     : PASS (bn_b=1 r2_b=1 bn_calls=0 r2_out=0) score=1.000
   open-igi     : False
*/
int*(int* arg1, int* arg2);
