#pragma once
#include <stdint.h>
/* 0x004013B0 QTask_RegisterEventCallback
   BN signature : int32_t*(void* arg1, int16_t arg2, int32_t arg3)
   range/blocks : 0x4013b0-0x4013f7 / 5
   CFG gate     : PASS (bn_b=5 r2_b=5 bn_calls=2 r2_out=2) score=1.000
   open-igi     : True
*/
int*(void * arg1, short arg2, int arg3);
