// IGI native provenance: RenderLight_ProcessStep_52D370 - 0x0052D370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D370-RenderLight_ProcessStep_52D370.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_ProcessStep_52D370.h"

float* RenderLight_ProcessStep_52D370()

{
    float* a84568_1 = g_a84568;

    if (!a84568_1)
        return a84568_1;

    int32_t* result_val = a84568_1[0x14];
    (*(*result_val + 8))(result_val);
    int32_t bcad74_1 = g_bcad74;
    int32_t eax_1 = -(bcad74_1);
    int32_t var_10 = 0;
    int32_t var_c_1 = 0;
    int32_t var_8_1 = 0;
    int32_t var_4_1 = 0;
    int32_t var_c_2 = (((eax_1 - eax_1) & 0xfffff800) + 0x800) | 0x10000;
    int32_t* 5ca110_1 = g_5ca110;
    var_10 = 0x10;
    int32_t var_4_2 = 0x141;
    int32_t var_8_2 = 0x42;
    (*(*5ca110_1 + 0x14))(5ca110_1, &var_10, &a84568_1[0x14], 0);
    return Light_ComputeDirectional(a84568_1);
}
