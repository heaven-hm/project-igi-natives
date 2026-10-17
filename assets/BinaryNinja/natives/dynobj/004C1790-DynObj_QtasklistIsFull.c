// Original IGI.EXE function: DynObj_QtasklistIsFull (VA 0x004C1790; static CFG gate PASS, CFG score 1.000).
#include "DynObj_QtasklistIsFull.h"
int32_t* DynObj_QtasklistIsFull(int32_t* context, int32_t param_2)

{
    int32_t entity_val = *context;

    if (entity_val < context[1])
    {
        context[entity_val + 2] = param_2;
        *context += 1;
        return context;
    }

    Error_Show("QTaskList is full");

    while (true)
        /* nop */
}
