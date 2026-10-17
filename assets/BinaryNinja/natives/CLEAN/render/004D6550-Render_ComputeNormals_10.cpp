// IGI native provenance: Render_ComputeNormals_10 - 0x004D6550 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D6550-Render_ComputeNormals_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ComputeNormals_10.h"
int32_t Render_ComputeNormals_10(void* context)

{
    long double fpu7 = *(context + 0x28);
    long double f0 = 0.0f;
    fpu7 - f0;
    int32_t result = *(context + 8);

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        result &= 0xfd;
        *(context + 8) = result;
        return result;
    }

    result |= 2;
    *(context + 8) = result;
    return result;
}
