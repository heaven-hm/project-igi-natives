// IGI native provenance: Sys_CloseFileStream_26 - 0x004BB030 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BB030-Sys_CloseFileStream_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_26.h"
int32_t Sys_CloseFileStream_26(void* context, void* param_2)

{
    int32_t result = 0;
    void item_800;
    Sys_ExecuteBytecode_26(&item_800, param_2);
    int32_t* flagP = *(context + 0x38);
    int32_t* dest_val = *flagP;

    if (!dest_val)
    {
    label_4bb0b3:
        int32_t* data_5 = Mem_Alloc(0x808, 4);
        data_5[1] = 0;
        *data_5 = 0;
        Camera_SetFieldOfView_33(context + 0x38, data_5);
        void* dest_1 = &item_800;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_2 = ~i;
        int32_t source_4;
        int32_t dest_4;
        dest_4 = memcpy(&data_5[2], dest_1 - entity_2, entity_2 & 0xfffffffc);
        memcpy(dest_4, source_4, entity_2 & 3);
    }
    else
    {
        while (true)
        {
            char* source_1 = &item_800;
            char* data_2 = &flagP[2];
            int32_t data_4;

            while (true)
            {
                char temp_1 = *data_2;
                char f0_1 = *source_1;
                bool c_1 = temp_1 < f0_1;

                if (temp_1 == f0_1)
                {
                    if (!temp_1)
                    {
                        data_4 = 0;
                        break;
                    }

                    temp_1 = data_2[1];
                    char f3_1 = source_1[1];
                    c_1 = temp_1 < f3_1;

                    if (temp_1 == f3_1)
                    {
                        data_2 = &data_2[2];
                        source_1 = &source_1[2];

                        if (temp_1)
                            continue;

                        data_4 = 0;
                        break;
                    }
                }

                data_4 = data_2 - data_2 + 1;
                break;
            }

            if (!data_4)
                break;

            flagP = dest_val;
            dest_val = *dest_val;
            result += 1;

            if (!dest_val)
                goto label_4bb0b3;
        }

        if (!flagP)
            goto label_4bb0b3;
    }

    return result;
}
