// Original IGI.EXE function: CloseCombat (VA 0x0048DBB0; static CFG gate PASS, CFG score 1.000).
#include "CloseCombat.h"
bool CloseCombat(void* context)

{
    char* item_8 = "Stand - CloseCombat Trigger";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 9, 1.0f);
    return !Locomotion_GetState(context, 0);
}
