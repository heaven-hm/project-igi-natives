// IGI native provenance: Menu_DrawWidget_20 - 0x00429D80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00429D80-Menu_DrawWidget_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_DrawWidget_20.h"
struct status_msg* Menu_DrawWidget_20(void* context)

{
    struct status_msg* result = SoundSys_SetMasterVolume_7(context, *(*(context + 0x1b4) + 0x2d4) + 0x23c);
    *(context + 0x890) = result;

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, context + 0x20);
}
