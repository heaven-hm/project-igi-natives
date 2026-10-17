// IGI native provenance: Sys_UnexpectedEndOfFile - 0x004BF1F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BF1F0-Sys_UnexpectedEndOfFile.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_UnexpectedEndOfFile.h"
int32_t Sys_UnexpectedEndOfFile(int32_t* context, void** param_2)

{
    *param_2 = 0;
    int32_t* data_val = Mem_Alloc(0x18, 4);
    int32_t* context_val = context;
    data_val[2] = 1;
    data_val[1] = 0;
    *data_val = 0;
    data_val[3] = &data_val[4];
    data_val[5] = &data_val[3];
    data_val[4] = 0;

    if (Sys_While(context_val) != 1)
        context = 1;
    else
    {
        if (!Sys_CloseFileStream_31(context_val, &context_val[2]))
        {
            Sys_FreeMemory_22("Unexpected end of file.");
            Sys_UnknownBlockType(data_val);
            return 0;
        }

        context = nullptr;
    }

    while (true)
    {
        int32_t data_5 = Sys_While(context_val);
        char* item_4;

        if (!data_5)
        {
            if (Sys_ResolveSymbol_24(context_val, &item_4, 0, 0))
            {
                int32_t* data_9 = Mem_Alloc(0x10, 4);
                data_9[2] = 7;
                data_9[1] = 0;
                *data_9 = 0;
                data_9[3] = item_4;
                Camera_SetFieldOfView_33(&data_val[3], data_9);
            label_4bf2eb:

                if (context)
                {
                    *param_2 = data_val;
                    return 1;
                }

                if (Sys_CloseFileStream_31(context_val, &context_val[2]))
                    continue;

                Sys_FreeMemory_22("Unexpected end of file.");
            }
            else if (g_a965a8)
                Sys_FreeMemory_22("Script error: Aborting.\n");
        }
        else
        {
            if (data_5 == 2)
                break;

            void** item_8;

            if (Sys_SyntaxErrorInLineD(context_val, &item_8))
            {
                Camera_SetFieldOfView_33(&data_val[3], item_8);
                goto label_4bf2eb;
            }
        }
        Sys_UnknownBlockType(data_val);
        return 0;
    }

    if (!context)
    {
        *param_2 = data_val;
        return 1;
    }

    int32_t item_20_6 = Sys_AllocateMemory_31(context_val);
    Sys_FreeMemory_22("Unexpected '}' in line %d");
    Sys_UnknownBlockType(data_val);
    return 0;
}
