#pragma once
#include <stdint.h>
/* 0x00401530 QTask_TriggerEvent
   BN signature : int32_t(int16_t arg1, int32_t arg2, int32_t arg3)
   range/blocks : 0x401530-0x4015cd / 7
   CFG gate     : PASS (bn_b=7 r2_b=7 bn_calls=2 r2_out=2) score=1.000
   open-igi     : False
*/
int(short arg1, int arg2, int arg3);
