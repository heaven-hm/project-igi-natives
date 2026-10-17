// IGI native provenance: Menu_PlayMusic_11 - 0x004227A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004227A0-Menu_PlayMusic_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_11.h"
int32_t Menu_PlayMusic_11(void* context, int32_t param_2, int32_t param_3, int32_t param_4, float param_5, int32_t param_6, int32_t param_7, int32_t param_8)

{
    int32_t dest_val = 0;
    int32_t flagP = 0;
    int32_t item_4 = 0;
    int32_t result = 0;
    int32_t result_4;

    if (*(context + 0x94))
    {
        dest_val = Sys_CloseFileStream_17(*(context + (param_5 << 2) + 0x94));
        int32_t result_1;
        result_1 = Sys_ExecuteBytecode_17(*(context + (param_5 << 2) + 0x94));
        result = result_1;
    }

    if (*(context + 0x98))
    {
        flagP = Sys_CloseFileStream_17(*(context + (param_6 << 2) + 0x94));
        result_4 = result;

        if (result_4 <= Sys_ExecuteBytecode_17(*(context + (param_6 << 2) + 0x94)))
        {
            int32_t result_2;
            result_2 = Sys_ExecuteBytecode_17(*(context + (param_6 << 2) + 0x94));
            result = result_2;
        }
    }

    int32_t context_3 = param_7;

    if (*(context + 0x9c))
    {
        item_4 = Sys_CloseFileStream_17(*(context + (context_3 << 2) + 0x94));
        result_4 = result;

        if (result_4 <= Sys_ExecuteBytecode_17(*(context + (context_3 << 2) + 0x94)))
        {
            int32_t result_3;
            result_3 = Sys_ExecuteBytecode_17(*(context + (context_3 << 2) + 0x94));
            result = result_3;
        }
    }

    if (param_8)
        param_3 -= result;

    int32_t data_16;

    if (!dest_val)
        data_16 = param_4;
    else
    {
        int32_t result_8 = result_4;
        int32_t result_5 = result_4;
        result_4 = Sys_ResolveSymbol_14(*(context + (param_5 << 2) + 0x94), param_2, param_3, 128.0f, 128.0f, 128.0f, 0, 0, 0);
        param_2 += dest_val;
        data_16 = param_4 - dest_val;
    }

    if (!flagP)
    {
        result_4 = param_2 + data_16 - item_4;
        param_2 = result_4;
    }
    else
    {
        int32_t i_2 = (data_16 - item_4) / flagP;

        if (i_2 > 0)
        {
            int32_t i_1 = i_2;
            int32_t i;

            do
            {
                int32_t result_6 = result_4;
                Sys_ResolveSymbol_14(*(context + (param_6 << 2) + 0x94), param_2, param_3, 128.0f, 128.0f, 128.0f, 0, 0, 0);
                result_4 = param_2 + flagP;
                i = i_1;
                i_1 -= 1;
                param_2 = result_4;
            } while (i != 1);
            context_3 = param_7;
        }
    }

    if (item_4)
    {
        int32_t result_9 = result_4;
        int32_t result_7 = result_4;
        Sys_ResolveSymbol_14(*(context + (context_3 << 2) + 0x94), param_2, param_3, 128.0f, 128.0f, 128.0f, 0, 0, 0);
    }

    return result;
}
