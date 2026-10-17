// Original IGI.EXE function: Physics_EvaluateAreaCriteria_12 (VA 0x0050B4C0; static CFG gate PASS, CFG score 1.000).
#include "Physics_EvaluateAreaCriteria_12.h"
int32_t Physics_EvaluateAreaCriteria_12(int32_t context, int32_t param_2)

{
    int32_t data_val = context;

    if (data_val >= param_2)
        data_val = param_2;

    int32_t eflags;
    int32_t data_1;
    data_1 = __bsr_gprv_memv(data_val);
    int32_t entity_1 = 0;
    entity_1 = data_1 <= 0;
    return ((entity_1 - 1) & data_1) + 1;
}
