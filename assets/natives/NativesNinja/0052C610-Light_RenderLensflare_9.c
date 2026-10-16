#include "0052C610-Light_RenderLensflare_9.h"
/* 0x0052c610 Light_RenderLensflare_9 full linked: callers=1 callees=7 */
struct status_msg* sub_52c610(void* a1, int32_t a2, int32_t a3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a8454c;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a8454c;
        result = QTask_HandleInput(a1, kind, 0);
        sub_4b0d50();
    }

    result->sprite[0x9c] = a3;
    result->sprite[0x9d] = *(&a3 + 1);
    result->sprite[0x9e] = *(&a3 + 2);
    result->sprite[0x9f] = *(&a3 + 3);
    memcpy(&result->sprite[0x3c], a2, 0x18);
    uint32_t eax_4 = sub_4f1a70();
    int32_t eax_5 = 0;
    eax_5 = result->head[7];
    int32_t eax_6 = *(((eax_4 * 0x180 + eax_5) << 2) + &g_a96ae0);

    if (eax_6)
        eax_6(result, 0);

    return result;
}
