#include "Sys_InternalErrorUnknown.h"
int32_t Sys_InternalErrorUnknown(int32_t* a1, int32_t* a2)

{
    int32_t valA1 = a2[2] - 1;
    void v_40;

    switch (valA1)
    {
        case 0:
        {
            int32_t* i_3 = a2[3];
            int32_t* i = *i_3;

            if (!i)
                return valA1;

            int32_t valA2;

            do
            {
                valA2 = Sys_InternalErrorUnknown(a1, i_3);
                i_3 = i;
                i = *i;
            } while (i);

            return valA2;
            break;
        }
        case 1:
        {
            Sys_UnknownExpressionTyp(a1, a2[3]);
            Sys_FreeMemory_27(0x15, a1);
            Sys_ReadFileBlock_27(&v_40, 0x5479f0, a2);
            Sys_CloseFileStream_27(a1, &v_40);
            Sys_OpenFileStream_27(a1);
            Sys_InternalErrorUnknown(a1, a2[4]);
            Sys_FreeMemory_27(0x14, a1);
            Sys_ReadFileBlock_27(&v_40, 0x5479ec, a2);
            Sys_CloseFileStream_27(a1, &v_40);
            Sys_OpenFileStream_27(a1);
            int32_t* i_2 = a2[5];
            int32_t* i_4 = a2;

            for (int32_t* i_1 = *i_2; i_1; i_1 = *i_1)
            {
                Sys_ReadFileBlock_27(&v_40, 0x5479f0, i_4);
                Sys_CloseFileStream_27(a1, &v_40);
                Sys_CloseFileStream_27(a1, 0x5479e8);
                Sys_OpenFileStream_27(a1);
                Sys_UnknownExpressionTyp(a1, i_2[3]);
                Sys_FreeMemory_27(0x15, a1);
                Sys_ReadFileBlock_27(&v_40, 0x5479f0, i_2);
                Sys_CloseFileStream_27(a1, &v_40);
                Sys_OpenFileStream_27(a1);
                Sys_InternalErrorUnknown(a1, i_2[4]);
                Sys_FreeMemory_27(0x14, a1);
                Sys_ReadFileBlock_27(&v_40, 0x5479ec, a2);
                Sys_CloseFileStream_27(a1, &v_40);
                Sys_OpenFileStream_27(a1);
                i_4 = i_2;
                i_2 = i_1;
            }

            Sys_ReadFileBlock_27(&v_40, 0x5479f0, i_4);
            Sys_CloseFileStream_27(a1, &v_40);
            Sys_CloseFileStream_27(a1, 0x5479e8);
            Sys_OpenFileStream_27(a1);
            int32_t* valA5 = a2[8];

            if (valA5)
                Sys_InternalErrorUnknown(a1, valA5);

            Sys_ReadFileBlock_27(&v_40, 0x5479ec, a2);
            Sys_CloseFileStream_27(a1, &v_40);
            Sys_CloseFileStream_27(a1, 0x5479e8);
            return Sys_OpenFileStream_27(a1);
            break;
        }
        case 3:
        {
            Sys_ReadFileBlock_27(&v_40, 0x5479e4, a2);
            Sys_CloseFileStream_27(a1, &v_40);
            Sys_CloseFileStream_27(a1, 0x5479e8);
            Sys_OpenFileStream_27(a1);
            Sys_UnknownExpressionTyp(a1, a2[3]);
            Sys_FreeMemory_27(0x15, a1);
            Sys_ReadFileBlock_27(&v_40, 0x5479e0, a2);
            Sys_CloseFileStream_27(a1, &v_40);
            Sys_OpenFileStream_27(a1);
            Sys_InternalErrorUnknown(a1, a2[4]);
            Sys_FreeMemory_27(0x14, a1);
            Sys_ReadFileBlock_27(&v_40, 0x5479e4, a2);
            Sys_CloseFileStream_27(a1, &v_40);
            Sys_OpenFileStream_27(a1);
            Sys_ReadFileBlock_27(&v_40, 0x5479e0, a2);
            Sys_CloseFileStream_27(a1, &v_40);
            Sys_CloseFileStream_27(a1, 0x5479e8);
            return Sys_OpenFileStream_27(a1);
            break;
        }
        case 6:
        {
            char* dstD1 = a2[3];

            if (!dstD1)
                return valA1;

            Sys_UnknownExpressionTyp(a1, dstD1);
            Sys_FreeMemory_27(0x12, a1);
            return Sys_OpenFileStream_27(a1);
            break;
        }
    }

    Error_Show("Internal error: Unknown statement block type.");

    while (true)
        /* nop */
}
