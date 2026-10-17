// IGI native provenance: Wheel_Process - 0x00430170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00430170-Wheel_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Wheel_Process.h"
void* Wheel_Process(void* context)

{
    void* source_val = *(context + 0x130);
    int16_t data_val = Menu_LeaveMenus_23();

    if (*(source_val + 0x1c) == data_val)
    {
        *(source_val + 0x750) -= 1;
        *(source_val + *(context + 0x148) * 0x1c + 0x75c) = 0;
    }

    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
