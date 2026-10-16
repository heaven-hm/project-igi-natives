#include "004FE650-Script_CallNativeHandler_31.h"
/* 0x004fe650 Script_CallNativeHandler_31 full linked: callers=16 callees=4 */
struct status_msg* sub_4fe650(void* a1, int32_t a2, int32_t a3)

{
    int32_t kind;
    kind = g_a7a4e0;
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
    struct status_msg* result_1 = result;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = memcpy(&result->head[8], edi - ecx_1, ecx_1 & 0xfffffffc);
    memcpy(edi_3, esi_1, ecx_1 & 3);
    result->sprite[0x70] = a3;
    result->sprite[0x71] = *(&a3 + 1);
    result->sprite[0x72] = *(&a3 + 2);
    result->sprite[0x73] = *(&a3 + 3);
    return result;
}
