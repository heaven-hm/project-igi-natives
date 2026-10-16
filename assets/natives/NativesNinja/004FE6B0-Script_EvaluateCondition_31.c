#include "004FE6B0-Script_EvaluateCondition_31.h"
/* 0x004fe6b0 Script_EvaluateCondition_31 full linked: callers=2 callees=6 */
struct status_msg* sub_4fe6b0(void* a1, int32_t a2, int32_t a3)

{
    int32_t kind;
    kind = g_a7a4fe;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    int32_t edi = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_1 = ~i;
    int32_t var_20 = a2;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = memcpy(&result->head[8], edi - ecx_1, ecx_1 & 0xfffffffc);
    struct status_msg* result_1 = result;
    memcpy(edi_3, esi_1, ecx_1 & 3);
    int32_t edi_4 = a3;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_4;
        edi_4 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_5 = ~i_1;
    int32_t esi_3;
    int32_t edi_7;
    edi_7 = memcpy(&result->sprite[0x70], edi_4 - ecx_5, ecx_5 & 0xfffffffc);
    memcpy(edi_7, esi_3, ecx_5 & 3);
    return result;
}
