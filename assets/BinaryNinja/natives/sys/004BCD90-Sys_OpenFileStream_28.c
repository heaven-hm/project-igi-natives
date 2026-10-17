// IGI native provenance: Sys_OpenFileStream_28 - 0x004BCD90 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BCD90-Sys_OpenFileStream_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_28.h"
int32_t Sys_OpenFileStream_28(char* context, int32_t* param_2)

{
    char* source_val = context;
    int32_t* data_1 = *(*(source_val + 0x28) + (*(source_val + 0x1c) << 2));

    if (data_1 == 6)
    {
        Sys_UnknownDataType_3(source_val, param_2, nullptr, nullptr);
        return 1;
    }

    if (data_1 == 4)
    {
        int32_t saved_ctx;
        Sys_FreeMemory_28(source_val, &context, &saved_ctx, data_1);

        if (Sys_ReadFileBlock_25(context, param_2))
            return 1;

        char* temp_3 = context;
        int32_t entity_1 = *(source_val + 0x14);
        *(source_val + 0x20) = 7;
        *(source_val + 0x10) = entity_1;
        Sys_ReadFileBlock_28(source_val, temp_3, 4);
        char* dest_1 = context;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_2 = ~i;
        int32_t source_2;
        int32_t dest_4;
        dest_4 = memcpy(&source_val[0x68], dest_1 - entity_2, entity_2 & 0xfffffffc);
        memcpy(dest_4, source_2, entity_2 & 3);
    }

    return 0;
}
