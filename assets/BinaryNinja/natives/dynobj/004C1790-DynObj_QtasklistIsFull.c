// IGI native provenance: DynObj_QtasklistIsFull - 0x004C1790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C1790-DynObj_QtasklistIsFull.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
