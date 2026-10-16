#include "00469D00-AI_AlertAllies_26.h"
/* 0x00469d00 AI_AlertAllies_26 full linked: callers=3 callees=0 */
double* sub_469d00(void* a1, double* a2)

{
    float var_8_1 = *(a1 + 0x58) * -921600f;
    float var_4_1 = *(a1 + 0x64) * -921600f;
    g_5bdd78 = *(a1 + 0x4c) * -921600f + *a2;
    g_5bdd80 = var_8_1 + a2[1];
    g_5bdd88 = var_4_1 + a2[2];
    return a2;
}
