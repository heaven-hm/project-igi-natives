#pragma once
#include <stdint.h>
/* 0x00401860 QTask_CleanupEvents
   BN signature : uint32_t(int16_t arg1, char arg2)
   range/blocks : 0x401860-0x401888 / 1
   CFG gate     : PASS (bn_b=1 r2_b=1 bn_calls=0 r2_out=0) score=1.000
   open-igi     : False
*/
unsigned int(short arg1, char arg2);
