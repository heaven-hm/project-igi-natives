// IGI native provenance: HumanPlayer_ApplyPhysics_6 - 0x0040DEF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040DEF0-HumanPlayer_ApplyPhysics_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ApplyPhysics_6.h"
int32_t* HumanPlayer_ApplyPhysics_6(void* context )

{
    AI_CombatTarget_21(context);
    long double fpu_val_7_3 = -(*(context + 0xdac)) * 88.309761f + *(context + 0xdb0) * 0.99000001f;
    *(context + 0x664) = *(context + 0xda4);
    int32_t dest_1 = *(context + 0xda8);
    *(context + 0xdb0) = fpu_val_7_3;
    int32_t entity_1 = *(context + 0xdac);
    *(context + 0x668) = dest_1;
    *(context + 0x66c) = entity_1;
    *(context + 0x664) = fpu_val_7_3 * *(context + 0x664);
    *(context + 0x668) = fpu_val_7_3 * *(context + 0x668);
    *(context + 0x66c) = fpu_val_7_3 * *(context + 0x66c);
    return context + 0x664;
}
