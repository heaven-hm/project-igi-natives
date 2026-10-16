#include "Display_CheckCapabilities_13.h"
int32_t Display_CheckCapabilities_13(void* a1, int32_t* a2)

{
    *(a1 + 0x18) = *a2;
    *(a1 + 0x1c) = a2[1];
    *(a1 + 0x20) = a2[2];
    *(a1 + 0x24) = a2[3];
    *(a1 + 0x28) = a2[2] * 0.5f;
    *(a1 + 0x2c) = a2[3] * 0.5f;
    int32_t valA1 = Display_SetGammaRamp_4();
    float v_8 = *(a1 + 0x18);
    float v_4 = *(a1 + 0x1c);
    long double x87_r7_7 = *(a1 + 0x20) + *(a1 + 0x18);
    *(a1 + 0x10) = valA1;
    float v_10 = x87_r7_7;
    float v_c = *(a1 + 0x24) + *(a1 + 0x1c);
    return Display_CloseDevice_13(a1, &v_8, &v_10);
}
