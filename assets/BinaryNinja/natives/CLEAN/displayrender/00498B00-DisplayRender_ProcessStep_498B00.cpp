// IGI native provenance: DisplayRender_ProcessStep_498B00 - 0x00498B00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498B00-DisplayRender_ProcessStep_498B00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessStep_498B00.h"

void* DisplayRender_ProcessStep_498B00()

{
    void* 6e5bd0_1 = g_6e5bd0;

    if (!6e5bd0_1)
        return 6e5bd0_1;

    int32_t* result_val = *(6e5bd0_1 + 0x56cc);
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
    int32_t var_4_2 = 0x780;
    int32_t var_8_2 = 0x142;
    return (*(*5ca110_1 + 0x14))(5ca110_1, &var_10, 6e5bd0_1 + 0x56cc, 0);
}
