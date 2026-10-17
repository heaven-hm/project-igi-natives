// IGI native provenance: AI_CheckVisibility_3 - 0x00451470 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451470-AI_CheckVisibility_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckVisibility_3.h"
int32_t AI_CheckVisibility_3(void* context)

{
    long double fpu7 = *(context + 0x34);
    long double fpu6 = *(context + 0x40);
    long double fpu5 = *(context + 0x4c);
    double item_18 = *(context + 0x70) * fpu5 + *(context + 0x64) * fpu6 + *(context + 0x58) * fpu7;
    double item_10 = *(context + 0x74) * fpu5 + *(context + 0x68) * fpu6 + *(context + 0x5c) * fpu7;
    double* item_24 = &item_18;
    double item_8 = *(context + 0x78) * fpu5 + *(context + 0x6c) * fpu6 + *(context + 0x60) * fpu7;
    memcpy(&item_18, &item_18, 0x18);
    item_18 = 0;
    *(&item_18 + 4) = 0;

    if (!Sys_PopStack_11(item_24))
        Sys_FreeMemory_11(&item_18);

    int32_t saved_esi_2 = *(&item_10 + 4);
    Sys_ResolveSymbol_9(item_10);
    long double fpu_val_7_2 = item_8;
    long double f0 = 0.0;
    fpu_val_7_2 - f0;
    return (fpu_val_7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f0 ? 1 : 0) << 0xe;
}
