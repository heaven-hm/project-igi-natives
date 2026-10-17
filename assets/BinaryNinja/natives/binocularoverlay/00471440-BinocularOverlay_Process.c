// IGI native provenance: BinocularOverlay_Process - 0x00471440 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00471440-BinocularOverlay_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BinocularOverlay_Process.h"
int32_t BinocularOverlay_Process(void* context)

{
    Display_CloseDevice_15(context + 0x88, context + 0x38, context + 0x60, *(context + 0x78));
    Transcontext_SetActiveTransContext(context + 0x88);
    int32_t result = Weapon_WeaponsStringsBinocu(context);
    Display_SwapBuffers_15();
    return result;
}
