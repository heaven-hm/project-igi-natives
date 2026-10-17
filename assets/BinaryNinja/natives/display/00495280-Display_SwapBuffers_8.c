// Original IGI.EXE function: Display_SwapBuffers_8 (VA 0x00495280; static CFG gate FAIL, CFG score 0.667).
#include "Display_SwapBuffers_8.h"
int32_t Display_SwapBuffers_8()

{
    Display_Cdaudio();
    Display_CdAudio();
    Display_ClearSurfaces_8();
    /* tailcall */
    return Display_CloseDevice_9();
}
