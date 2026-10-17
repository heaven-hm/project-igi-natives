// IGI native provenance: Sys_InternalErrorUnknown - 0x004BBF80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BBF80-Sys_InternalErrorUnknown.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_InternalErrorUnknown.h"
int32_t Sys_InternalErrorUnknown(int32_t* context, int32_t* param_2)

{
    int32_t data_1 = param_2[2] - 1;
    void item_40;

    switch (data_1)
    {
        case 0:
        {
            int32_t* i_3 = param_2[3];
            int32_t* i = *i_3;

            if (!i)
                return data_1;

            int32_t data_2;

            do
            {
                data_2 = Sys_InternalErrorUnknown(context, i_3);
                i_3 = i;
                i = *i;
            } while (i);

            return data_2;
            break;
        }
        case 1:
        {
            Sys_UnknownExpressionTyp(context, param_2[3]);
            Sys_FreeMemory_27(0x15, context);
            Sys_ReadFileBlock_27(&item_40, 0x5479f0, param_2);
            Sys_CloseFileStream_27(context, &item_40);
            Sys_OpenFileStream_27(context);
            Sys_InternalErrorUnknown(context, param_2[4]);
            Sys_FreeMemory_27(0x14, context);
            Sys_ReadFileBlock_27(&item_40, 0x5479ec, param_2);
            Sys_CloseFileStream_27(context, &item_40);
            Sys_OpenFileStream_27(context);
            int32_t* i_2 = param_2[5];
            int32_t* i_4 = param_2;

            for (int32_t* i_1 = *i_2; i_1; i_1 = *i_1)
            {
                Sys_ReadFileBlock_27(&item_40, 0x5479f0, i_4);
                Sys_CloseFileStream_27(context, &item_40);
                Sys_CloseFileStream_27(context, 0x5479e8);
                Sys_OpenFileStream_27(context);
                Sys_UnknownExpressionTyp(context, i_2[3]);
                Sys_FreeMemory_27(0x15, context);
                Sys_ReadFileBlock_27(&item_40, 0x5479f0, i_2);
                Sys_CloseFileStream_27(context, &item_40);
                Sys_OpenFileStream_27(context);
                Sys_InternalErrorUnknown(context, i_2[4]);
                Sys_FreeMemory_27(0x14, context);
                Sys_ReadFileBlock_27(&item_40, 0x5479ec, param_2);
                Sys_CloseFileStream_27(context, &item_40);
                Sys_OpenFileStream_27(context);
                i_4 = i_2;
                i_2 = i_1;
            }

            Sys_ReadFileBlock_27(&item_40, 0x5479f0, i_4);
            Sys_CloseFileStream_27(context, &item_40);
            Sys_CloseFileStream_27(context, 0x5479e8);
            Sys_OpenFileStream_27(context);
            int32_t* data_5 = param_2[8];

            if (data_5)
                Sys_InternalErrorUnknown(context, data_5);

            Sys_ReadFileBlock_27(&item_40, 0x5479ec, param_2);
            Sys_CloseFileStream_27(context, &item_40);
            Sys_CloseFileStream_27(context, 0x5479e8);
            return Sys_OpenFileStream_27(context);
            break;
        }
        case 3:
        {
            Sys_ReadFileBlock_27(&item_40, 0x5479e4, param_2);
            Sys_CloseFileStream_27(context, &item_40);
            Sys_CloseFileStream_27(context, 0x5479e8);
            Sys_OpenFileStream_27(context);
            Sys_UnknownExpressionTyp(context, param_2[3]);
            Sys_FreeMemory_27(0x15, context);
            Sys_ReadFileBlock_27(&item_40, 0x5479e0, param_2);
            Sys_CloseFileStream_27(context, &item_40);
            Sys_OpenFileStream_27(context);
            Sys_InternalErrorUnknown(context, param_2[4]);
            Sys_FreeMemory_27(0x14, context);
            Sys_ReadFileBlock_27(&item_40, 0x5479e4, param_2);
            Sys_CloseFileStream_27(context, &item_40);
            Sys_OpenFileStream_27(context);
            Sys_ReadFileBlock_27(&item_40, 0x5479e0, param_2);
            Sys_CloseFileStream_27(context, &item_40);
            Sys_CloseFileStream_27(context, 0x5479e8);
            return Sys_OpenFileStream_27(context);
            break;
        }
        case 6:
        {
            char* dest_1 = param_2[3];

            if (!dest_1)
                return data_1;

            Sys_UnknownExpressionTyp(context, dest_1);
            Sys_FreeMemory_27(0x12, context);
            return Sys_OpenFileStream_27(context);
            break;
        }
    }

    Error_Show("Internal error: Unknown statement block type.");

    while (true)
        /* nop */
}
