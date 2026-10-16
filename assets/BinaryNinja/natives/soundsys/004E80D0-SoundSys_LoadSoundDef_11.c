#include "SoundSys_LoadSoundDef_11.h"
uint32_t SoundSys_LoadSoundDef_11()

{
    Display_ClearSurfaces_3(ViewportQTask_Process);
    uint32_t result = QTask_CloseEvent_2(g_54d98c);
    g_a5ec64 = 0;
    return result;
}
