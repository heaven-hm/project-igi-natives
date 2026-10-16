#pragma once
#include <stdint.h>
/* 0x00403A00 GO_GameLang
   BN signature : int32_t(int32_t arg1, float arg2 @ 0xc)
   range/blocks : 0x403a00-0x403abf / 5
   CFG gate     : PASS (bn_b=5 r2_b=5 bn_calls=4 r2_out=3) score=0.917
   open-igi     : False
*/
int(int arg1, float arg2);
