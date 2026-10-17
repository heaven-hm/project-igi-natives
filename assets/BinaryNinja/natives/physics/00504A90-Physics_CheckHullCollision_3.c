// Original IGI.EXE function: Physics_CheckHullCollision_3 (VA 0x00504A90; static CFG gate PASS, CFG score 1.000).
#include "Physics_CheckHullCollision_3.h"
int32_t Physics_CheckHullCollision_3(int32_t context)

{
    int32_t entity_val = context;
    int32_t data_val = 0;

    while (!(entity_val & 1))
    {
        entity_val s>>= 1;
        data_val += 1;
    }

    int32_t data_2 = data_val * 0xc;
    *(data_2 + &g_a7a640) = 0;
    return Sys_CloseFileStream_23(*(data_2 + 0xa7a644));
}
