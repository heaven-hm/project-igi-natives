#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x004b8890 Game_DefineOptions | CFG gate PASS score=1.000 BN(b=1,c=1) r2(b=1,c=1) */
void Game_DefineOptions(int **option_str, int option_func_addr, int opt1, int opt2);
