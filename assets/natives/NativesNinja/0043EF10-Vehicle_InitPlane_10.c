#include "0043EF10-Vehicle_InitPlane_10.h"
/* 0x0043ef10 Vehicle_InitPlane_10 full linked: callers=1 callees=10 */
struct status_msg* Vehicle_InitPlane_10(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_53c4a8;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_53c4a8;
        result = QTask_HandleInput(a1, kind, 0);
        sub_4b0d50();
    }

    memcpy(&result->sprite[0xb4], a2, 0x18);
    memcpy(&result->sprite[0xd8], a3, 0x28);
    int32_t eax_3 = *a5;
    int32_t edi_2 = a4;
    result->sprite[0xcc] = eax_3;
    result->sprite[0xcd] = *(&eax_3 + 1);
    result->sprite[0xce] = *(&eax_3 + 2);
    result->sprite[0xcf] = *(&eax_3 + 3);
    int32_t eax_4 = a5[1];
    result->sprite[0xd0] = eax_4;
    result->sprite[0xd1] = *(&eax_4 + 1);
    result->sprite[0xd2] = *(&eax_4 + 2);
    result->sprite[0xd3] = *(&eax_4 + 3);
    int32_t edx_1 = a5[2];
    result->sprite[0xd4] = edx_1;
    result->sprite[0xd5] = *(&edx_1 + 1);
    result->sprite[0xd6] = *(&edx_1 + 2);
    result->sprite[0xd7] = *(&edx_1 + 3);
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_2;
        edi_2 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_3 = ~i;
    int32_t esi_3;
    int32_t edi_5;
    edi_5 = memcpy(&result->sprite[0xa0], edi_2 - ecx_3, ecx_3 & 0xfffffffc);
    memcpy(edi_5, esi_3, ecx_3 & 3);
    uint32_t eax_7 = sub_4f1a70();
    int32_t edx_3 = 0;
    edx_3 = result->head[7];
    int32_t eax_8 = *(((eax_7 * 0x180 + edx_3) << 2) + &g_a96ae0);

    if (eax_8)
        eax_8(result, 0);

    return result;
}
