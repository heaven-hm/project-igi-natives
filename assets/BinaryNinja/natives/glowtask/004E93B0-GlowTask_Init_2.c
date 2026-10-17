// Original IGI.EXE function: GlowTask_Init_2 (VA 0x004E93B0; static CFG gate PASS, CFG score 1.000).
#include "GlowTask_Init_2.h"

int32_t GlowTask_Init_2()

{
    void* a5ec74_1 = g_a5ec74;
    int32_t ecx = *(a5ec74_1 + 0x28);
    int32_t esi = ecx;

    if (ecx >= 0xff)
        esi = 0xff;

    int32_t ecx_1 = *(a5ec74_1 + 0x24);
    int32_t edx = ecx_1;

    if (ecx_1 >= 0xff)
        edx = 0xff;

    int32_t ecx_2 = *(a5ec74_1 + 0x20);

    if (ecx_2 >= 0xff)
        ecx_2 = 0xff;

    int32_t result = SoundSys_EvaluateTrigger_13(a5ec74_1, ecx_2, edx, esi, *(a5ec74_1 + 0x2c));
    g_a5ec74 = 0;
    return result;
}
