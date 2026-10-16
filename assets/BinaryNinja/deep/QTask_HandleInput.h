#pragma once
#include <stdint.h>
/* 0x004012A0 QTask_HandleInput
   BN signature : struct status_msg*(void* ctx, int32_t kind, int32_t flags)
   range/blocks : 0x4012a0-0x4012e7 / 5
   CFG gate     : PASS (bn_b=5 r2_b=5 bn_calls=2 r2_out=2) score=1.000
   open-igi     : True
*/
struct status_msg*(void * ctx, int kind, int flags);
