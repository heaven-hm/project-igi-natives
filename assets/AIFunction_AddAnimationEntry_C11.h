#pragma once
#include <stdint.h>
/* Resolved 0x44ebb0 AIFunction_AddAnimationEntry - human C11 */
typedef struct ai_anim_entry { int id; int pad; double weight; } ai_anim_entry_t;
typedef struct ai_ctx {
    uint8_t pad[0x3b08];
    ai_anim_entry_t entries[5];
    uint32_t interval_a, interval_b, interval_c;
    int anim_count;
} ai_ctx_t;
extern ai_ctx_t *g_ai; /* 0x5bda58 */
void AIFunction_AddAnimationEntry(int animationId, double weight);
