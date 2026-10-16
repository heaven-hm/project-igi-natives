#pragma once
#include <stdint.h>
/* 0x00403950 GO_GfxDisp
   BN signature : int32_t(int32_t arg1, float arg2 @ 0xc)
   range/blocks : 0x403950-0x4039fb / 1
   CFG gate     : PASS (bn_b=1 r2_b=1 bn_calls=4 r2_out=3) score=0.917
   open-igi     : False
*/
int(int arg1, float arg2);
