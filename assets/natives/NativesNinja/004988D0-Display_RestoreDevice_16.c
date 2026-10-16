#include "004988D0-Display_RestoreDevice_16.h"
/* 0x004988d0 Display_RestoreDevice_16 full linked: callers=2 callees=5 */
int32_t sub_4988d0(PSTR a1)

{
    ShowCursor(1);
    PSTR lpCaption = sub_48f0b0();
    MessageBoxA(sub_48f0a0(), a1, lpCaption, MB_ICONHAND);
    return ShowCursor(0);
}
