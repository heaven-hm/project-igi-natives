#include "Display_SwapBuffers_8.h"
int32_t Display_SwapBuffers_8()

{
    Display_Cdaudio();
    Display_CdAudio();
    Display_ClearSurfaces_8();
    /* tailcall */
    return Display_CloseDevice_9();
}
