// IGI native provenance: Camera_ApplyPostProcess_24 - 0x004AC786 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AC786-Camera_ApplyPostProcess_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_24.h"
int32_t Camera_ApplyPostProcess_24(int32_t context, int32_t param_2)

{
    int32_t f0 = param_2 / 0x20;

    if (*(context + (f0 << 2)) & ~(0xffffffff << ((0x1f - param_2 % 0x20) & 0x1f)))
        return 0;

    int32_t source_1 = f0 + 1;

    if (source_1 >= 3)
        return 1;

    int32_t* data_5 = context + (source_1 << 2);

    while (true)
    {
        if (*data_5)
            return 0;

        source_1 += 1;
        data_5 = &data_5[1];

        if (source_1 >= 3)
            return 1;
    }
}
