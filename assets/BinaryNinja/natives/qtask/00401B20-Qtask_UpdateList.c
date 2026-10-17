// Original IGI.EXE function: Qtask_UpdateList (VA 0x00401B20; static CFG gate PASS, CFG score 1.000).
#include "Qtask_UpdateList.h"
int32_t Qtask_UpdateList(int32_t* context)

// Sig: void Qtask_UpdateList(int* p1)
// Note: Update all QTask list, Params: p1 ??
{
    void* data_val = *context;

    if (data_val)
        *(data_val + 0x18) -= 1;

    int32_t* source_val = g_567c4c;
    int32_t result = g_567c40 - 1;
    int32_t entity_val = *(source_val + context);
    g_567c40 = result;

    if (entity_val != result)
    {
        int32_t temp_1 = g_567c3c;
        result = *(temp_1 + (result << 2)) * g_567c48 + g_567c38;
        int32_t dest_2 = *(temp_1 + (entity_val << 2));
        int32_t source_1 = *(source_val + result);
        *(temp_1 + (entity_val << 2)) = *(temp_1 + (source_1 << 2));
        *(g_567c3c + (source_1 << 2)) = dest_2;
        *(g_567c4c + result) = entity_val;
    }

    return result;
}
