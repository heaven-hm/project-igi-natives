// Original IGI.EXE function: BandFilter_Cleanup_4 (VA 0x004A35B0; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_Cleanup_4.h"
int32_t BandFilter_Cleanup_4(void* a1)

{
    void* srcS = *(a1 + 0xc);
    int32_t v_18 = *(srcS + 0x38);
    int32_t v_14 = *(srcS + 0x3c);
    int32_t v_10 = *(srcS + 0x30);
    int32_t v_c = *(srcS + 0x34);
    Display_CheckCapabilities_13(0xbcaba0, &v_18);
    float objC3 = *(srcS + 0x30);
    float v_40 = objC3;
    Sys_CloseFileStream_14(*(srcS + 0x38), *(srcS + 0x3c) + *(srcS + 0x34) - *(srcS + 0x40), objC3, *(srcS + 0x40),
        *(srcS + 0x20), *(srcS + 0x24), *(srcS + 0x28), 0, 0xffffffff, 0x3f800000);
    int32_t result = Sys_CloseFileStream_14(*(srcS + 0x38), *(srcS + 0x3c), *(srcS + 0x30), *(srcS + 0x40),
        *(srcS + 0x20), *(srcS + 0x24), *(srcS + 0x28), 0, 0xffffffff, 0x3f800000);
    return result;
}
