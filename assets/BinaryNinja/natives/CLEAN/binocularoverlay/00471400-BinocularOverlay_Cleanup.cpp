// IGI native provenance: BinocularOverlay_Cleanup - 0x00471400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00471400-BinocularOverlay_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BinocularOverlay_Cleanup.h"
int32_t* BinocularOverlay_Cleanup(void* context)

{
    Script_CallNativeHandler_6(context + 0x24);
    int32_t* result = *(context + 0x20);

    if (result)
    {
        result = *result;

        if (result)
        {
            QTask_FindType(result);
            result = Qtask_UpdateList(*(context + 0x20));
            *(context + 0x20) = 0;
        }
    }

    return result;
}
