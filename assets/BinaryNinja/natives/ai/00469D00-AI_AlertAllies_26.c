// Original IGI.EXE function: AI_AlertAllies_26 (VA 0x00469D00; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_26.h"
double* AI_AlertAllies_26(void* a1, double* a2)

{
    float v_8_1 = *(a1 + 0x58) * -921600f;
    float v_4_1 = *(a1 + 0x64) * -921600f;
    g_5bdd78 = *(a1 + 0x4c) * -921600f + *a2;
    g_5bdd80 = v_8_1 + a2[1];
    g_5bdd88 = v_4_1 + a2[2];
    return a2;
}
