// IGI native provenance: GunClip_Cleanup - 0x00477A70 - CFG score 85.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00477A70-GunClip_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunClip_Cleanup.h"
int32_t* GunClip_Cleanup(void* context, int32_t* param_2)

{
    void* data_1 = DynObj_Missing(*param_2);

    if (data_1)
    {
        memcpy(context + 0xf0, &param_2[8], 0x18);
        memcpy(context + 0x108, &param_2[0x18], 0x28);
        DynObj_LookupHashItem_6(param_2[1], context, data_1);
        *(context + 0xec) = 0;
        memcpy(context + 0x70, &param_2[0xe], 0x28);
        *(context + 0x138) = param_2[0x23];
        int32_t flagP1 = param_2[0x22];
        *(context + 0x130) = flagP1;
        return Car_GunCreate(context, context, flagP1);
    }

    int32_t saved_ebx_1 = *param_2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
