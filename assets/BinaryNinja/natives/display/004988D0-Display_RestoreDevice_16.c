// IGI native provenance: Display_RestoreDevice_16 - 0x004988D0 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004988D0-Display_RestoreDevice_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_RestoreDevice_16.h"
int32_t Display_RestoreDevice_16(PSTR context)

{
    ShowCursor(1);
    PSTR lpCaption = FX_FireBallUpdate_22();
    MessageBoxA(FX_ExplosionSpawn_22(), context, lpCaption, MB_ICONHAND);
    return ShowCursor(0);
}
