// Original IGI.EXE function: Physics_ApplyImpulse_5 (VA 0x00506C60; static CFG gate PASS, CFG score 1.000).
#include "Physics_ApplyImpulse_5.h"
int32_t Physics_ApplyImpulse_5(int32_t context) {
    if (context >= 0x100)
        return 0x100;

    if (context >= 0x80)
        return 0x80;

    if (context >= 0x40)
        return 0x40;

    if (context >= 0x20)
        return 0x20;

    int32_t entity_val = 0;
    entity_val = context < 0x10;
    return ((entity_val - 1) & 8) + 8;
}
