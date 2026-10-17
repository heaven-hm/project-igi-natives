// IGI native provenance: Camera_UpdateTransform_27 - 0x004AD1B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD1B0-Camera_UpdateTransform_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_27.h"
uint32_t __stdcall __aullrem(int32_t context, uint32_t param_2, int32_t param_3, uint32_t param_4) {
    uint32_t result;

    if (param_4)
    {
        uint32_t i = param_4;
        int32_t context_1 = param_3;
        uint32_t temp_4 = param_2;
        int32_t data_4 = context;

        do
        {
            context_1 = RRCD(context_1, 1, i & 1);
            uint32_t f4_1 = temp_4;
            temp_4 u>>= 1;
            data_4 = RRCD(data_4, 1, f4_1 & 1);
            i u>>= 1;
        } while (i);

        uint32_t f0_3 = COMBINE(temp_4, data_4) / context_1;
        int32_t data_6 = f0_3 * param_4;
        int32_t data_8;
        int32_t temp_5;
        temp_5 = HIGHD(f0_3 * param_3);
        data_8 = LOWD(f0_3 * param_3);
        int32_t temp_6 = temp_5 + data_6;

        if (temp_5 + data_6 < temp_5 || temp_6 > param_2)
            data_8 -= param_3;
        else if (temp_6 >= param_2 && data_8 > context)
            data_8 -= param_3;

        result = -((data_8 - context));
    }
    else
        result = COMBINE(COMBINE(0, param_2) % param_3, context) % param_3;

    return result;
}
