// IGI native provenance: Display_OpenDevice_4 - 0x00491A50 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491A50-Display_OpenDevice_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_4.h"
int32_t Display_OpenDevice_4(int32_t context)

{
    char result = g_5ca02d;

    if (result)
    {
        result = (*((Display_ClearSurfaces_5() << 2) + &g_a94e84))(context);
        g_c28b58 = 0xffffffff;
        Sys_OpenFileStream_3();
        g_5ca02d = 0;
    }

    return result;
}
