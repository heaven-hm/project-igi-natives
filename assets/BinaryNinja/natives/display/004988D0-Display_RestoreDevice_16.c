// Original IGI.EXE function: Display_RestoreDevice_16 (VA 0x004988D0; static CFG gate PASS, CFG score 0.867).
#include "Display_RestoreDevice_16.h"
int32_t Display_RestoreDevice_16(PSTR context)

{
    ShowCursor(1);
    PSTR lpCaption = FX_FireBallUpdate_22();
    MessageBoxA(FX_ExplosionSpawn_22(), context, lpCaption, MB_ICONHAND);
    return ShowCursor(0);
}
