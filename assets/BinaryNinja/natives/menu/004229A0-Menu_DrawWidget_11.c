// Original IGI.EXE function: Menu_DrawWidget_11 (VA 0x004229A0; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_11.h"
int32_t Menu_DrawWidget_11(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)

{
    int32_t result = *(context + (param_5 << 2) + 0x94);

    if (result)
    {
        int32_t data_val;
        int32_t entity_1;
        data_val = Sys_ExecuteBytecode_17(result);
        int32_t i_1 = param_4 / data_val;
        result = param_6;

        if (result)
        {
            result = Sys_CloseFileStream_17(*(context + (param_5 << 2) + 0x94));
            entity_1 = param_2 - result;
            param_2 = entity_1;
        }

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                int32_t item_2c_1 = entity_1;
                result = Sys_ResolveSymbol_14(*(context + (param_5 << 2) + 0x94), param_2, param_3, 128.0f, 128.0f, 128.0f, 0,
                    0, 0xffffffff);
                entity_1 = param_3 + data_val;
                i = i_1;
                i_1 -= 1;
                param_3 = entity_1;
            } while (i != 1);
        }
    }

    return result;
}
