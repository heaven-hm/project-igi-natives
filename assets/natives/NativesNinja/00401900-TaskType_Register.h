#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x00401900 TaskType_Register | CFG gate PASS score=1.000 BN(b=18,c=4) r2(b=18,c=4) */
uint16_t TaskType_Register(uint32_t p1, uint32_t p2, uint16_t parentType, uint32_t p4);
