// IGI native provenance: Particle_ResetEmitters_3 - 0x005310C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005310C0-Particle_ResetEmitters_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_ResetEmitters_3.h"
uint32_t Particle_ResetEmitters_3()

{
    int32_t data_val;
    data_val = g_54f7b0;
    return QTask_CloseEvent_2(data_val);
}
