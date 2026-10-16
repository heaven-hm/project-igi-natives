#include "gi_platform.h"
#include "0052C610-Light_RenderLensflare_9.h"
struct status_msg* Light_RenderLensflare_9(void* a1, int32_t a2, int32_t a3)

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
        Sys_DispatchOpcode_2();
    }

    result->sprite[0x9c] = a3;
    result->sprite[0x9d] = (*(int32_t*)(uintptr_t)(&a3 + 1));
    result->sprite[0x9e] = (*(int32_t*)(uintptr_t)(&a3 + 2));
    result->sprite[0x9f] = (*(int32_t*)(uintptr_t)(&a3 + 3));
    memcpy(&result->sprite[0x3c], a2, 0x18);
    uint32_t valA4 = Script_ParseEnumReal32_8();
    int32_t valA5 = 0;
    valA5 = result->head[7];
    int32_t valA6 = *(((valA4 * 0x180 + valA5) << 2) + &g_a96ae0);

    if (valA6)
        valA6(result, 0);

    return result;
}
