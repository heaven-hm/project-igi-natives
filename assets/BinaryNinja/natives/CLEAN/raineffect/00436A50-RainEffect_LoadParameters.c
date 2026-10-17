// IGI native provenance: RainEffect_LoadParameters - 0x00436A50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00436A50-RainEffect_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RainEffect_LoadParameters.h"
int32_t RainEffect_LoadParameters(void* context)

{
    long double fpu7 = *(context + 0x30);
    long double f0 = *(context + 0x34);
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
        goto label_436a85;

    int32_t entity_val;

    if (!*(context + 0x20))
    {
    label_436a92:
        int32_t item_8_2 = entity_val;
        int32_t item_c_2 = entity_val;
        *(context + 0x20) = Display_CreateSurface_16(Level_StartMission_4(), g_57bd80 + 0x18, *(context + 0x24),
            *(context + 0x28) * 4096.0f, *(context + 0x2c) * 4096.0f);
    }
    else
    {
        void* data_2 = Level_StartMission_4();
        entity_val = Display_OpenDevice_17(*(context + 0x20), data_2);
        *(context + 0x20) = 0;
    label_436a85:

        if (!*(context + 0x20))
            goto label_436a92;
    }
    Display_CheckCapabilities_17(*(context + 0x20), *(context + 0x30));
    *(context + 0x34) = *(context + 0x30);
    Script_Isexists(context + 0x38, context);
    return 0;
}
