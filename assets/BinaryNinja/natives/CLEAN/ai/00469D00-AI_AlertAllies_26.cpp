// IGI native provenance: AI_AlertAllies_26 - 0x00469D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469D00-AI_AlertAllies_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies_26.h"
double* AI_AlertAllies_26(void* context, double* param_2)

{
    float item_8_1 = *(context + 0x58) * -921600.0f;
    float item_4_1 = *(context + 0x64) * -921600.0f;
    g_5bdd78 = *(context + 0x4c) * -921600.0f + *param_2;
    g_5bdd80 = item_8_1 + param_2[1];
    g_5bdd88 = item_4_1 + param_2[2];
    return param_2;
}
