// Original IGI.EXE function: Render_SkinBones_9 (VA 0x004D5F90; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_9.h"
int32_t Render_SkinBones_9()

{
    int32_t objC2 = g_a54648;
    int32_t result = *(g_a54644 + (objC2 << 2)) * g_a54650 + g_a54640;
    *(g_a54654 + result) = objC2;
    g_a54648 += 1;
    return result;
}
