// IGI native provenance: Resource_PackUnpack - 0x004B18B0 - CFG score 97.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B18B0-Resource_PackUnpack.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Resource_PackUnpack.h"
void* Resource_PackUnpack(void* context, int32_t* param_2)

// Sig: int Resource_PackUnpack(char* resFile, char** outBuffer)
// Note: Opens a PACKED resource file via QFile_ReadWrite (0x4B1510, mode string
// at 0x53B604) and unpacks its contents through the pack table at 0x9436E8.
// Params: resFile = packed resource path, outBuffer = receives unpacked data.
// RETURNS entry/result pointer.
{
    void* dest_val = context;
    int32_t* data_val = QFile_ReadWrite(dest_val, "r");

    if (data_val)
    {
        if (*(*data_val * 0x8c + &g_9436e8))
        {
            void** data_4 = Sys_FreeMemory_5(dest_val);
            data_4[3] = *data_val;
            int32_t temp_1 = *data_val;
            int32_t data_5 = (*(temp_1 * 0x8c + &g_9436e8))(temp_1, data_val, &context, data_4);
            Sys_ReadFileBlock_4(data_val);

            if (param_2)
                *param_2 = context;

            return data_5;
        }

        int32_t data_8 = Sys_PushStack_4(data_val);
        void* data_9 = Mem_Alloc(data_8, 4);
        void** data_10 = Sys_FreeMemory_5(dest_val);
        data_10[3] = *data_val;
        data_10[6] = data_9;
        data_10[4] = data_8;
        Resource_Unpack(data_val, data_9, data_8);
        Sys_CheckHeap_4(data_val, 0);

        if (!Sys_PopStack_4(data_val))
        {
            if (param_2)
                *param_2 = data_8;

            Sys_ReadFileBlock_4(data_val);
            return data_9;
        }

        Sys_CheckHeap_25(data_10);
        Sys_ExecuteBytecode_2(data_9);
        Sys_ReadFileBlock_4(data_val);

        if (param_2)
            *param_2 = 0;
    }

    return 0;
}
