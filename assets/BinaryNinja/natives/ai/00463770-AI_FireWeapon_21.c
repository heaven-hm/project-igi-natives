#include "AI_FireWeapon_21.h"
void* AI_FireWeapon_21(void* a1)

{
    *(a1 + 0x664) = *(a1 + 0x664) * 0.99000001f;
    *(a1 + 0x668) = *(a1 + 0x668) * 0.99000001f;
    *(a1 + 0x66c) = (*(a1 + 0x66c) - 84.7416916f) * 0.99000001f;
    return a1;
}
