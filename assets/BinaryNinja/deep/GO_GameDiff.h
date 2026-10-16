#pragma once
#include <stdint.h>
/* 0x00403AC0 GO_GameDiff
   BN signature : int32_t(int32_t arg1, float arg2 @ 0xc)
   range/blocks : 0x403ac0-0x403b25 / 1
   CFG gate     : FAIL (bn_b=1 r2_b=1 bn_calls=2 r2_out=1) score=0.833
   open-igi     : False
*/
int(int arg1, float arg2);
