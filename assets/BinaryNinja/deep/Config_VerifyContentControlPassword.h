#pragma once
#include <stdint.h>
/* 0x00403CC0 Config_VerifyContentControlPassword
   BN signature : int32_t(int32_t arg1, float arg2 @ 0xc)
   range/blocks : 0x403cc0-0x403d85 / 15
   CFG gate     : FAIL (bn_b=15 r2_b=15 bn_calls=2 r2_out=1) score=0.833
   open-igi     : False
*/
int(int arg1, float arg2);
