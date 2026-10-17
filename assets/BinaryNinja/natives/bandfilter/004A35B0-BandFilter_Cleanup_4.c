// Original IGI.EXE function: BandFilter_Cleanup_4 (VA 0x004A35B0; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_Cleanup_4.h"
int32_t BandFilter_Cleanup_4(void* context)

{
    void* source_val = *(context + 0xc);
    int32_t item_18 = *(source_val + 0x38);
    int32_t item_14 = *(source_val + 0x3c);
    int32_t item_10 = *(source_val + 0x30);
    int32_t item_c = *(source_val + 0x34);
    Display_CheckCapabilities_13(0xbcaba0, &item_18);
    float entity_3 = *(source_val + 0x30);
    float item_40 = entity_3;
    Sys_CloseFileStream_14(*(source_val + 0x38), *(source_val + 0x3c) + *(source_val + 0x34) - *(source_val + 0x40), entity_3, *(source_val + 0x40),
        *(source_val + 0x20), *(source_val + 0x24), *(source_val + 0x28), 0, 0xffffffff, 0x3f800000);
    int32_t result = Sys_CloseFileStream_14(*(source_val + 0x38), *(source_val + 0x3c), *(source_val + 0x30), *(source_val + 0x40),
        *(source_val + 0x20), *(source_val + 0x24), *(source_val + 0x28), 0, 0xffffffff, 0x3f800000);
    return result;
}
