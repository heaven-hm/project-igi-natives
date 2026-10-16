#include "gi_platform.h"
#include "004E7180-SoundSys_AttachLipsync_8.h"
int32_t SoundSys_AttachLipsync_8(char* a1, int32_t a2, int32_t a3)

{
    char result = g_a5e60a;

    if (result)
        return result;

    uint32_t valA = Display_CheckCapabilities_12(a1);
    int32_t valA1 = Display_RestoreDevice_12(a1);
    char v_58;

    if (!a3)
        Display_SetGammaRamp_12(&v_58);
    else
        memcpy(&v_58, a3, 0x20);

    int32_t valA2 = g_a5e5f8;
    g_a5e5f8 = valA2 + 1;
    int32_t valA4 = a2;
    valA4 |= 1;
    float* __saved_edi_3 = &v_58;
    int32_t v_78 = valA2;
    return (SoundSys_SetMasterVolume_8(v_78, valA, valA1, valA4, __saved_edi_3), 0);
}
