#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x004b5b90 Is_ResourceLoaded | CFG gate PASS score=1.000 BN(b=24,c=3) r2(b=24,c=3) */
int Is_ResourceLoaded(char* resourcePath, char** outEntry);
