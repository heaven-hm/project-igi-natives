// IGI native provenance: AI_UpdateSensors_3 - 0x004526E0 - CFG score 96.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004526E0-AI_UpdateSensors_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateSensors_3.h"
void* AI_UpdateSensors_3(void* context)

{
    int32_t context_val = *(context + 0x14);
    int32_t item_50 = 0;
    int32_t item_4c = 0xc0c80000;
    int32_t item_48 = 0;
    int32_t item_44 = 0;
    int32_t item_40 = 0;
    int32_t item_3c = 0;
    double item_58 = *(AI_CheckVisibility_19(context_val) + 8) * item_40;
    double item_60 = *(AI_CheckVisibility_19(context_val) + 4) * item_48;
    double item_20 = *AI_CheckVisibility_19(context_val) * item_50 + item_60 + item_58;
    double item_60_1 = *(AI_CheckVisibility_19(context_val) + 0x14) * item_40;
    double item_58_1 = *(AI_CheckVisibility_19(context_val) + 0x10) * item_48;
    double item_18 = *(AI_CheckVisibility_19(context_val) + 0xc) * item_50 + item_58_1 + item_60_1;
    double item_60_2 = *(AI_CheckVisibility_19(context_val) + 0x20) * item_40;
    double item_58_2 = *(AI_CheckVisibility_19(context_val) + 0x1c) * item_48;
    long double fpu_val_7_23 = *(AI_CheckVisibility_19(context_val) + 0x18) * item_50 + item_58_2 + item_60_2;
    double item_10 = fpu_val_7_23;
    long double fpu6 = item_20;
    memcpy(&item_50, &item_20, 0x18);
    double item_38;
    memcpy(&item_38, &item_20, 0x18);
    item_38 = -(fpu6);
    double item_30;
    double item_30_1 = -(item_30);
    double item_28 = fpu_val_7_23;
    double* data_10 = DynObj_UpdateDynTree_4(context_val);
    item_50 = item_50 + *data_10;
    item_48 = item_48 + *(DynObj_UpdateDynTree_4(context_val) + 8);
    item_40 = item_40 + *(DynObj_UpdateDynTree_4(context_val) + 0x10);
    double* data_13 = DynObj_UpdateDynTree_4(context_val);
    item_38 = item_38 + *data_13;
    double item_30_2 = item_30_1 + *(DynObj_UpdateDynTree_4(context_val) + 8);
    double item_28_1 = item_28 + *(DynObj_UpdateDynTree_4(context_val) + 0x10);
    void* data_17 = Script_ExecuteLevelScript_23(*(context + 0x3b6c), *(context + 0x3e2c));

    if (!data_17)
        return data_17;

    int32_t item_78_1 = 0;
    int32_t dest_val = 2;

    if (Script_FormatString_23(&item_50, data_17, 0.0f, 0))
        dest_val = 3;

    int32_t item_78_2 = 0;

    if (Script_FormatString_23(&item_38, data_17, 0.0f, 0))
        return dest_val;

    return dest_val & 0xfffffffd;
}
