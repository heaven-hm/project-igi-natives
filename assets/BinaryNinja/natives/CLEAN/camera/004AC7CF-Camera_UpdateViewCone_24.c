// IGI native provenance: Camera_UpdateViewCone_24 - 0x004AC7CF - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AC7CF-Camera_UpdateViewCone_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_24.h"
int32_t Camera_UpdateViewCone_24(int32_t context, int32_t param_2)

{
    int32_t f0 = param_2 / 0x20;
    int32_t* dest_val = context + (f0 << 2);
    int32_t i = Camera_ResetMatrix_28(*dest_val, 1 << ((0x1f - param_2 % 0x20) & 0x1f), dest_val);
    int32_t source_1 = f0 - 1;

    if (f0 - 1 >= 0)
    {
        int32_t* dest_1 = context + (source_1 << 2);

        while (i)
        {
            i = Camera_ResetMatrix_28(*dest_1, 1, dest_1);
            source_1 -= 1;
            dest_1 -= 4;

            if (source_1 < 0)
                break;
        }
    }

    return i;
}
