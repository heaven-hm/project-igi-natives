#pragma once
#include <stdint.h>
/* StatusScreen_Init @ 0x486900 - NEW name (was sub_486900).
   Self-named via TaskType_Register("StatusScreen",0x4f0,...).
   CFG: BN blocks=1 calls=9 / r2 nbbs=1 outdegree=9 => 1.00 PASS */
extern uint16_t g_StatusScreenType; /* 0x5c8a74 */
void StatusScreen_Init(void);
