// IGI native provenance: AI_UpdateOrders_3 - 0x004525B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004525B0-AI_UpdateOrders_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders_3.h"
int32_t AI_UpdateOrders_3(void* context, int32_t param_2, float param_3, char param_4)

{
    *(context + 0x3ec8) = 0x40490fdb;
    *(context + 0x3ecc) = 0x40490fdb;
    long double fpu0;
    long double fpu1;
    return AI_CaFCgF(fpu0, fpu1, context, param_2, param_3, param_4);
}
