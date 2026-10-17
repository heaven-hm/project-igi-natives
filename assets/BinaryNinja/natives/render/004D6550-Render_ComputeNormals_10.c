// Original IGI.EXE function: Render_ComputeNormals_10 (VA 0x004D6550; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_10.h"
int32_t Render_ComputeNormals_10(void* a1)

{
    long double fpu7 = *(a1 + 0x28);
    long double f0 = 0f;
    fpu7 - f0;
    int32_t result = *(a1 + 8);

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        result &= 0xfd;
        *(a1 + 8) = result;
        return result;
    }

    result |= 2;
    *(a1 + 8) = result;
    return result;
}
