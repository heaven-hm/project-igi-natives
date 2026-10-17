// Original IGI.EXE function: Light_SampleLightmap_10 (VA 0x0052D5B0; static CFG gate PASS, CFG score 1.000).
#include "Light_SampleLightmap_10.h"
int32_t Light_SampleLightmap_10(int32_t* context, char* param_2)

{
    int32_t item_4 = context[2];
    int32_t item_8 = context[1];
    int32_t item_c = *context;
    return Game_DataSymbolLoad(param_2, "%04d-%02d-%02d");
}
