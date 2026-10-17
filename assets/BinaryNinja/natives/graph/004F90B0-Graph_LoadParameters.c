// IGI native provenance: Graph_LoadParameters - 0x004F90B0 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F90B0-Graph_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Graph_LoadParameters.h"
int32_t* Graph_LoadParameters(void* context)

{
    memset(context + 0x20, 0, 0x18);
    *(context + 0x50) = 0xffffffff;
    *(context + 0x54) = 0;
    *(context + 0x58) = 0;
    *(context + 0x5c) = 0;
    *(context + 0x60) = 0;
    *(context + 0x65) = 0;
    *(context + 0x68) = 0;
    *(context + 0x69) = 0;
    *(context + 0x66) = 0;
    *(context + 0x67) = 0;
    *(context + 0x6c) = 0;
    int32_t* dest_val = Mem_Alloc(0xc, 4);
    dest_val[2] = QTask_LinkEventHandler_2(context);
    dest_val[1] = 0;
    *dest_val = 0;
    Camera_SetFieldOfView_33(&g_a77248, dest_val);
    dest_val = *(*(context + 0x14) + 0x1c);
    memset(context + 0x20, 0, 0x18);
    *(context + 0x64) = 0;

    if (TaskType_IsDerivedFrom(dest_val, DynObj_LookupHashItem_5()))
        *(context + 0x64) = 1;

    *(context + 0x78) = context + 0x70;
    *(context + 0x74) = 0;
    *(context + 0x70) = context + 0x74;
    return context + 0x74;
}
