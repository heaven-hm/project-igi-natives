// IGI native provenance: DynObj_ParseConfigFile_3 - 0x004C0F80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0F80-DynObj_ParseConfigFile_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_ParseConfigFile_3.h"
void** DynObj_ParseConfigFile_3(void** context, int32_t* param_2)

{
    void item_2c8;
    void** data_1 = Sys_PushStack_26(&item_2c8, param_2[6]);

    if (data_1)
    {
        void** item_4;
        data_1 = item_4;
        int32_t dest_1 = *param_2;
        int32_t context_1 = 0;
        int32_t item_2cc = 0;

        if (data_1 == 7)
        {
            int32_t* data_2 = param_2[4];
            char item_2cd = 0x18;
            Sys_CloseFileStream_4(data_2, &item_2cd, 1);
            Sys_CloseFileStream_4(param_2[4], &item_2cc, 4);
            data_1 = Sys_PushStack_26(&item_2c8, param_2[6]);

            if (data_1)
            {
                int32_t dest_2 = dest_1 + 5;

                while (true)
                {
                    data_1 = item_4;

                    if (data_1 == 9)
                    {
                        void item_2c0;
                        data_1 = Sys_ReadFileBlock_26(param_2, &item_2c0);

                        if (!data_1)
                            break;

                        data_1[2] = dest_2;
                        data_1[3] = 0;
                        goto label_4c1055;
                    }

                    if (data_1 == 0xc)
                    {
                        void item_2bf;
                        item_2cc = DynObj_FindSymbol_3(&item_2bf);
                    label_4c1055:
                        Sys_CloseFileStream_4(param_2[4], &item_2cc, 4);
                        context_1 += 1;
                        dest_2 += 4;
                        data_1 = Sys_PushStack_26(&item_2c8, param_2[6]);

                        if (!data_1)
                            break;

                        data_1 = item_4;

                        if (data_1 == 6)
                        {
                            data_1 = Sys_PushStack_26(&item_2c8, param_2[6]);

                            if (!data_1)
                                break;

                            continue;
                        }
                        else if (data_1 != 8)
                            break;
                    }
                    else if (data_1 != 8)
                        break;

                    *context = (context_1 << 2) + 5;
                    int32_t* data_8 = Sys_AllocateMemory_26(param_2, *param_2 + 1);
                    data_8[3] = context_1;
                    return data_8;
                }
            }
        }
    }

    param_2[1] = 1;
    return data_1;
}
