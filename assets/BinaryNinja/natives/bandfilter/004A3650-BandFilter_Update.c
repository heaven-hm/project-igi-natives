// Original IGI.EXE function: BandFilter_Update (VA 0x004A3650; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_Update.h"
int32_t** BandFilter_Update(void* context)

{
    int32_t* data_val = Display_CloseDevice_14(0x10);
    data_val[1] = g_936018;
    data_val[3] = context;
    Display_ClearSurfaces_14(0, data_val);
    int32_t item_14 = *(context + 0x3c);
    int32_t item_18 = *(context + 0x38);
    int32_t item_10 = *(context + 0x30);
    int32_t item_c = *(context + 0x34);
    void item_24;
    return Display_CreateSurface_13(&item_24, 0);
}
