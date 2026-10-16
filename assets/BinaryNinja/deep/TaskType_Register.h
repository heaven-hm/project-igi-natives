#pragma once
#include <stdint.h>
/* 0x00401900 TaskType_Register
   BN signature : int32_t(int32_t arg1, int32_t arg2, int16_t arg3, int32_t arg4)
   range/blocks : 0x401900-0x401a10 / 18
   CFG gate     : PASS (bn_b=18 r2_b=18 bn_calls=4 r2_out=4) score=1.000
   open-igi     : False
*/
int(int arg1, int arg2, short arg3, int arg4);
