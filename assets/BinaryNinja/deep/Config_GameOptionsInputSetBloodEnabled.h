#pragma once
#include <stdint.h>
/* 0x004042E0 Config_GameOptionsInputSetBloodEnabled
   BN signature : int32_t(int80_t arg1 @ st0, int32_t arg2, float arg3 @ 0xc)
   range/blocks : 0x4042e0-0x40433c / 1
   CFG gate     : PASS (bn_b=1 r2_b=1 bn_calls=3 r2_out=2) score=0.889
   open-igi     : False
*/
int(int80_t arg1, int arg2, float arg3);
