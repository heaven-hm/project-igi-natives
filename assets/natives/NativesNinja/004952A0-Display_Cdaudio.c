#include "004952A0-Display_Cdaudio.h"
/* 0x004952a0 Display_Cdaudio full linked: callers=1 callees=1 */
uint32_t sub_4952a0()

{
    char* var_c = "cdaudio";
    void dwParam2;
    uint32_t result = mciSendCommandA(0, 0x803, 0x2000, &dwParam2);

    if (!result)
    {
        g_6840e8 = 1;
        int32_t var_10;
        g_5ca130 = var_10;
        g_5ca188 = result;
        g_676ab4 = result;
    }

    return result;
}
