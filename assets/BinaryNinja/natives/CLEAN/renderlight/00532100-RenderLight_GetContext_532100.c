// IGI native provenance: RenderLight_GetContext_532100 - 0x00532100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00532100-RenderLight_GetContext_532100.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_GetContext_532100.h"

int32_t RenderLight_GetContext_532100(void* arg1)

{
    void* result_val = *(arg1 + 0xc);
    g_a84620 = *(result_val + 0x74) + *(result_val + 0x70);
    int32_t esi_1 = *(result_val + 0x6c);
    int32_t eax_1 = *(result_val + 0x78);
    data_a8462c = result_val + 0x70;
    data_a84630 = result_val + 0x6c;
    int32_t result = eax_1 + (esi_1 << 3);
    data_a84624 = result;
    return result;
}
