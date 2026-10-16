#include "004F8FE0-Script_CallNativeHandler_21.h"
/* 0x004f8fe0 Script_CallNativeHandler_21 full linked: callers=2 callees=7 */
struct status_msg* sub_4f8fe0(void* a1, void* a2, int32_t a3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a76cdc;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a76cdc;
        result = QTask_HandleInput(a1, kind, 0);
        sub_4b0d50();
    }

    result->sprite[0x16] = 1;
    int32_t ecx_2 = *(a2 + 0xb8);
    result->sprite[4] = ecx_2;
    result->sprite[5] = *(&ecx_2 + 1);
    result->sprite[6] = *(&ecx_2 + 2);
    result->sprite[7] = *(&ecx_2 + 3);
    int32_t edx = *(a2 + 0xd8);
    result->sprite[0x24] = edx;
    result->sprite[0x25] = *(&edx + 1);
    result->sprite[0x26] = *(&edx + 2);
    result->sprite[0x27] = *(&edx + 3);
    int32_t ecx_3 = *(a2 + 0xd4);
    result->sprite[0x20] = ecx_3;
    result->sprite[0x21] = *(&ecx_3 + 1);
    result->sprite[0x22] = *(&ecx_3 + 2);
    result->sprite[0x23] = *(&ecx_3 + 3);
    int32_t edx_1 = *(a2 + 0xbc);
    result->sprite[8] = edx_1;
    result->sprite[9] = *(&edx_1 + 1);
    result->sprite[0xa] = *(&edx_1 + 2);
    result->sprite[0xb] = *(&edx_1 + 3);
    int32_t eax_4 = *(a2 + 0x108);
    result->sprite[0x54] = eax_4;
    result->sprite[0x55] = *(&eax_4 + 1);
    result->sprite[0x56] = *(&eax_4 + 2);
    result->sprite[0x57] = *(&eax_4 + 3);
    memcpy(&result->head[0x1c], a3, 0x18);
    uint32_t eax_6 = sub_4f1a70();
    int32_t edx_2 = 0;
    edx_2 = result->head[7];
    int32_t eax_7 = *(((eax_6 * 0x180 + edx_2) << 2) + &g_a96ae0);

    if (eax_7)
        eax_7(result, 0);

    return result;
}
