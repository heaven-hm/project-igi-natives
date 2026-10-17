// IGI native provenance: Camera_ApplyBandFilter_9 - 0x004A6B97 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6B97-Camera_ApplyBandFilter_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyBandFilter_9.h"
int32_t Camera_ApplyBandFilter_9(int32_t* context)

{
    if (!context)
        return Camera_ApplyPostProcess_9(context);

    if (Camera_ApplyHandiCam_9(context))
        return 0xffffffff;

    if (!(*(context + 0xd) & 0x40))
        return 0;

    enum WIN32_ERROR data_3 = Camera_ApplyBandFilter_23(context[4]);
    int32_t data_4 = -(data_3);
    return data_4 - data_4;
}
