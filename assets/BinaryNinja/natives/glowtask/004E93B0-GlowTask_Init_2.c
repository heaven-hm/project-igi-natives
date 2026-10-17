// Original IGI.EXE function: GlowTask_Init_2 (VA 0x004E93B0; static CFG gate PASS, CFG score 1.000).
#include "GlowTask_Init_2.h"

int32_t GlowTask_Init_2()

{
    void* a5ec74_1 = g_a5ec74;
    int32_t counter_val = *(a5ec74_1 + 0x28);
    int32_t source_ptr = counter_val;

    if (counter_val >= 0xff)
        source_ptr = 0xff;

    int32_t counter_val_1 = *(a5ec74_1 + 0x24);
    int32_t scratch_val = counter_val_1;

    if (counter_val_1 >= 0xff)
        scratch_val = 0xff;

    int32_t counter_val_2 = *(a5ec74_1 + 0x20);

    if (counter_val_2 >= 0xff)
        counter_val_2 = 0xff;

    int32_t result = SoundSys_EvaluateTrigger_13(a5ec74_1, counter_val_2, scratch_val, source_ptr, *(a5ec74_1 + 0x2c));
    g_a5ec74 = 0;
    return result;
}
