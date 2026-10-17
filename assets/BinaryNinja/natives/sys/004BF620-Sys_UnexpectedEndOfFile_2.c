// IGI native provenance: Sys_UnexpectedEndOfFile_2 - 0x004BF620 - CFG score 97.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BF620-Sys_UnexpectedEndOfFile_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_UnexpectedEndOfFile_2.h"
int32_t Sys_UnexpectedEndOfFile_2(int32_t* context, int32_t* param_2)

{
    Sys_While(context);
    int32_t* data_val = Mem_Alloc(0x24, 4);
    memset(data_val, 0, 0x24);
    data_val[1] = 0;
    *data_val = 0;
    data_val[2] = 2;
    data_val[5] = &data_val[6];
    data_val[6] = 0;
    data_val[7] = &data_val[5];
    *param_2 = data_val;

    if (!Sys_CloseFileStream_31(context, &context[2]))
    {
    label_4bf7e7:
        Sys_FreeMemory_22("Unexpected end of file.");
    }
    else if (*context[7] == 0x28)
    {
        int32_t item_14_1 = 0;

        if (Sys_PopStack_24(context, &data_val[3]))
        {
            if (!Sys_CloseFileStream_31(context, &context[2]))
            {
            label_4bf7e7_1:
                Sys_FreeMemory_22("Unexpected end of file.");
            }
            else if (Sys_UnexpectedEndOfFile(context, &data_val[4]))
            {
                if (!Sys_CloseFileStream_31(context, &context[2]))
                    return 1;

                int32_t* item_14_6 = &context[2];

                if (Sys_While(context) != 4)
                {
                label_4bf83e:
                    Sys_ReadFileBlock_31(&context[2], item_14_6);
                    return 1;
                }

                if (!Sys_CloseFileStream_31(context, item_14_6))
                {
                    Sys_FreeMemory_22("Unexpected end of file.");
                    return 1;
                }

                if (Sys_While(context) != 3)
                {
                label_4bf810:

                    if (Sys_UnexpectedEndOfFile(context, &data_val[8]))
                        return 1;
                }
                else
                {
                    if (Sys_CloseFileStream_31(context, &context[2]))
                    {
                        while (true)
                        {
                            if (*context[7] != 0x28)
                                goto label_4bf7f6;

                            int32_t* data_13 = Mem_Alloc(0x14, 4);
                            void** source_1 = data_13;
                            *data_13 = 0;
                            data_13[1] = 0;
                            memset(source_1, 0, 0x14);
                            source_1[2] = 3;
                            Camera_SetFieldOfView_33(&data_val[5], source_1);
                            int32_t item_24_1 = 0;

                            if (!Sys_PopStack_24(context, &source_1[3]))
                                goto label_4bf7f6;

                            if (!Sys_CloseFileStream_31(context, &context[2]))
                                goto label_4bf7e7_2;

                            if (!Sys_UnexpectedEndOfFile(context, &source_1[4]))
                                goto label_4bf7f6;

                            if (!Sys_CloseFileStream_31(context, &context[2]))
                                return 1;

                            item_14_6 = &context[2];

                            if (Sys_While(context) != 4)
                                goto label_4bf83e;

                            if (!Sys_CloseFileStream_31(context, item_14_6))
                                goto label_4bf7e7_2;

                            if (Sys_While(context) != 3)
                                break;

                            if (!Sys_CloseFileStream_31(context, &context[2]))
                                goto label_4bf7e7_2;
                        }

                        goto label_4bf810;
                    }

                label_4bf7e7_2:
                    Sys_FreeMemory_22("Unexpected end of file.");
                }
            }
        }
    }

label_4bf7f6:
    Sys_UnknownBlockType(*param_2);
    *param_2 = 0;
    return 0;
}
