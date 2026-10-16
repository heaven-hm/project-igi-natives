#include "BandFilter_Update.h"
int32_t** BandFilter_Update(void* a1)

{
    int32_t* valA = Display_CloseDevice_14(0x10);
    valA[1] = g_936018;
    valA[3] = a1;
    Display_ClearSurfaces_14(0, valA);
    int32_t v_14 = *(a1 + 0x3c);
    int32_t v_18 = *(a1 + 0x38);
    int32_t v_10 = *(a1 + 0x30);
    int32_t v_c = *(a1 + 0x34);
    void v_24;
    return Display_CreateSurface_13(&v_24, 0);
}
