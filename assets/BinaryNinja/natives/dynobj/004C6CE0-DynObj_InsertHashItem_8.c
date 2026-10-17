// Original IGI.EXE function: DynObj_InsertHashItem_8 (VA 0x004C6CE0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InsertHashItem_8.h"
void* DynObj_InsertHashItem_8(void* context, void* param_2)

{
    void* result = *(param_2 + 0x58);

    if (param_2 != *(context + 0x2c))
    {
        void* entity_1 = *(param_2 + 0x54);

        if (result)
            *(result + 0x54) = entity_1;

        if (entity_1)
            *(entity_1 + 0x58) = result;
    }
    else
    {
        *(context + 0x2c) = result;

        if (result)
            *(result + 0x54) = 0;
    }

    return result;
}
