#pragma once
#include <stdint.h>
/* 0x00401C40 QTask_TriggerEvent_2
   BN signature : int32_t*(int32_t* arg1, int16_t arg2)
   range/blocks : 0x401c40-0x401c71 / 11
   CFG gate     : PASS (bn_b=11 r2_b=11 bn_calls=0 r2_out=0) score=1.000
   open-igi     : False
*/
int*(int* arg1, short arg2);
