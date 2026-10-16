#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x004c0560 Symbol_CheckRegister | CFG gate PASS score=0.905 BN(b=4,c=7) r2(b=4,c=5) */
void* Symbol_CheckRegister(int* symTable, char* symName, int extra);
