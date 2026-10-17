// IGI native provenance: Sys_CloseFileStream_28 - 0x004BCEC0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BCEC0-Sys_CloseFileStream_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_28.h"
int32_t Sys_CloseFileStream_28(int32_t* context, int32_t* param_2, float* param_3)

{
    int32_t* data_7 = context;
    int32_t entity_1 = *(data_7[0xa] + (data_7[7] << 2));
    int32_t* item_30;

    if (entity_1 == 1)
    {
        int32_t* saved_target = nullptr;
        item_30 = nullptr;
        Sys_UnknownDataType_3(data_7, param_2, item_30, saved_target);
        *param_3 = *param_2;
        return 1;
    }

    if (entity_1 == 2)
    {
        int32_t* saved_edi_1 = nullptr;
        item_30 = nullptr;
        Sys_UnknownDataType_3(data_7, param_3, item_30, saved_edi_1);
        *param_2 = *param_3;
        return 2;
    }

    int32_t* saved_edi_2 = &context;
    item_30 = data_7;

    if (Sys_OpenFileStream_28(item_30, saved_edi_2))
    {
        int32_t* data_4 = context;
        int32_t entity_3 = *data_4;

        if (!entity_3 || entity_3 == 2)
        {
            int32_t temp_2 = data_4[6];
            item_30 = nullptr;
            int32_t item_18;
            int32_t data_5 = data_4[4](&item_18, temp_2, item_30);
            int32_t result = context[1];
            memcpy(&item_18, data_5, 0x18);

            if (result == 1)
            {
                long double fpu_val_7_2 = item_18;
                *param_2 = item_18;
                *param_3 = fpu_val_7_2;
                return result;
            }

            if (result == 2)
            {
                double item_10;
                *param_2 = item_10;
                *param_3 = item_10;
                return result;
            }
        }
    }

    return 0;
}
