#include "00507D60-Physics_EvaluateAreaCriteria_6.h"
/* 0x00507d60 Physics_EvaluateAreaCriteria_6 full linked: callers=2 callees=9 */
struct status_msg* sub_507d60(void* a1, void* a2, int32_t a3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a7b248;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a7b248;
        result = QTask_HandleInput(a1, kind, 0);
        sub_4b0d50();
    }

    result->sprite[0x2c] = 1;
    int32_t ecx_2 = *(a2 + 0xb8);
    result->sprite[4] = ecx_2;
    result->sprite[5] = *(&ecx_2 + 1);
    result->sprite[6] = *(&ecx_2 + 2);
    result->sprite[7] = *(&ecx_2 + 3);
    int32_t edx = *(a2 + 0xe4);
    result->sprite[0x30] = edx;
    result->sprite[0x31] = *(&edx + 1);
    result->sprite[0x32] = *(&edx + 2);
    result->sprite[0x33] = *(&edx + 3);
    int32_t ecx_3 = *(a2 + 0xc8);
    result->sprite[0x14] = ecx_3;
    result->sprite[0x15] = *(&ecx_3 + 1);
    result->sprite[0x16] = *(&ecx_3 + 2);
    result->sprite[0x17] = *(&ecx_3 + 3);
    int32_t edx_1 = *(a2 + 0xcc);
    result->sprite[0x18] = edx_1;
    result->sprite[0x19] = *(&edx_1 + 1);
    result->sprite[0x1a] = *(&edx_1 + 2);
    result->sprite[0x1b] = *(&edx_1 + 3);
    int32_t ecx_4 = *(a2 + 0xc4);
    result->sprite[0x10] = ecx_4;
    result->sprite[0x11] = *(&ecx_4 + 1);
    result->sprite[0x12] = *(&ecx_4 + 2);
    result->sprite[0x13] = *(&ecx_4 + 3);
    int32_t edx_2 = *(a2 + 0xf8);
    result->sprite[0x44] = edx_2;
    result->sprite[0x45] = *(&edx_2 + 1);
    result->sprite[0x46] = *(&edx_2 + 2);
    result->sprite[0x47] = *(&edx_2 + 3);
    int32_t ecx_5 = *(a2 + 0xbc);
    result->sprite[8] = ecx_5;
    result->sprite[9] = *(&ecx_5 + 1);
    result->sprite[0xa] = *(&ecx_5 + 2);
    result->sprite[0xb] = *(&ecx_5 + 3);
    memcpy(&result->head[0x28], a2 + 0xa0, 0x18);
    memcpy(&result->head[0x22], a2 + 0x88, 0x18);
    memcpy(&result->head[0x1c], a3, 0x18);
    uint32_t eax_5 = sub_4f1a70();
    int32_t eax_6 = 0;
    eax_6 = result->head[7];
    int32_t eax_7 = *(((eax_5 * 0x180 + eax_6) << 2) + &g_a96ae0);

    if (eax_7)
        eax_7(result, 0);

    return result;
}
