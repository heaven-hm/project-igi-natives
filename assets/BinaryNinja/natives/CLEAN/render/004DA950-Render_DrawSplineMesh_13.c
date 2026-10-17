// IGI native provenance: Render_DrawSplineMesh_13 - 0x004DA950 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004DA950-Render_DrawSplineMesh_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawSplineMesh_13.h"
void Render_DrawSplineMesh_13(int32_t context, int32_t* param_2, int32_t param_3, int32_t* param_4, float param_5)

{
    g_b03f90 += 1;
    int32_t entity_1 = g_b0425c;

    if (entity_1 >= 0xa || g_b03f90 > 0x17)
        return;

    int32_t temp_1 = g_b03df0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(param_5 * 0.5f);
    *((temp_1 << 2) + &g_b04200) = entity_1 + 0x20000;
    g_b0425c = entity_1 + 1;
    g_b03df0 = temp_1 + 1;
    memcpy(entity_1 * 0x38 + &g_b03fa0, context, 0x18);
    *(entity_1 * 0x38 + 0xb03fb8) = *param_2;
    *(entity_1 * 0x38 + 0xb03fbc) = param_2[1];
    *(entity_1 * 0x38 + 0xb03fc0) = param_2[2];
    *(entity_1 * 0x38 + 0xb03fc4) = param_3;
    *(entity_1 * 0x38 + 0xb03fc8) = *param_4;
    *(entity_1 * 0x38 + 0xb03fcc) = param_4[1];
    *(entity_1 * 0x38 + 0xb03fd0) = param_4[2];
    *(entity_1 * 0x38 + 0xb03fd4) = fp0_1;
}
