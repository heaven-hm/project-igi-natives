// Original IGI.EXE function: BinocularOverlay_Process (VA 0x00471440; static CFG gate PASS, CFG score 1.000).
#include "BinocularOverlay_Process.h"
int32_t BinocularOverlay_Process(void* context)

{
    Display_CloseDevice_15(context + 0x88, context + 0x38, context + 0x60, *(context + 0x78));
    Transcontext_SetActiveTransContext(context + 0x88);
    int32_t result = Weapon_WeaponsStringsBinocu(context);
    Display_SwapBuffers_15();
    return result;
}
