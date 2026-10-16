#include "gi_platform.h"
#include "004FE650-Script_CallNativeHandler_31.h"
struct status_msg* Script_CallNativeHandler_31(void* a1, int32_t a2, int32_t a3)

{
    int32_t kind;
    kind = g_a7a4e0;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    int32_t dstD = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC1 = ~i;
    int32_t v_20 = a2;
    struct status_msg* result_1 = result;
    int32_t srcS1;
    int32_t dstD3;
    dstD3 = memcpy(&result->head[8], dstD - objC1, objC1 & 0xfffffffc);
    memcpy(dstD3, srcS1, objC1 & 3);
    result->sprite[0x70] = a3;
    result->sprite[0x71] = (*(int32_t*)(uintptr_t)(&a3 + 1));
    result->sprite[0x72] = (*(int32_t*)(uintptr_t)(&a3 + 2));
    result->sprite[0x73] = (*(int32_t*)(uintptr_t)(&a3 + 3));
    return result;
}
