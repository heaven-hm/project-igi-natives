// Original IGI.EXE function: BinocularOverlay_Process (VA 0x00471440; static CFG gate PASS, CFG score 1.000).
#include "BinocularOverlay_Process.h"
int32_t BinocularOverlay_Process(void* a1)

{
    Display_CloseDevice_15(a1 + 0x88, a1 + 0x38, a1 + 0x60, *(a1 + 0x78));
    Transcontext_SetActiveTransContext(a1 + 0x88);
    int32_t result = Weapon_WeaponsStringsBinocu(a1);
    Display_SwapBuffers_15();
    return result;
}
