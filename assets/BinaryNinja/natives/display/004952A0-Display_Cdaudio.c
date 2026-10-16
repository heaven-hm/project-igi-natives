#include "Display_Cdaudio.h"
uint32_t Display_Cdaudio()

{
    char* v_c = "cdaudio";
    void dwParam2;
    uint32_t result = mciSendCommandA(0, 0x803, 0x2000, &dwParam2);

    if (!result)
    {
        g_6840e8 = 1;
        int32_t v_10;
        g_5ca130 = v_10;
        g_5ca188 = result;
        g_676ab4 = result;
    }

    return result;
}
