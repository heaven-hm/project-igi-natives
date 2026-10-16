#pragma once
#include <stdint.h>
/* 0x004012F0 QTask_LinkEventHandler
   BN signature : int32_t*(int32_t arg1, int16_t arg2)
   range/blocks : 0x4012f0-0x4013ac / 6
   CFG gate     : PASS (bn_b=6 r2_b=6 bn_calls=3 r2_out=3) score=1.000
   open-igi     : True
*/
int*(int arg1, short arg2);
