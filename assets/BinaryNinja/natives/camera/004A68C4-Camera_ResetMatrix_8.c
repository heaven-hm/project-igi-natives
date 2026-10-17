// IGI native provenance: Camera_ResetMatrix_8 - 0x004A68C4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A68C4-Camera_ResetMatrix_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_8.h"
int32_t* Camera_ResetMatrix_8()

{
    int32_t* result = g_936054;

    if (result == 1)
    {
    label_4a68e0:
        Camera_ProgramNameUnknown(0xfc);
        int32_t data_val = g_9361bc;

        if (data_val)
            data_val();

        result = Camera_ProgramNameUnknown(0xff);
    }
    else if (!result && g_543e80 == 1)
        goto label_4a68e0;

    return result;
}
