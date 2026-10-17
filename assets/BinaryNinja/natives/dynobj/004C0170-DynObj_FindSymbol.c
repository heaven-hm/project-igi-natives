// Original IGI.EXE function: DynObj_FindSymbol (VA 0x004C0170; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol.h"
int32_t DynObj_FindSymbol(void* context)

{
    char* temp_val = *(context + 0x14);
    char entity_val = *temp_val;

    if (entity_val >= 0x30 && entity_val <= 0x39)
        return 1;

    if (entity_val == 0x24)
    {
        char data_1 = temp_val[1];

        if ((data_1 >= 0x30 && data_1 <= 0x39) || (data_1 >= 0x61 && data_1 <= 0x66))
            return 1;

        if (data_1 >= 0x41 && data_1 <= 0x46)
            return 1;
    }

    if ((entity_val != 0x30 || temp_val[1] != 0x78) && temp_val[1] != 0x58)
        return 0;

    return 1;
}
