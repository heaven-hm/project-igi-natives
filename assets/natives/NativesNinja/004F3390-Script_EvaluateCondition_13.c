#include "004F3390-Script_EvaluateCondition_13.h"
/* 0x004f3390 Script_EvaluateCondition_13 full linked: callers=1 callees=6 */
struct status_msg* sub_4f3390(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5, int32_t* a6)

{
    int32_t kind;
    kind = g_54e1ac;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    memcpy(&result->sprite[0x3c], a3, 0x18);
    int32_t var_1c = 0;
    memcpy(&result->sprite[0x54], a4, 0x28);
    int32_t edi_2 = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_2;
        edi_2 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_1 = ~i;
    int32_t esi_3;
    int32_t edi_5;
    edi_5 = memcpy(&result->sprite[0x7c], edi_2 - ecx_1, ecx_1 & 0xfffffffc);
    memcpy(edi_5, esi_3, ecx_1 & 3);
    int32_t eax_1 = *a5;
    result->sprite[0x8c] = eax_1;
    result->sprite[0x8d] = *(&eax_1 + 1);
    result->sprite[0x8e] = *(&eax_1 + 2);
    result->sprite[0x8f] = *(&eax_1 + 3);
    int32_t eax_2 = a5[1];
    result->sprite[0x90] = eax_2;
    result->sprite[0x91] = *(&eax_2 + 1);
    result->sprite[0x92] = *(&eax_2 + 2);
    result->sprite[0x93] = *(&eax_2 + 3);
    int32_t edx_2 = a5[2];
    result->sprite[0x94] = edx_2;
    result->sprite[0x95] = *(&edx_2 + 1);
    result->sprite[0x96] = *(&edx_2 + 2);
    result->sprite[0x97] = *(&edx_2 + 3);
    int32_t edx_3 = *a6;
    result->sprite[0x98] = edx_3;
    result->sprite[0x99] = *(&edx_3 + 1);
    result->sprite[0x9a] = *(&edx_3 + 2);
    result->sprite[0x9b] = *(&edx_3 + 3);
    int32_t edx_4 = a6[1];
    result->sprite[0x9c] = edx_4;
    result->sprite[0x9d] = *(&edx_4 + 1);
    result->sprite[0x9e] = *(&edx_4 + 2);
    result->sprite[0x9f] = *(&edx_4 + 3);
    int32_t ecx_7 = a6[2];
    result->sprite[0xa0] = ecx_7;
    result->sprite[0xa1] = *(&ecx_7 + 1);
    result->sprite[0xa2] = *(&ecx_7 + 2);
    result->sprite[0xa3] = *(&ecx_7 + 3);
    sub_4f2b90(result);
    return result;
}
