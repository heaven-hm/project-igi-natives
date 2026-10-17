// IGI native provenance: SoundSys_AttachLipsync_10 - 0x004E7AC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7AC0-SoundSys_AttachLipsync_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_10.h"
int32_t SoundSys_AttachLipsync_10(void* context, char param_2)

{
    int32_t kind;
    kind = g_a5ea76;
    g_a5ea70 = QTask_HandleInput(context, kind, 0);
    g_a5ea75 = FX_SmokeEmit_24();
    g_5488d8 = param_2;

    if (param_2)
    {
        int32_t item_18 = 0;
        int32_t item_14_1 = 0;
        int32_t item_10_1 = 0;
        int32_t item_c_1 = 0;
        Display_SyncVSync_13(0xa5eb80, 1);
        Display_CheckCapabilities_13(0xa5eb80, &item_18);
    }

    return g_a5ea70;
}
