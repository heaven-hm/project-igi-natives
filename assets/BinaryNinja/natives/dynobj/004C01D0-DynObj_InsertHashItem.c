// Original IGI.EXE function: DynObj_InsertHashItem (VA 0x004C01D0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InsertHashItem.h"
int32_t DynObj_InsertHashItem(void* context)

{
    char* entity_val = *(context + 0x14);
    char data_val = *entity_val;

    if (data_val)
    {
        while (true)
        {
            if (data_val == 0x2e || data_val == 0x65 || data_val == 0x45)
                return 0;

            data_val = entity_val[1];
            entity_val = &entity_val[1];

            if (!data_val)
                break;

            continue;
        }
    }

    return 1;
}
