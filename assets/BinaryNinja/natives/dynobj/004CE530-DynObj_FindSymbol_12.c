// Original IGI.EXE function: DynObj_FindSymbol_12 (VA 0x004CE530; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_12.h"
int16_t* DynObj_FindSymbol_12(int32_t context, void* param_2)

{
    int32_t* source_val = param_2 + 0xc;
    int32_t i_2 = 8;
    int16_t* result;
    int32_t i;

    do
    {
        result = *source_val;

        if (result)
            result = DynObj_FindSymbol_12(context, result);

        source_val = &source_val[1];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);

    for (void* i_1 = *(param_2 + 0x2c); i_1; i_1 = *(i_1 + 0x58))
    {
        int32_t entity_1 = 0;
        int32_t source_1 = 0;
        int32_t j_1 = 0xfe;
        int32_t j;

        do
        {
            int16_t context_1 = 0;
            result = context + ((entity_1 + *(param_2 + 0x34) * 0xfe) << 1) + 0x118;
            int32_t temp_5 = 0;
            temp_5 = *(i_1 + 0x1c);
            context_1 = *(((temp_5 + source_1) << 2) + &g_a96ae0);
            *result += context_1;
            entity_1 += 1;
            source_1 += 0x180;
            j = j_1;
            j_1 -= 1;
        } while (j != 1);
    }

    return result;
}
