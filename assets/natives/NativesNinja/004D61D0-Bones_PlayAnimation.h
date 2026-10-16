#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x004d61d0 Bones_PlayAnimation | CFG gate PASS score=1.000 BN(b=7,c=5) r2(b=7,c=5) */
void Bones_PlayAnimation(void* bones, int bone, int animId, int flags, float blendSeconds);
