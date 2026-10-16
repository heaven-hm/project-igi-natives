#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x004a5702 String_VFormat | CFG gate PASS score=1.000 BN(b=4,c=2) r2(b=4,c=2) */
int String_VFormat(char* buffer, const char* format, va_list args);
