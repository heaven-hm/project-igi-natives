// IGI native provenance: Display_Cdaudio - 0x004952A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004952A0-Display_Cdaudio.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_Cdaudio.h"
uint32_t Display_Cdaudio()

{
    char* item_c = "cdaudio";
    void dwParam2;
    uint32_t result = mciSendCommandA(0, 0x803, 0x2000, &dwParam2);

    if (!result)
    {
        g_6840e8 = 1;
        int32_t item_10;
        g_5ca130 = item_10;
        g_5ca188 = result;
        g_676ab4 = result;
    }

    return result;
}
