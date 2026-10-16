#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x00485970 StatusMessage_ShowFull | CFG gate FAIL score=0.818 BN(b=1,c=11) r2(b=1,c=5) */
void StatusMessage_ShowFull(int timer, char* message, char* sprite, int styleByte);
