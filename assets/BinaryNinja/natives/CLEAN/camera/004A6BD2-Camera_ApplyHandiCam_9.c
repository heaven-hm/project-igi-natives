// IGI native provenance: Camera_ApplyHandiCam_9 - 0x004A6BD2 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6BD2-Camera_ApplyHandiCam_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_9.h"
int32_t Camera_ApplyHandiCam_9(int32_t* context)

{
    int32_t result = 0;
    int16_t data_val = context[3];

    if ((data_val & 3) == 2 && data_val & 0x108)
    {
        char* data_1 = context[2];
        uint32_t dest_2 = *context - data_1;

        if (dest_2 > 0)
        {
            if (Camera_ApplyHandiCam_23(context[4], data_1, dest_2) != dest_2)
            {
                context[3] |= 0x20;
                result = 0xffffffff;
            }
            else
            {
                int32_t data_3 = context[3];

                if (data_3 & 0x80)
                {
                    data_3 &= 0xfd;
                    context[3] = data_3;
                }
            }
        }
    }

    int32_t data_4 = context[2];
    context[1] = 0;
    *context = data_4;
    return result;
}
