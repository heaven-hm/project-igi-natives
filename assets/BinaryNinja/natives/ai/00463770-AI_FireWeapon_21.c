// Original IGI.EXE function: AI_FireWeapon_21 (VA 0x00463770; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_21.h"
void* AI_FireWeapon_21(void* context)

{
    *(context + 0x664) = *(context + 0x664) * 0.99000001f;
    *(context + 0x668) = *(context + 0x668) * 0.99000001f;
    *(context + 0x66c) = (*(context + 0x66c) - 84.7416916f) * 0.99000001f;
    return context;
}
