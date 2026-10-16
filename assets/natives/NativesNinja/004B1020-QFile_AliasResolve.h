#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x004b1020 QFile_AliasResolve | CFG gate FAIL score=0.778 BN(b=17,c=12) r2(b=17,c=4) */
int QFile_AliasResolve(char* outputPath, const char* inputPath, int maxDepth);
