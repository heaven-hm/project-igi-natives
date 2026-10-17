// IGI native provenance: Mine_Process - 0x00475D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475D90-Mine_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Mine_Process.h"
int32_t Mine_Process(void* context, int32_t param_2)

{
    int32_t result = (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(context, param_2);
    *(context + 0x23c) = *(context + 0x240) * 30.0f;
    return result;
}
