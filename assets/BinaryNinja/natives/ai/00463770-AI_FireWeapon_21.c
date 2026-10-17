// IGI native provenance: AI_FireWeapon_21 - 0x00463770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00463770-AI_FireWeapon_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_21.h"
void* AI_FireWeapon_21(void* context)

{
    *(context + 0x664) = *(context + 0x664) * 0.99000001f;
    *(context + 0x668) = *(context + 0x668) * 0.99000001f;
    *(context + 0x66c) = (*(context + 0x66c) - 84.7416916f) * 0.99000001f;
    return context;
}
