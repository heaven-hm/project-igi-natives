// Original IGI.EXE function: AI_AlertAllies_18 (VA 0x004613D0; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_18.h"
int32_t AI_AlertAllies_18(void* context)

{
    *(context + 0x538) = 0xffffffff;
    Render_ClipMesh_5(context + 0x534, context + 0x68);
    int32_t result = *(context + 0x538);

    if (result == 0xffffffff)
        return result;

    long double fpu_val_7_4 = *(context + 0x80) * *(context + 0x54c) + *(context + 0x7c) * *(context + 0x548)
        + *(context + 0x78) * *(context + 0x544);
    long double fpu_val_6_8 = *(context + 0x8c) * *(context + 0x54c) + *(context + 0x88) * *(context + 0x548)
        + *(context + 0x84) * *(context + 0x544);
    long double fpu_val_6_12 = *(context + 0x98) * *(context + 0x54c) + *(context + 0x94) * *(context + 0x548)
        + *(context + 0x90) * *(context + 0x544);
    double item_18 = fpu_val_7_4 + *(context + 0x20);
    double item_10_1 = fpu_val_6_8 + *(context + 0x28);
    double item_8_1 = fpu_val_6_12 + *(context + 0x30);
    return SoundSys_EvaluateTrigger_15(result, context, &item_18);
}
