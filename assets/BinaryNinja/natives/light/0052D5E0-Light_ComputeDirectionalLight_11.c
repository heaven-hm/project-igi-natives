// Original IGI.EXE function: Light_ComputeDirectionalLight_11 (VA 0x0052D5E0; static CFG gate PASS, CFG score 1.000).
#include "Light_ComputeDirectionalLight_11.h"
int32_t Light_ComputeDirectionalLight_11(void* context, char* param_2)

{
    int32_t item_4 = *(context + 0x14);
    int32_t item_8 = *(context + 0x10);
    int32_t item_c = *(context + 0xc);
    return Game_DataSymbolLoad(param_2, "%02d-%02d-%02d");
}
