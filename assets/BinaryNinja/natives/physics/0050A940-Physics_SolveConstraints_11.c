// Original IGI.EXE function: Physics_SolveConstraints_11 (VA 0x0050A940; static CFG gate PASS, CFG score 0.944).
#include "Physics_SolveConstraints_11.h"
void** Physics_SolveConstraints_11(void** context)

{
    int32_t* context_val = context;
    int32_t entity_val = context_val[7];
    void** result_2 = context_val[6];
    int32_t temp_val = context_val[0xa];
    int16_t flagP = context_val[3];
    int32_t data_val = context_val[8];
    int32_t item_58 = data_val;
    void item_20;
    Physics_CalculateSplineLength_12(&item_20, context_val[9], 0.0f);
    int32_t* source_val = *context_val;
    memset(source_val, 0, 0x24);
    *source_val = Display_CheckCapabilities_7();
    source_val[7] = 0;
    source_val[8] = 0;
    void** result;
    int16_t entity_2;

    if (temp_val || !(*(&g_bcac5c + 1) & 1))
    {
        void** result_3 = result_2;
        int32_t data_5 = Sys_OpenFileStream_9();
        Sys_DispatchOpcode_3(Display_CheckCapabilities_7(), data_5, &result_3);
        int32_t result_1;
        result = result_1;
        int32_t item_24;
        entity_2 = item_24;
        source_val[4] = result_3 / result_1;
        int32_t item_14;
        flagP = (item_14 >> 3) * result;
        source_val[5] = entity_val / item_24;
    }
    else
    {
        entity_2 = entity_val;
        source_val[4] = 0x3f800000;
        source_val[5] = 0x3f800000;
        result = result_2;
    }

    source_val[1] = result;
    result = data_val;
    *(source_val + 6) = entity_2;
    source_val[2] = flagP;
    *(source_val + 0xa) = result;
    source_val[6] = 0;

    if (context_val[8] == 1)
    {
        int32_t entity_4 = g_a7c130;
        result = *(g_a7c12c + (entity_4 << 2)) * g_a7c138 + g_a7c128;
        *(g_a7c13c + result) = entity_4;
        g_a7c130 += 1;
        *result = source_val;
    }

    return result;
}
