// Original IGI.EXE function: Light_ComputeDirectionalLight_3 (VA 0x00523900; static CFG gate PASS, CFG score 0.917).
#include "Light_ComputeDirectionalLight_3.h"
void* Light_ComputeDirectionalLight_3(int32_t* context)

{
    Qhash_Init(1);
    Struct_Clear36(context);
    memset(context, 0, 0x24);
    return Qhash_Reset();
}
