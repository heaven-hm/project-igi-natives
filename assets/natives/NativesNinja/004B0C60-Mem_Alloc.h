#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x004b0c60 Mem_Alloc | CFG gate PASS score=1.000 BN(b=8,c=4) r2(b=8,c=4) */
void* Mem_Alloc(int numBytes, int tag);
