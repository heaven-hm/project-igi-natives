// Original IGI.EXE function: HumanPlayer_LoadParameters_10 (VA 0x0040FDA0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_LoadParameters_10.h"
void* HumanPlayer_LoadParameters_10(void* context, void* param_2)

{
    void* temp_val = *(param_2 + 0x2f0);
    *(param_2 + 0x2f8) = *(param_2 + 0x2fc);
    *(param_2 + 0x2fc) = 0x2d;
    int32_t entity_1 = *(temp_val + 0xb4);
    *(param_2 + 0x300) = entity_1;
    entity_1(param_2 + 0x2ec, param_2);
    *(param_2 + 0x4d0) = 0;
    *(context + 0x14) = sub_40fdf0;
    return context;
}
