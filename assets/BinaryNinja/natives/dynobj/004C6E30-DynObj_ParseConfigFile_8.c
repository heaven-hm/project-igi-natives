// Original IGI.EXE function: DynObj_ParseConfigFile_8 (VA 0x004C6E30; static CFG gate PASS, CFG score 1.000).
#include "DynObj_ParseConfigFile_8.h"
void* DynObj_ParseConfigFile_8(void* context, void* param_2)

{
    void* entity_val = *(context + 0x2c);

    if (!entity_val)
    {
        *(param_2 + 0x58) = 0;
        *(param_2 + 0x54) = 0;
        *(param_2 + 0x50) = context;
        *(context + 0x2c) = param_2;
        return param_2;
    }

    *(entity_val + 0x54) = param_2;
    *(param_2 + 0x58) = entity_val;
    *(param_2 + 0x54) = 0;
    *(param_2 + 0x50) = context;
    *(context + 0x2c) = param_2;
    return param_2;
}
