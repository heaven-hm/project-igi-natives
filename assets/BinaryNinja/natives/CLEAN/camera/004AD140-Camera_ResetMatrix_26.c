// IGI native provenance: Camera_ResetMatrix_26 - 0x004AD140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD140-Camera_ResetMatrix_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_26.h"
uint32_t __stdcall __aulldiv(int32_t context, uint32_t param_2, int32_t param_3, uint32_t param_4) {
    if (!param_4)
        return COMBINE(COMBINE(0, param_2) % param_3, context) / param_3;

    uint32_t i = param_4;
    int32_t context_1 = param_3;
    uint32_t temp_3 = param_2;
    int32_t data_6 = context;

    do
    {
        context_1 = RRCD(context_1, 1, i & 1);
        uint32_t f4_1 = temp_3;
        temp_3 u>>= 1;
        data_6 = RRCD(data_6, 1, f4_1 & 1);
        i u>>= 1;
    } while (i);

    uint32_t result = COMBINE(temp_3, data_6) / context_1;
    int32_t data_8 = result * param_4;
    int32_t data_10;
    int32_t temp_4;
    temp_4 = HIGHD(param_3 * result);
    data_10 = LOWD(param_3 * result);
    int32_t temp_5 = temp_4 + data_8;

    if (temp_4 + data_8 >= temp_4 && temp_5 <= param_2 && (temp_5 < param_2 || data_10 <= context))
        return result;

    return result - 1;
}
