// IGI native provenance: Display_SetDisplayMode_10 - 0x00495F40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495F40-Display_SetDisplayMode_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_10.h"
uint32_t __fastcall Display_SetDisplayMode_10(int32_t context)

{
    int32_t dwParam2 = context;
    uint32_t mciId = g_5ca130;
    dwParam2 = 0;
    uint32_t result = mciSendCommandA(mciId, 0x808, 0, &dwParam2);
    g_543918 = 0xffffffff;
    return result;
}
