// IGI native provenance: Camera_ApplyLineFilter_25 - 0x004AC8D8 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AC8D8-Camera_ApplyLineFilter_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_25.h"
int32_t Camera_ApplyLineFilter_25(int32_t* context)

{
    int32_t* data_val = context;

    for (int32_t i = 0; i < 3; )
    {
        if (*data_val)
            return 0;

        i += 1;
        data_val = &data_val[1];
    }

    return 1;
}
