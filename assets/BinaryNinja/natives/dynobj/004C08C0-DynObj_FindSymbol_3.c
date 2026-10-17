// Original IGI.EXE function: DynObj_FindSymbol_3 (VA 0x004C08C0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_3.h"
int32_t DynObj_FindSymbol_3(char* context)

{
    char* temp_val = context;
    int32_t result = 0;
    char i = *temp_val;

    while (i)
    {
        int32_t i_1 = i;
        int32_t entity_val;

        if (i_1 >= 0x30 && i_1 <= 0x39)
            entity_val = i_1 - 0x30;
        else if (i_1 < 0x41 || i_1 > 0x46)
            entity_val = i_1 - 0x57;
        else
            entity_val = i_1 - 0x37;

        result = result << 4 | entity_val;
        i = temp_val[1];
        temp_val = &temp_val[1];
    }

    return result;
}
