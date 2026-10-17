// IGI native provenance: Camera_ApplyHandiCam_19 - 0x004AA16D - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AA16D-Camera_ApplyHandiCam_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_19.h"
int32_t Camera_ApplyHandiCam_19(char context, int32_t param_2, char param_3)

{
    uint32_t data_2 = context;

    if (!(*(data_2 + 0xc32321) & param_3))
    {
        int32_t result;

        if (!param_2)
            result = 0;
        else
            result = g_54407a[data_2] & param_2;

        if (!result)
            return result;
    }

    return 1;
}
