// IGI native provenance: Particle_RenderTrails - 0x00530520 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00530520-Particle_RenderTrails.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_RenderTrails.h"
int16_t* Particle_RenderTrails(int32_t context, int16_t param_2, int16_t param_3)

{
    int32_t data_1 = param_2 * 3;
    int16_t* result = context + (data_1 << 1);
    *(context + param_3 * 6) = *(context + (data_1 << 1));
    int32_t temp_3 = *result * 3;
    void* entity_1 = context + (temp_3 << 1);

    if (*(context + (temp_3 << 1) + 4) != param_2)
    {
        *(entity_1 + 2) = param_3;
        *result = 0;
        return result;
    }

    *(entity_1 + 4) = param_3;
    *result = 0;
    return result;
}
