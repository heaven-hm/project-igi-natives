#include "gi_platform.h"
#include "004988D0-Display_RestoreDevice_16.h"
int32_t Display_RestoreDevice_16(PSTR a1)

{
    ShowCursor(1);
    PSTR lpCaption = FX_FireBallUpdate_22();
    MessageBoxA(FX_ExplosionSpawn_22(), a1, lpCaption, MB_ICONHAND);
    return ShowCursor(0);
}
