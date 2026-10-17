// IGI native provenance: Camera_ApplyLineFilter_6 - 0x004A5AA8 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5AA8-Camera_ApplyLineFilter_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_6.h"
int32_t Camera_ApplyLineFilter_6()

{
    void* data_1 = g_543e8c;

    if (data_1)
        data_1();

    Camera_ApplyPostProcess_6(0x536008, 0x536014);
    return Camera_ApplyPostProcess_6(0x536000, 0x536004);
}
