#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x004e7200 Sound_EventTrigger | CFG gate PASS score=0.963 BN(b=15,c=9) r2(b=15,c=8) */
void Sound_EventTrigger(const char* eventName, uint32_t eventId, const SoundEventParams* params);
