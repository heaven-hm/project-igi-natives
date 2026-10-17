// IGI native provenance: Display_SwapBuffers_8 - 0x00495280 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00495280-Display_SwapBuffers_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_8.h"
int32_t Display_SwapBuffers_8()

{
    Display_Cdaudio();
    Display_CdAudio();
    Display_ClearSurfaces_8();
    /* tailcall */
    return Display_CloseDevice_9();
}
